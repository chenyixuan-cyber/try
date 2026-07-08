// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_

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

/// Struct defined in msg/GameStatus in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__GameStatus
{
  std_msgs__msg__Header header;
  uint8_t game_type;
  uint8_t game_progress;
  uint16_t stage_remain_time;
  uint64_t sync_timestamp;
} rm_referee_msgs__msg__GameStatus;

// Struct for a sequence of rm_referee_msgs__msg__GameStatus.
typedef struct rm_referee_msgs__msg__GameStatus__Sequence
{
  rm_referee_msgs__msg__GameStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__GameStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_
