#!/usr/bin/env python3

import rclpy
import py_trees
import py_trees_ros
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import String
from rclpy.action import ActionClient
from prototype.action import GoTo
from rclpy.action.client import GoalStatus
import math
from py_trees.common import Status
from py_trees.blackboard import Blackboard
import yaml
import os
from action_msgs.msg import GoalStatus
from rclpy.executors import MultiThreadedExecutor
from typing import Optional
from rclpy.duration import Duration
import time


# Specify the path to your YAML file
YAML_PATH = os.path.join(os.path.dirname(__file__), '/home/jayaaraju/ros_project_ws/src/waiter_tree/waiter_tree/confirmations.yaml')

class NavigationBridge(Node):
    def __init__(self):
        super().__init__('navigation_bridge')
        self._publisher = self.create_publisher(Twist, 'cmd_vel', 10)
        self.current_x = 0.0
        self.current_y = 0.0
        self.current_z = 0.0

    def publish_cmd_vel(self, x, y, z):
        dx = x - self.current_x
        dy = y - self.current_y
        distance = math.sqrt(dx**2 + dy**2)
        
        if distance > 0.1:  
            twist = Twist()
            twist.linear.x = dx / distance * 0.5  
            twist.angular.z = math.atan2(dy, dx)
            self._publisher.publish(twist)
            
            self.current_x = x
            self.current_y = y
            self.current_z = z
        self.get_logger().info(f"Published cmd_vel: x={x}, y={y}, z={z}")



class TimedBehavior(py_trees.behaviour.Behaviour):
    def __init__(self, name):
        super().__init__(name)
        self.execution_time = 0

    def update(self):
        start_time = time.time()
        result = super().update()
        self.execution_time = time.time() - start_time
        self.logger.info(f"{self.name} execution time: {self.execution_time:.6f} seconds")
        return result
    
def load_confirmations(yaml_path):
    try:
        with open(yaml_path, 'r') as file:
            confirmations = yaml.safe_load(file)
            #print(f"Loaded confirmations: {confirmations}")  #
            return confirmations
    except FileNotFoundError:
        #print(f"YAML file not found at {yaml_path}")  
        return {}
    except yaml.YAMLError as e:
        #print(f"Error parsing YAML file: {e}")  # Debug print
        return {}
class Delay(py_trees.behaviour.Behaviour):
    def __init__(self, name, delay_time):
        super().__init__(name)
        self.delay_time = delay_time
        self.start_time = None

    def initialise(self):
        self.start_time = time.time()

    def update(self):
        if time.time() - self.start_time > self.delay_time:
            return py_trees.common.Status.SUCCESS
        return py_trees.common.Status.RUNNING
    
class UpdateChefCallingAndConfirmations(py_trees.behaviour.Behaviour):
    def __init__(self, name: str, yaml_path: str):
        super().__init__(name)
        self.blackboard = self.attach_blackboard_client(name)
        self.blackboard.register_key("chef_calling", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("multiple_orders", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("kitchen_confirmed", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("kitchen_canceled", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("table1_confirmed", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("table1_canceled", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("table2_confirmed", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("table2_canceled", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("table3_confirmed", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("table3_canceled", access=py_trees.common.Access.WRITE)
        self.blackboard.register_key("all_orders_canceled", access=py_trees.common.Access.WRITE)
        
        self.yaml_path = yaml_path
        self.chef_calling_sub = None

    def setup(self, **kwargs):
        try:
            self.chef_calling_sub = kwargs['node'].create_subscription(
                String,
                'chef_calling',
                self.chef_calling_callback,
                10
            )
        except KeyError as e:
            raise KeyError(f"UpdateChefCallingAndConfirmations requires 'node' in kwargs, but {e} not found")

    def chef_calling_callback(self, msg):
        self.blackboard.set("chef_calling", msg.data)
        if msg.data == "multiple_orders":
            self.blackboard.set("multiple_orders", True)
        self.logger.info(f"Updated chef_calling to: {msg.data}")
        self.logger.info(f"Updated multiple_orders to: {self.blackboard.get('multiple_orders')}")

    def update(self):
        order_status = load_confirmations(self.yaml_path)
        
        self.blackboard.set("kitchen_confirmed", order_status['kitchen']['confirmed'])
        self.blackboard.set("kitchen_canceled", order_status['kitchen']['canceled'])
        self.blackboard.set("table1_confirmed", order_status['table1']['confirmed'])
        self.blackboard.set("table1_canceled", order_status['table1']['canceled'])
        self.blackboard.set("table2_confirmed", order_status['table2']['confirmed'])
        self.blackboard.set("table2_canceled", order_status['table2']['canceled'])
        self.blackboard.set("table3_confirmed", order_status['table3']['confirmed'])
        self.blackboard.set("table3_canceled", order_status['table3']['canceled'])
        
        all_canceled = all(order_status[loc]['canceled'] for loc in ['kitchen', 'table1', 'table2', 'table3'])
        self.blackboard.set("all_orders_canceled", all_canceled)
        
        if all_canceled:
            self.logger.info("All orders have been canceled. No actions will be performed.")
            return py_trees.common.Status.FAILURE
        
        return py_trees.common.Status.SUCCESS



class CheckMultipleOrders(py_trees.behaviour.Behaviour):
    def __init__(self, name: str):
        super().__init__(name)
        self.blackboard = self.attach_blackboard_client(name)
        self.blackboard.register_key("multiple_orders", access=py_trees.common.Access.READ)

    def update(self):
        self.logger.info(f"Updating {self.name}")
        multiple_orders = self.blackboard.get("multiple_orders")
        return py_trees.common.Status.SUCCESS if multiple_orders else py_trees.common.Status.FAILURE


class GoToActionClient(py_trees.behaviour.Behaviour):
    def __init__(self, name, goal, navigation_bridge, timeout=10):
        super().__init__(name)
        self.goal = goal
        self._action_client = None
        self.navigation_bridge = navigation_bridge
        self._send_goal_future = None
        self._get_result_future = None
        self.feedback_received = False
        self.start_time = None
        self.timeout = timeout
        self.node = None
        self._status = py_trees.common.Status.INVALID
        self.last_feedback = None

    def setup(self, **kwargs):
        try:
            self.node = kwargs['node']
            self._action_client = ActionClient(self.node, GoTo, 'table_nav')
        except KeyError as e:
            raise KeyError(f"GoToActionClient requires 'node' in kwargs, but {e} not found")

    def initialise(self):
        self.logger.info(f"{self.name} initialising...")
        if not self.navigation_bridge:
            self.logger.error("Navigation bridge is not set!")
            return

        self.logger.info("Waiting for action server...")
        server_ready=self._action_client.wait_for_server(timeout_sec=5.0)
        if not server_ready:    
            self.logger.error("Action server not available!")
            return py_trees.common.Status.FAILURE
        self.logger.info("Action server found. Sending goal...")
        self._send_goal_future = self._action_client.send_goal_async(self.goal, feedback_callback=self.feedback_callback)
        self.logger.info(f"Goal sent: {self.goal}")
        self._send_goal_future.add_done_callback(self.goal_response_callback)
        self.feedback_received = False
        self.start_time = self.node.get_clock().now()
        self._status = py_trees.common.Status.RUNNING

    def update(self):
        self.logger.info(f"{self.name} updating...")
        
        if self._status != py_trees.common.Status.RUNNING:
            return self._status

        if self._get_result_future and self._get_result_future.done():
            result = self._get_result_future.result().result
            if result:
                self.logger.info(f"Goal reached: {self.name}")
                return py_trees.common.Status.SUCCESS
            else:
                self.logger.error(f"Goal failed: {self.name}")
                return py_trees.common.Status.FAILURE

        return py_trees.common.Status.RUNNING


    def feedback_callback(self, feedback_msg):
        self.feedback_received = True
        feedback = feedback_msg.feedback
        self.logger.info(f"Received feedback: x={feedback.x}, y={feedback.y}, z={feedback.z}")
        self.last_feedback = feedback
        try:
            if self.navigation_bridge:
                self.navigation_bridge.publish_cmd_vel(feedback.x, feedback.y, feedback.z)
                self.logger.info(f"Published cmd_vel: x={feedback.x}, y={feedback.y}, z={feedback.z}")
                
                if self.is_goal_reached(feedback):
                    self._status = py_trees.common.Status.SUCCESS
                    self.logger.info(f"Goal reached: {self.name}")
            else:
                self.logger.error("Navigation bridge is not set!")
        except Exception as e:
            self.logger.error(f"Error in feedback_callback: {str(e)}")

    def is_goal_reached(self, feedback):
        distance_threshold = 0.1  # meters
        distance_to_goal = ((self.goal.x - feedback.x)**2 + 
                            (self.goal.y - feedback.y)**2 + 
                            (self.goal.z - feedback.z)**2)**0.5
        return distance_to_goal < distance_threshold
    
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.logger.error('Goal rejected')
            self._status = py_trees.common.Status.FAILURE
            return

        self.logger.info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result()
        if result.status == GoalStatus.STATUS_SUCCEEDED:
            self.logger.info("Goal succeeded!")
            self._status = py_trees.common.Status.SUCCESS
        else:
            self.logger.error(f"Goal failed with status: {result.status}")
            self._status = py_trees.common.Status.FAILURE

class LoggingBehavior(py_trees.behaviour.Behaviour):
    def __init__(self, name, message):
        super().__init__(name)
        self.message = message

    def update(self):
        if callable(self.message):
            self.logger.info(self.message())
        else:
            self.logger.info(self.message)
        return py_trees.common.Status.SUCCESS

    
def create_root(navigation_bridge: NavigationBridge) -> py_trees.behaviour.Behaviour:
    root = py_trees.composites.Parallel(name="waiter_robot", policy=py_trees.common.ParallelPolicy.SuccessOnOne())

    blackboard = py_trees.blackboard.Blackboard()
    blackboard.set("chef_calling", "")
    blackboard.set("multiple_orders", False)
    blackboard.set("trigger_tree", False)
    blackboard.set("last_location", "home")
    blackboard.set("kitchen_confirmed", False)
    blackboard.set("kitchen_canceled", False)
    blackboard.set("table1_confirmed", False)
    blackboard.set("table1_canceled", False)
    blackboard.set("table2_confirmed", False)
    blackboard.set("table2_canceled", False)
    blackboard.set("table3_confirmed", False)
    blackboard.set("table3_canceled", False)
    blackboard.set("all_orders_canceled", False)
    
    # Locations
    home = GoTo.Goal(x=0.0, y=0.0, z=0.0, w=0.0)
    kitchen = GoTo.Goal(x=0.3, y=3.0, z=0.0, w=0.0)
    table_locations = {
        1: GoTo.Goal(x=0.50000, y=-1.0, z=0.0, w=0.0),
        2: GoTo.Goal(x=2.0, y=-4.50000, z=0.0, w=0.0),
        3: GoTo.Goal(x=-1.00, y=-4.50000, z=0.0, w=0.0)
    }

    def create_go_to_action(name, location):
        return GoToActionClient(name=name, goal=location, navigation_bridge=navigation_bridge)
        

    def create_table_sequence(table_number, table_location):
        return py_trees.composites.Sequence(
            memory=True,  
            name=f"table{table_number}_sequence",
            children=[
                LoggingBehavior(name=f"log_starttable{table_number}", message=f"Starting sequence for table {table_number}"),
                py_trees.composites.Selector(
                    memory=True,
                    name=f"handle_table{table_number}_cancelations",
                    children=[
                        py_trees.composites.Sequence(
                            memory=True,
                            name=f"table{table_number}_cancelation",
                            children=[
                                py_trees.decorators.EternalGuard(
                                    name=f"check_table{table_number}_cancelation",
                                    condition=lambda: blackboard.get(f"table{table_number}_canceled") == False,
                                    child=py_trees.composites.Sequence(
                                        memory=True,
                                        name=f"table{table_number}_confirmation_sequence",
                                        children=[
                                            py_trees.behaviours.Success(name=f"table{table_number}_confirmation_successful"),
                                            py_trees.composites.Selector(
                                                memory=True,
                                                name=f"handle_table{table_number}_confirmation",
                                                children=[
                                                    py_trees.composites.Sequence(
                                                        memory=True,
                                                        name=f"table{table_number}_confirmed",
                                                        children=[
                                                            create_go_to_action(f"go_to_table{table_number}", table_location),
                                                            py_trees.decorators.EternalGuard(
                                                                name=f"check_table{table_number}_confirmed",
                                                                condition=lambda: blackboard.get(f"table{table_number}_confirmed") == True,
                                                                child=py_trees.composites.Sequence(
                                                                    memory=True,
                                                                    name=f"table{table_number}_delivery_sequence",
                                                                    children=[
                                                                        LoggingBehavior(name=f"log_table{table_number}_confirmed", message=f"Table {table_number} confirmed, proceeding with delivery"),
                                                                        LoggingBehavior(name=f"log_table{table_number}_reached", message=f"Reached table {table_number}"),
                                                                        py_trees.behaviours.Success(name=f"table{table_number}_delivery_successful"),
                                                                        LoggingBehavior(name=f"log_table{table_number}_delivered", message=f"Order delivered to table {table_number}"),
                                                                        create_go_to_action("go_to_home", home),
                                                                        LoggingBehavior(name="log_returned_home", message="Returned home after successful delivery")
                                                                    ]
                                                                )
                                                            ),
                                                        ]
                                                    ),
                                                    py_trees.composites.Sequence(
                                                        memory=True, 
                                                        name=f"table{table_number}_not_confirmed",
                                                        children=[
                                                            LoggingBehavior(name=f"log_table{table_number}_not_confirmed", message=f"Table {table_number} not confirmed, returning to kitchen"),
                                                            create_go_to_action("return_to_kitchen", kitchen),
                                                            create_go_to_action("go_to_home", home),
                                                            LoggingBehavior(name=f"log_table{table_number}_returned_home", message=f"Returned home after failed confirmation for table {table_number}")
                                                        ]
                                                    )
                                                ]
                                            )
                                        ]
                                    )
                                ),
                                py_trees.composites.Sequence(
                                    memory=True,
                                    name="Given table is canceled",
                                    children=[
                                        py_trees.decorators.EternalGuard(
                                            name=f"check_table{table_number}_canceled",
                                            condition=lambda: blackboard.get(f"table{table_number}_canceled") == True,
                                            child=py_trees.composites.Sequence(
                                                memory=True,
                                                name=f"handle_table{table_number}_cancelation",
                                                children=[
                                                    LoggingBehavior(name=f"log_table{table_number}_canceled", message=f"Table {table_number} canceled, return to the home"),
                                                    create_go_to_action("go_to_home", home),
                                                    LoggingBehavior(name=f"log_table{table_number}_returned_home", message=f"Returned home after table canceled")
                                                ]
                                            )
                                        )
                                    ]
                                )
                            ]
                        )
                    ]
                )
            ],
        )
    def create_multi_table_sequence(table_number, table_location):
        return py_trees.composites.Selector(
            memory=True,
            name=f"table{table_number}_selector",
            children=[
                py_trees.composites.Sequence(
                    memory=True,
                    name=f"table{table_number}_active",
                    children=[
                        py_trees.decorators.EternalGuard(
                            name=f"check_table{table_number}_not_canceled",
                            condition=lambda: blackboard.get(f"table{table_number}_canceled") == False,
                            child=py_trees.composites.Sequence(
                                memory=True,
                                name=f"table{table_number}_delivery_sequence",
                                children=[
                                    LoggingBehavior(name=f"log_starttable{table_number}", message=f"Starting sequence for table {table_number}"),
                                    create_go_to_action(f"go_to_table{table_number}", table_location),
                                    LoggingBehavior(name=f"log_table{table_number}_reached", message=f"Reached table {table_number}"),
                                    py_trees.decorators.EternalGuard(
                                        name=f"check_table{table_number}_confirmed",
                                        condition=lambda: blackboard.get(f"table{table_number}_confirmed") == True,
                                        child=py_trees.composites.Sequence(
                                            memory=True,
                                            name=f"table{table_number}_confirmed_sequence",
                                            children=[
                                                LoggingBehavior(name=f"log_table{table_number}_confirmed", message=f"Table {table_number} confirmed, proceeding with delivery"),
                                                py_trees.behaviours.Success(name=f"table{table_number}_delivery_successful"),
                                            ]
                                        )
                                    ),
                                ]
                            )
                        ),
                    ]
                ),
                py_trees.composites.Sequence(
                    memory=True,
                    name=f"table{table_number}_canceled",
                    children=[
                        py_trees.decorators.EternalGuard(
                            name=f"check_table{table_number}_canceled",
                            condition=lambda: blackboard.get(f"table{table_number}_canceled") == True,
                            child=py_trees.composites.Sequence(
                                memory=True,
                                name=f"handle_table{table_number}_cancelation",
                                children=[
                                LoggingBehavior(name=f"log_table{table_number}_canceled", message=f"Table {table_number} canceled, skipping to next table"),
                                py_trees.behaviours.Success(name=f"skip_table{table_number}")
                            ])
                        )
                    ]       
                )
            ],
        )
        
    update_chef_calling_and_confirmations = UpdateChefCallingAndConfirmations(
        name="update_chef_calling_and_confirmations", yaml_path=YAML_PATH)
    
    main_sequence = py_trees.composites.Sequence(
    memory=True,
    name="main_sequence",
    children=[
        update_chef_calling_and_confirmations,
        py_trees.decorators.EternalGuard(
            name="check_and_process_orders",
            condition=lambda: blackboard.get("chef_calling") != "" or blackboard.get("trigger_tree") == True or blackboard.get("multiple_orders") == True,
            child=py_trees.composites.Sequence(
                memory=True,
                name="process_orders",
                children=[
                    LoggingBehavior(name="log_process_orders_start", message="Starting process_orders sequence"),
                    py_trees.behaviours.SetBlackboardVariable(
                        name="reset_trigger",
                        variable_name="trigger_tree",
                        variable_value=False,
                        overwrite=True
                    ),
                    LoggingBehavior(
                        name="log_check_chef_calling",
                        message=lambda: f"Chef calling status: {blackboard.get('chef_calling')}"
                    ),
                    py_trees.composites.Selector(
                        memory=True,
                        name="handle_order_types",
                        children=[
                            py_trees.composites.Sequence(
                                memory=True,
                                name="handle_multiple_orders",
                                children=[
                                    py_trees.decorators.EternalGuard(
                                        name="check_multiple_orders",
                                        condition=lambda: blackboard.get("multiple_orders") == True,
                                        child=py_trees.composites.Sequence(
                                            memory=True,
                                            name="process_multiple_orders",
                                            children=[
                                                LoggingBehavior(name="log_multiple_orders", message="Processing multiple orders"),
                                                create_go_to_action("go_to_kitchen", kitchen),
                                                py_trees.decorators.EternalGuard(
                                                    name="check_kitchen_confirmed",
                                                    condition=lambda: blackboard.get("kitchen_confirmed") == True,
                                                    child=py_trees.composites.Sequence(
                                                        memory=True,
                                                        name="serve_tables",
                                                        children=[
                                                            create_multi_table_sequence(1, table_locations[1]),
                                                            create_multi_table_sequence(2, table_locations[2]),
                                                            create_multi_table_sequence(3, table_locations[3]),
                                                            create_go_to_action("go_to_kitchen", kitchen),
                                                            create_go_to_action("go_to_home", home)
                                                        ]
                                                    )
                                                ),
                                                py_trees.behaviours.SetBlackboardVariable(
                                                    name="reset_multiple_orders",
                                                    variable_name="multiple_orders",
                                                    variable_value=False,
                                                    overwrite=True
                                                ),
                                                py_trees.behaviours.SetBlackboardVariable(
                                                    name="reset_chef_calling",
                                                    variable_name="chef_calling",
                                                    variable_value="",
                                                    overwrite=True
                                                ),
                                                LoggingBehavior(name="log_multiple_orders_completed", message="Completed processing multiple orders")
                                            ]
                                        )
                                    )
                                ],
                            ),
                            py_trees.composites.Sequence(
                                memory=True,
                                name="handle_single_order",
                                children=[
                                    py_trees.decorators.EternalGuard(
                                        name="check_single_order",
                                        condition=lambda: blackboard.get("chef_calling") in ["1", "2", "3"],
                                        child=py_trees.composites.Sequence(
                                            memory=True,
                                            name="process_single_order",
                                            children=[
                                                LoggingBehavior(
                                                    name="log_single_order",
                                                    message=lambda: f"Processing single order for table {blackboard.get('chef_calling')}"
                                                ),
                                                create_go_to_action("go_to_kitchen", kitchen),
                                                py_trees.composites.Selector(
                                                    memory=True,
                                                    name="handle_kitchen_confirmation",
                                                    children=[
                                                        py_trees.composites.Sequence(
                                                            memory=True,
                                                            name="kitchen_confirmed",
                                                            children=[
                                                                py_trees.decorators.EternalGuard(
                                                                    name="check_kitchen_confirmed",
                                                                    condition=lambda: blackboard.get("kitchen_confirmed") == True,
                                                                    child=py_trees.composites.Selector(
                                                                        memory=True,
                                                                        name="serve_single_table",
                                                                        children=[
                                                                            py_trees.composites.Sequence(
                                                                                memory=True,
                                                                                name="serve_table_1",
                                                                                children=[
                                                                                    py_trees.decorators.EternalGuard(
                                                                                        name="check_table_1_called",
                                                                                        condition=lambda: blackboard.get("chef_calling") == "1",
                                                                                        child=create_table_sequence(1, table_locations[1])
                                                                                    )
                                                                                ]
                                                                            ),
                                                                            py_trees.composites.Sequence(
                                                                                memory=True,
                                                                                name="serve_table_2",
                                                                                children=[
                                                                                    py_trees.decorators.EternalGuard(
                                                                                        name="check_table_2_called",
                                                                                        condition=lambda: blackboard.get("chef_calling") == "2",
                                                                                        child=create_table_sequence(2, table_locations[2])
                                                                                    )
                                                                                ]
                                                                            ),
                                                                            py_trees.composites.Sequence(
                                                                                memory=True,
                                                                                name="serve_table_3",
                                                                                children=[
                                                                                    py_trees.decorators.EternalGuard(
                                                                                        name="check_table_3_called",
                                                                                        condition=lambda: blackboard.get("chef_calling") == "3",
                                                                                        child=create_table_sequence(3, table_locations[3])
                                                                                    )
                                                                                ]
                                                                            )
                                                                        ]
                                                                    ),
                                                                )
                                                            ]
                                                        ),
                                                        py_trees.composites.Sequence(
                                                            memory=True,
                                                            name="kitchen_not_confirmed",
                                                            children=[
                                                                LoggingBehavior(name="log_kitchen_not_confirmed", message="Kitchen not confirmed, returning home"),
                                                                create_go_to_action("go_to_home", home)
                                                            ]
                                                        )
                                                    ]
                                                ),
                                                py_trees.behaviours.SetBlackboardVariable(
                                                    name="reset_chef_calling",
                                                    variable_name="chef_calling",
                                                    variable_value="",
                                                    overwrite=True
                                                ),
                                                py_trees.composites.Selector(
                                                    memory=True,
                                                    name="return_home_if_needed",
                                                    children=[
                                                        py_trees.decorators.EternalGuard(
                                                            name="check_if_at_home",
                                                            condition=lambda: blackboard.get("last_location") == "home",
                                                            child=py_trees.behaviours.Success(name="already_at_home")
                                                        ),
                                                        py_trees.composites.Sequence(
                                                            memory=True,
                                                            name="go_home_sequence",
                                                            children=[
                                                                LoggingBehavior(name="log_going_home", message="Returning to home position"),
                                                                create_go_to_action("go_to_home", home),
                                                                py_trees.behaviours.SetBlackboardVariable(
                                                                    name="update_last_location_home",
                                                                    variable_name="last_location",
                                                                    variable_value="home",
                                                                    overwrite=True
                                                                ),
                                                                LoggingBehavior(name="log_arrived_home", message="Arrived at home position")
                                                            ]
                                                        )
                                                    ]
                                                )
                                            ]
                                        )
                                    )
                                ]
                            )
                        ]
                    )
                ]
            )
        )
    ]
)
    root.add_child(main_sequence)
    root.shutdown()
    return root

def main(args=None):
    rclpy.init(args=args)

    navigation_bridge = NavigationBridge()
    root = create_root(navigation_bridge)
    tree = py_trees_ros.trees.BehaviourTree(
        root=root,
        unicode_tree_debug=True
    )

    try:
        tree.setup(node_name="waiter_robot", timeout=15.0)
        print("Behavior tree setup completed successfully")
    except py_trees_ros.exceptions.TimedOutError as e:
        print(f"Failed to setup the tree, aborting: {str(e)}")
        rclpy.shutdown()
        return
    
    def tick_tree():
        
        tree.tick()
        #print("\nBlackboard contents:")
        #print(blackboard.storage)

    try:
        timer = tree.node.create_timer(1.0, tick_tree)
        print("Starting node spin")
        rclpy.spin(tree.node)
    except KeyboardInterrupt:
        print("Keyboard interrupt received")
    finally:
        print("Shutting down")
        try:
            timer.cancel()
        except Exception as e:
            print(f"Error cancelling timer: {e}")
        tree.shutdown()
        navigation_bridge.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()