// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/GroundRobotPosition.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/GroundRobotPosition in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__GroundRobotPosition
{
  std_msgs__msg__Header header;
  float hero_x;
  float hero_y;
  float engineer_x;
  float engineer_y;
  float standard_3_x;
  float standard_3_y;
  float standard_4_x;
  float standard_4_y;
  float reserved;
  float reserved_2;
} rm_referee_msgs__msg__GroundRobotPosition;

// Struct for a sequence of rm_referee_msgs__msg__GroundRobotPosition.
typedef struct rm_referee_msgs__msg__GroundRobotPosition__Sequence
{
  rm_referee_msgs__msg__GroundRobotPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__GroundRobotPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_H_
