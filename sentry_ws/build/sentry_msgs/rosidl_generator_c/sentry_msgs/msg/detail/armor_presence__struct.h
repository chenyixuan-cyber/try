// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/ArmorPresence.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ARMOR_PRESENCE__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__ARMOR_PRESENCE__STRUCT_H_

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

/// Struct defined in msg/ArmorPresence in the package sentry_msgs.
typedef struct sentry_msgs__msg__ArmorPresence
{
  std_msgs__msg__Header header;
  /// 左方向是否有装甲板：0=无，1=有
  uint8_t left;
  /// 后方向是否有装甲板：0=无，1=有
  uint8_t behind;
  /// 右方向是否有装甲板：0=无，1=有
  uint8_t right;
  /// 0=红 1=蓝
  uint8_t enemy_color;
} sentry_msgs__msg__ArmorPresence;

// Struct for a sequence of sentry_msgs__msg__ArmorPresence.
typedef struct sentry_msgs__msg__ArmorPresence__Sequence
{
  sentry_msgs__msg__ArmorPresence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__ArmorPresence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__ARMOR_PRESENCE__STRUCT_H_
