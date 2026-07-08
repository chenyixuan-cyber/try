// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/MapCommand.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__STRUCT_H_

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

/// Struct defined in msg/MapCommand in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__MapCommand
{
  std_msgs__msg__Header header;
  float target_position_x;
  float target_position_y;
  uint8_t cmd_keyboard;
  uint8_t target_robot_id;
  uint16_t cmd_source;
} rm_referee_msgs__msg__MapCommand;

// Struct for a sequence of rm_referee_msgs__msg__MapCommand.
typedef struct rm_referee_msgs__msg__MapCommand__Sequence
{
  rm_referee_msgs__msg__MapCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__MapCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__STRUCT_H_
