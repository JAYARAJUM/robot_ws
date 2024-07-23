#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import yaml
import os
import py_trees
import py_trees_ros
from py_trees.blackboard import Blackboard

class OrderDetectionNode(Node):
    def __init__(self):
        super().__init__('order_detection_node')
        
        config_file_path = os.path.join(os.path.dirname(__file__), 'order_detected.yaml')
        with open(config_file_path, 'r') as file:
            self.config = yaml.safe_load(file)
        
        self.mode = self.config.get('mode', 'single_order')
        
        self.chef_publisher = self.create_publisher(String, 'chef_calling', 10)
        self.order_publisher = self.create_publisher(String, 'detected_order', 10)
        #self.blackboard_publisher = self.create_publisher(String, 'blackboard_updates', 10)
        
        self.blackboard = Blackboard()
        self.initialize_blackboard()
        
        self.timer = self.create_timer(self.config[self.mode]['interval'], self.call_chef)

    def initialize_blackboard(self):
        self.blackboard.set("multiple_orders", False)
        self.blackboard.set("chef_calling", None)
        self.blackboard.set("trigger_tree", False)
        self.get_logger().info(f"Blackboard initialized: {self.blackboard}")

    def call_chef(self):
        tables = self.config[self.mode]['tables']
        
        if self.mode == 'single_order':
            table_number = tables[0]['table_number']
            msg = String()
            msg.data = str(table_number)
            self.chef_publisher.publish(msg)
            self.order_publisher.publish(msg)
            self.get_logger().info(f'Detected order for table {table_number}')
            self.get_logger().info(f'Chef called for table {table_number}')
            
            self.blackboard.set("chef_calling", str(table_number))
            self.blackboard.set("trigger_tree", True)
            
        elif self.mode == 'multiple_orders':
            msg = String()
            msg.data = 'multiple_orders'
            self.chef_publisher.publish(msg)
            self.get_logger().info('Chef called for multiple orders')
            
            self.blackboard.set("multiple_orders", True)
            self.blackboard.set("chef_calling", "multiple_orders")
            self.blackboard.set("trigger_tree", True)
            self.get_logger().info(f"Set chef_calling to: {self.blackboard.get('chef_calling')}")

            for table in tables:
                table_number = table['table_number']
                order_msg = String()
                order_msg.data = str(table_number)
                self.order_publisher.publish(order_msg)
                self.get_logger().info(f'Detected order for table {table_number}')
            
            #self.publish_blackboard_update()
        
        #self.get_logger().info(f'Blackboard state after chef call: {self.blackboard}')
    """
    def publish_blackboard_update(self):
        update_msg = String()
        update_msg.data = str(self.blackboard)
        self.blackboard_publisher.publish(update_msg)
        self.get_logger().info(f'Published blackboard update: {update_msg.data}')
    """
    def get_blackboard(self):
        return str(self.blackboard)
def main(args=None):
    rclpy.init(args=args)
    order_detection_node = OrderDetectionNode()
    rclpy.spin(order_detection_node)
    order_detection_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()