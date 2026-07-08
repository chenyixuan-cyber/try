// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rm_referee_msgs:msg/ProjectileAllowance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rm_referee_msgs/msg/detail/projectile_allowance__rosidl_typesupport_introspection_c.h"
#include "rm_referee_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rm_referee_msgs/msg/detail/projectile_allowance__functions.h"
#include "rm_referee_msgs/msg/detail/projectile_allowance__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rm_referee_msgs__msg__ProjectileAllowance__init(message_memory);
}

void rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_fini_function(void * message_memory)
{
  rm_referee_msgs__msg__ProjectileAllowance__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_msgs__msg__ProjectileAllowance, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "projectile_allowance_17mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_msgs__msg__ProjectileAllowance, projectile_allowance_17mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "projectile_allowance_42mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_msgs__msg__ProjectileAllowance, projectile_allowance_42mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remaining_gold_coin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_msgs__msg__ProjectileAllowance, remaining_gold_coin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "projectile_allowance_fortress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_referee_msgs__msg__ProjectileAllowance, projectile_allowance_fortress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_members = {
  "rm_referee_msgs__msg",  // message namespace
  "ProjectileAllowance",  // message name
  5,  // number of fields
  sizeof(rm_referee_msgs__msg__ProjectileAllowance),
  rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_member_array,  // message members
  rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_init_function,  // function to initialize message memory (memory has to be allocated)
  rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_type_support_handle = {
  0,
  &rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rm_referee_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_referee_msgs, msg, ProjectileAllowance)() {
  rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_type_support_handle.typesupport_identifier) {
    rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rm_referee_msgs__msg__ProjectileAllowance__rosidl_typesupport_introspection_c__ProjectileAllowance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
