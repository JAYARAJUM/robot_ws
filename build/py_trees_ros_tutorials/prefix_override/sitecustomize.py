import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jayaaraju/waiter_robot_ws/install/py_trees_ros_tutorials'
