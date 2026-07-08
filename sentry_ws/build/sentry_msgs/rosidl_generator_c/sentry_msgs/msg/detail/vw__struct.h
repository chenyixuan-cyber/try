// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/Vw.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__VW__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__VW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vw in the package sentry_msgs.
typedef struct sentry_msgs__msg__Vw
{
  /// 浮点速度/角速度
  float vw;
} sentry_msgs__msg__Vw;

// Struct for a sequence of sentry_msgs__msg__Vw.
typedef struct sentry_msgs__msg__Vw__Sequence
{
  sentry_msgs__msg__Vw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__Vw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__VW__STRUCT_H_
