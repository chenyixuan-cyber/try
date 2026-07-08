// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_

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

/// Struct defined in msg/GameRobotHP in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__GameRobotHP
{
  std_msgs__msg__Header header;
  uint16_t ally_1_robot_hp;
  uint16_t ally_2_robot_hp;
  uint16_t ally_3_robot_hp;
  uint16_t ally_4_robot_hp;
  int16_t damage_difference;
  uint16_t ally_7_robot_hp;
  uint16_t ally_outpost_hp;
  uint16_t ally_base_hp;
  uint16_t enemy_outpost_hp;
  uint16_t enemy_base_hp;
} rm_referee_msgs__msg__GameRobotHP;

// Struct for a sequence of rm_referee_msgs__msg__GameRobotHP.
typedef struct rm_referee_msgs__msg__GameRobotHP__Sequence
{
  rm_referee_msgs__msg__GameRobotHP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__GameRobotHP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_
