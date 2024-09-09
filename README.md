# WAITER ROBOT
PROJECT OVERVIEW :: 

## Getting started

#### Prerequisites
This project is build and tested on Ubuntu 22.04 LTS with ROS 2 Humble LTS.  
* [ROS install instructions](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html)
* [Colcon install instructions](https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Colcon-Tutorial.html)

#### Setup workspace
```
mkdr  waiter_robot_ws/src
cd waiter_robot_ws/src
git clone https://github.com/ADL-Robotics/adl-ros2.git .
```

#### Install dependencies
```
cd waiter_robot_ws/src
rosdep update
rosdep install --from-paths src --ignore-src --rosdistro humble -r -y
```

#### Build and run
```
cd waiter_robot_ws
colcon build --symlink-install
source install/setup.bash
ros2 launch waiter_tree simulation_launch.py
ros2 launch ros2_mapping nav_map_server.launch.py
ros2 launch navigator_planner navigation.launch.py
ros2 waiter_tree waiter_tree_launch.py
cd waiter_robot_ws/src/water_tree/waiter_tree
python3 order_detection.py
```

#### Visualize the robot

```
open a terminal and type 
rviz2

```
