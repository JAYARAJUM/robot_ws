#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class MotorControllerNode(Node):
    def __init__(self):
        super().__init__('motor_controller')
        self.subscription = self.create_subscription(
            Twist,
            'cmd_vel',
            self.cmd_vel_callback,
            10
        )
        
    def cmd_vel_callback(self, msg):
    
        linear_x = msg.linear.x
        angular_z = msg.angular.z
        
   
        left_motor_speed = linear_x - angular_z
        right_motor_speed = linear_x + angular_z
        

        self.set_motor_speeds(left_motor_speed, right_motor_speed)

    def set_motor_speeds(self, left_speed, right_speed):
        self.get_logger().info(f'Setting motor speeds: left={left_speed}, right={right_speed}')
        
def main(args=None):
    rclpy.init(args=args)
    node = MotorControllerNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
