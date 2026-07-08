// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/DartInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__STRUCT_H_

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

/// Struct defined in msg/DartInfo in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__DartInfo
{
  std_msgs__msg__Header header;
  uint8_t dart_remaining_time;
  uint16_t dart_info;
} rm_referee_msgs__msg__DartInfo;

// Struct for a sequence of rm_referee_msgs__msg__DartInfo.
typedef struct rm_referee_msgs__msg__DartInfo__Sequence
{
  rm_referee_msgs__msg__DartInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__DartInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__STRUCT_H_
