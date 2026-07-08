// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:msg/KeyboardMouseControl.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__STRUCT_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'KEY_W'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_W = 1ul
};

/// Constant 'KEY_S'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_S = 2ul
};

/// Constant 'KEY_A'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_A = 4ul
};

/// Constant 'KEY_D'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_D = 8ul
};

/// Constant 'KEY_SHIFT'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_SHIFT = 16ul
};

/// Constant 'KEY_CTRL'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_CTRL = 32ul
};

/// Constant 'KEY_Q'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_Q = 64ul
};

/// Constant 'KEY_E'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_E = 128ul
};

/// Constant 'KEY_R'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_R = 256ul
};

/// Constant 'KEY_F'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_F = 512ul
};

/// Constant 'KEY_G'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_G = 1024ul
};

/// Constant 'KEY_Z'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_Z = 2048ul
};

/// Constant 'KEY_X'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_X = 4096ul
};

/// Constant 'KEY_C'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_C = 8192ul
};

/// Constant 'KEY_V'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_V = 16384ul
};

/// Constant 'KEY_B'.
enum
{
  rm_referee_msgs__msg__KeyboardMouseControl__KEY_B = 32768ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/KeyboardMouseControl in the package rm_referee_msgs.
typedef struct rm_referee_msgs__msg__KeyboardMouseControl
{
  std_msgs__msg__Header header;
  int32_t mouse_x;
  int32_t mouse_y;
  int32_t mouse_z;
  bool left_button_down;
  bool right_button_down;
  uint32_t keyboard_value;
  bool mid_button_down;
} rm_referee_msgs__msg__KeyboardMouseControl;

// Struct for a sequence of rm_referee_msgs__msg__KeyboardMouseControl.
typedef struct rm_referee_msgs__msg__KeyboardMouseControl__Sequence
{
  rm_referee_msgs__msg__KeyboardMouseControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__msg__KeyboardMouseControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__STRUCT_H_
