#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from prototype.action import GoTo
from rclpy.callback_groups import ReentrantCallbackGroup

class RobotNavNode(Node):

    def __init__(self):
        super().__init__('robot_nav_node')
        
        self.cb_group = ReentrantCallbackGroup()
        
        self.action_server = ActionServer(
            self,
            GoTo,
            'table_nav',
            self.execute_callback,
            callback_group=self.cb_group
        )
        
        self.navigator = BasicNavigator()
        self.get_logger().info('RobotNavNode has been initialized')


    def execute_callback(self, goal_handle):
        self.get_logger().info('Received new goal')

      
        goal = goal_handle.request
        self.get_logger().info(f'Executing goal: x={goal.x}, y={goal.y}, z={goal.z}, w={goal.w}')

        goal_pose = PoseStamped()
        goal_pose.header.frame_id = 'map'
        goal_pose.header.stamp = self.get_clock().now().to_msg()
        goal_pose.pose.position.x = goal.x
        goal_pose.pose.position.y = goal.y
        goal_pose.pose.position.z = goal.z
        goal_pose.pose.orientation.w = goal.w

        try:
            self.navigator.goToPose(goal_pose)
            self.get_logger().info('Goal sent to navigator')

            feedback_msg = GoTo.Feedback()
            
            while not self.navigator.isTaskComplete():
                feedback = self.navigator.getFeedback()
                if feedback:
                    feedback_msg.x = feedback.current_pose.pose.position.x
                    feedback_msg.y = feedback.current_pose.pose.position.y
                    feedback_msg.z = feedback.current_pose.pose.position.z
                    goal_handle.publish_feedback(feedback_msg)
                    self.get_logger().debug(f'Current position: x={feedback_msg.x:.2f}, y={feedback_msg.y:.2f}, z={feedback_msg.z:.2f}')
                
                if goal_handle.is_cancel_requested:
                    self.get_logger().info('Goal was canceled')
                    goal_handle.canceled()
                    return GoTo.Result(success=False)

                #rclpy.spin_once(self, timeout_sec=0.1)

            result = self.navigator.getResult()
            goal_result = GoTo.Result()

            if result == TaskResult.SUCCEEDED:
                goal_handle.succeed()
                goal_result.success = True
                self.get_logger().info('Goal succeeded!')
            else:
                goal_handle.abort()
                goal_result.success = False
                self.get_logger().error(f'Goal failed with result: {result}')

        except Exception as e:
            self.get_logger().error(f'Error during goal execution: {str(e)}')
            goal_handle.abort()
            goal_result = GoTo.Result(success=False)

      

        return goal_result

def main(args=None):
    rclpy.init(args=args)
    robot_nav_node = RobotNavNode()
    rclpy.spin(robot_nav_node)
    robot_nav_node.destroy_node()
    rclpy.shutdown()
        
if __name__ == '__main__':
    main()
