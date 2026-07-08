// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

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

/// Struct defined in msg/RobotStatus in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__RobotStatus
{
  std_msgs__msg__Header header;
  uint8_t robot_id;
  uint8_t robot_level;
  uint16_t current_hp;
  uint16_t maximum_hp;
  uint16_t shooter_barrel_cooling_value;
  uint16_t shooter_barrel_heat_limit;
  uint16_t chassis_power_limit;
  float bullet_speed_limit;
  bool power_management_gimbal_output;
  bool power_management_chassis_output;
  bool power_management_shooter_output;
} rm_referee_msgs__msg__RobotStatus;

// Struct for a sequence of rm_referee_msgs__msg__RobotStatus.
typedef struct rm_referee_msgs__msg__RobotStatus__Sequence
{
  rm_referee_msgs__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
