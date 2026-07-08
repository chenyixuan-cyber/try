# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target rm_referee_msgs::rm_referee_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${rm_referee_msgs_TARGETS}.
if(rm_referee_msgs_TARGETS AND NOT TARGET rm_referee_msgs::rm_referee_msgs)
  add_library(rm_referee_msgs::rm_referee_msgs INTERFACE IMPORTED)
  set_target_properties(rm_referee_msgs::rm_referee_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${rm_referee_msgs_TARGETS}")
endif()
