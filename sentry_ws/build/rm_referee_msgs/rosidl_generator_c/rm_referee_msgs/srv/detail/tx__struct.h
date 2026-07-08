// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_referee_msgs:srv/Tx.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__SRV__DETAIL__TX__STRUCT_H_
#define RM_REFEREE_MSGS__SRV__DETAIL__TX__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Tx in the package rm_referee_msgs.
typedef struct rm_referee_msgs__srv__Tx_Request
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence data;
} rm_referee_msgs__srv__Tx_Request;

// Struct for a sequence of rm_referee_msgs__srv__Tx_Request.
typedef struct rm_referee_msgs__srv__Tx_Request__Sequence
{
  rm_referee_msgs__srv__Tx_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__srv__Tx_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
// already included above
// #include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in srv/Tx in the package rm_referee_msgs.
typedef struct rm_referee_msgs__srv__Tx_Response
{
  std_msgs__msg__Header header;
  bool ok;
} rm_referee_msgs__srv__Tx_Response;

// Struct for a sequence of rm_referee_msgs__srv__Tx_Response.
typedef struct rm_referee_msgs__srv__Tx_Response__Sequence
{
  rm_referee_msgs__srv__Tx_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_referee_msgs__srv__Tx_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__SRV__DETAIL__TX__STRUCT_H_
