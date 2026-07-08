// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_

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

/// Struct defined in msg/PowerHeatData in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__PowerHeatData
{
  std_msgs__msg__Header header;
  uint16_t reserved;
  uint16_t reserved_2;
  float reserved_3;
  uint16_t buffer_energy;
  uint16_t shooter_17mm_1_barrel_heat;
  uint16_t shooter_42mm_barrel_heat;
} rm_referee_msgs__msg__PowerHeatData;

// Struct for a sequence of rm_referee_msgs__msg__PowerHeatData.
typedef struct rm_referee_msgs__msg__PowerHeatData__Sequence
{
  rm_referee_msgs__msg__PowerHeatData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__PowerHeatData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_
