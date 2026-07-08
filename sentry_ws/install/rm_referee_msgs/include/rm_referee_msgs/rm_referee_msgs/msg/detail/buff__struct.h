// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/Buff.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__BUFF__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__BUFF__STRUCT_H_

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

/// Struct defined in msg/Buff in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__Buff
{
  std_msgs__msg__Header header;
  uint8_t recovery_buff;
  uint16_t cooling_buff;
  uint8_t defence_buff;
  uint8_t vulnerability_buff;
  uint16_t attack_buff;
  uint8_t remaining_energy;
} rm_referee_msgs__msg__Buff;

// Struct for a sequence of rm_referee_msgs__msg__Buff.
typedef struct rm_referee_msgs__msg__Buff__Sequence
{
  rm_referee_msgs__msg__Buff * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__Buff__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__BUFF__STRUCT_H_
