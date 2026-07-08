// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_H_

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

/// Struct defined in msg/DartClientCmd in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__DartClientCmd
{
  std_msgs__msg__Header header;
  uint8_t dart_launch_opening_status;
  uint8_t reserved;
  uint16_t target_change_time;
  uint16_t latest_launch_cmd_time;
} rm_referee_msgs__msg__DartClientCmd;

// Struct for a sequence of rm_referee_msgs__msg__DartClientCmd.
typedef struct rm_referee_msgs__msg__DartClientCmd__Sequence
{
  rm_referee_msgs__msg__DartClientCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__DartClientCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_H_
