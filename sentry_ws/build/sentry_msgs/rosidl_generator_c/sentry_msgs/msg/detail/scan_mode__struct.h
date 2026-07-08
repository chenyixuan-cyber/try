// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_msgs:msg/ScanMode.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__STRUCT_H_
#define SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ScanMode in the package sentry_msgs.
typedef struct sentry_msgs__msg__ScanMode
{
  /// 扫描模式:0不扫描 1扫描
  bool scan_mod_type;
} sentry_msgs__msg__ScanMode;

// Struct for a sequence of sentry_msgs__msg__ScanMode.
typedef struct sentry_msgs__msg__ScanMode__Sequence
{
  sentry_msgs__msg__ScanMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_msgs__msg__ScanMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__STRUCT_H_
