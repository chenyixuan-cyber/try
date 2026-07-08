# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target sentry_msgs::sentry_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${sentry_msgs_TARGETS}.
if(sentry_msgs_TARGETS AND NOT TARGET sentry_msgs::sentry_msgs)
  add_library(sentry_msgs::sentry_msgs INTERFACE IMPORTED)
  set_target_properties(sentry_msgs::sentry_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${sentry_msgs_TARGETS}")
endif()
