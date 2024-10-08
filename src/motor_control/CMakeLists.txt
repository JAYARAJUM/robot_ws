cmake_minimum_required(VERSION 3.5)
project(motor_control)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(serial REQUIRED)
include_directories(${catkin_INCLUDE_DIRS} /home/tolasing/ros2_ws/install/serial/include)

link_directories(/home/tolasing/ros2_ws/install/serial_driver/lib)
link_directories(/home/tolasing/ros2_ws/install/serial/lib)
link_directories(/home/tolasing/ros2_ws/install/serial/include/serial)


## COMPILE
add_library(
  ${PROJECT_NAME}
  SHARED
  src/motor_interface.cpp src/comms.cpp src/wheel.cpp
)
target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
  include
)
ament_target_dependencies(
  ${PROJECT_NAME}
  hardware_interface
  pluginlib
  rclcpp
  rclcpp_lifecycle
  serial
)

pluginlib_export_plugin_description_file(hardware_interface motor_interface.xml)

# INSTALL
install(
  TARGETS ${PROJECT_NAME}
  DESTINATION lib
)
install(
  DIRECTORY include/
  DESTINATION include
)

install(
  DIRECTORY
    launch
    config
  DESTINATION
    share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_cmake_gtest REQUIRED)
endif()

## EXPORTS
ament_export_include_directories(
  include
)
ament_export_libraries(
  ${PROJECT_NAME}
)
ament_export_dependencies(
  hardware_interface
  pluginlib
  rclcpp
  serial
  rclcpp_lifecycle
)
ament_package()
