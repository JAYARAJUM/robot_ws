import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node
from launch.substitutions import FindExecutable, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    package_name = 'waiter_tree'
   
    # Base Name or robot
    robot_base_name = "waiter_robot"
    #gazebo_ros_dir = get_package_share_directory('gazebo_ros')
    world_file = PathJoinSubstitution(
        [
            FindPackageShare(package_name),
            "worlds",
            "hotel_world.world"
        ]
    )

    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare(package_name),
            "config",
            "controller_manager.yaml",
        ]
    )
    
    # Get URDF via xacro
    robot_description_content = Command(
        [
            FindExecutable(name="xacro"), " ",
            PathJoinSubstitution([FindPackageShare(package_name), "urdf", "robot_urdf.xacro"]),
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    # Robot State Publisher
    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory(package_name), 'launch', 'rsp_launch.py'
        )]), launch_arguments={'use_sim_time': 'true', 'use_ros2_control': 'true'}.items()
    )

    # Joystick
    joystick = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory(package_name), 'launch', 'joystick_launch.py'
        )]), launch_arguments={'use_sim_time': 'true'}.items()
    )
    
    # Gazebo
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('gazebo_ros'), 'launch', 'gazebo.launch.py')]),
        launch_arguments={
            'verbose': 'true',
            'world': world_file
        }.items()
    )
    
    # Controller Manager
    
    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[robot_description, robot_controllers],
        output='both',
    )
    

    # Spawn Entity
    spawn_entity = Node(
    package='gazebo_ros',
    executable='spawn_entity.py',
    arguments=['-topic', 'robot_description',
               '-entity', 'waiter_robot',
               '-x', '0',
               '-y', '0',
               '-z', '0.24'],  # Adjust this value to be above your ground level
    output='screen'
    
)
    
    # Diff Drive Spawner
    diff_drive_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["diff_drive_controller"],
        output="screen"
    )

    # Joint Broad Spawner
    joint_broad_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster"],
        output="screen"
    )

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true', description='Use simulation (Gazebo) clock if true'),
        #DeclareLaunchArgument('world_file', default_value=os.path.join(package_name, 'worlds', 'hotel_world.world'), description='Full path to the Gazebo world file to use'),
        
        rsp,
        joystick,
        gazebo,
        controller_manager,
        joint_broad_spawner,
        #diff_drive_spawner,
        spawn_entity
        #TimerAction(period=2.0, actions=[controller_manager]),
        #TimerAction(period=8.0, actions=[joint_broad_spawner]),
        #TimerAction(period=10.0, actions=[diff_drive_spawner]),
        #TimerAction(period=5.0, actions=[spawn_entity]),
        
    ])