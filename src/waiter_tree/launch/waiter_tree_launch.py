import os
from ament_index_python import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    run_waiter_bt = LaunchConfiguration('run_waiter_bt', default='true')
    run_odom_node = LaunchConfiguration('run_odom_node', default='true')
    run_motor_controller = LaunchConfiguration('run_motor_controller', default='true')
    
    # Launch the waiter_robot_bt node
    waiter_robot_bt_node = Node(
        package='waiter_tree',
        executable='waiter_robot_bt.py',
        name='waiter_robot_bt',
        output='screen'
    )
     # Define the odom node
    odom_node = Node(
        package='waiter_tree',
        executable='odom_publisher.py',
        name='odom_base',
        output='screen'
        
    )

    # Define the motor controller node
    motor_controller_node = Node(
        package='waiter_tree',
        executable='motor_controller.py',
        name='motor_controller',
        output='screen'
    )

    table_navigation_node = Node(
        package='navigator_planner',
        executable='table_navigation.py',
        name='table_navigation',
        output='screen'
    )

    order_detection_node=Node(
        package='waiter_tree',
        executable='order_detection.py',
        name='order_detection',
        output='screen'
    )
    
    # Include the simulation launch file
    simulation_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('waiter_tree'), 'launch', 'simulation_launch.py'
        )]),
        launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    return LaunchDescription([
        DeclareLaunchArgument('run_waiter_bt', default_value='true', description='Run the waiter robot BT node'),
        DeclareLaunchArgument('use_sim_time', default_value='true', description='Use simulation (Gazebo) clock if true'),
        DeclareLaunchArgument('run_odom_node', default_value='true', description='Run odom publisher node'),
        DeclareLaunchArgument('run_motor_controller', default_value='true', description='Run motor controller node'),
        motor_controller_node,
        waiter_robot_bt_node,
        table_navigation_node
    ])