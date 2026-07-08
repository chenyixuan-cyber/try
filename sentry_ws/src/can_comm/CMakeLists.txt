cmake_minimum_required(VERSION 3.8)
project(can_comm)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sentry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
# Eigen3 not required for SocketCAN-based sender; remove vendored librm dependencies

# Source files
set(CAN_COMM_SRCS
  src/can_receive.cpp
  src/can_send.cpp
)

# vyaw_tf_yaw_controller node
add_executable(vyaw_tf_yaw_controller_node src/vyaw_tf_yaw_controller.cpp)
target_compile_features(vyaw_tf_yaw_controller_node PUBLIC cxx_std_17)
ament_target_dependencies(vyaw_tf_yaw_controller_node
  rclcpp
  std_msgs
  geometry_msgs
  tf2_ros
  tf2
  tf2_geometry_msgs
)

# can_receive node
add_executable(can_receive_node src/can_receive.cpp)
target_compile_features(can_receive_node PUBLIC cxx_std_17)
ament_target_dependencies(can_receive_node
  rclcpp
  std_msgs
)

# can_send node
add_executable(can_send_node src/can_send.cpp)
target_compile_features(can_send_node PUBLIC cxx_std_17)
ament_target_dependencies(can_send_node
  rclcpp
  std_msgs
  geometry_msgs
  sentry_msgs
)
target_compile_definitions(can_send_node PUBLIC LIBRM_PLATFORM_LINUX)

# target_frame_node — 暂时禁用，依赖不存在的 ElasticTracker
# add_executable(target_frame_node src/target_frame_node.cpp)
# target_compile_features(target_frame_node PUBLIC cxx_std_17)
# ament_target_dependencies(target_frame_node
#   rclcpp
#   rclcpp_action
#   std_msgs
#   geometry_msgs
#   nav2_msgs
#   tf2_ros
#   tf2
#   tf2_geometry_msgs
# )

# No librm headers or Eigen linking required for the current implementation

# Install
install(TARGETS
  can_receive_node
  can_send_node
  vyaw_tf_yaw_controller_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  config
  launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
