// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_referee_msgs:msg/KeyboardMouseControl.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/keyboard_mouse_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_referee_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_referee_msgs/msg/detail/keyboard_mouse_control__struct.h"
#include "rm_referee_msgs/msg/detail/keyboard_mouse_control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rm_referee_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rm_referee_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_rm_referee_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _KeyboardMouseControl__ros_msg_type = rm_referee_msgs__msg__KeyboardMouseControl;

static bool _KeyboardMouseControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _KeyboardMouseControl__ros_msg_type * ros_message = static_cast<const _KeyboardMouseControl__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: mouse_x
  {
    cdr << ros_message->mouse_x;
  }

  // Field name: mouse_y
  {
    cdr << ros_message->mouse_y;
  }

  // Field name: mouse_z
  {
    cdr << ros_message->mouse_z;
  }

  // Field name: left_button_down
  {
    cdr << (ros_message->left_button_down ? true : false);
  }

  // Field name: right_button_down
  {
    cdr << (ros_message->right_button_down ? true : false);
  }

  // Field name: keyboard_value
  {
    cdr << ros_message->keyboard_value;
  }

  // Field name: mid_button_down
  {
    cdr << (ros_message->mid_button_down ? true : false);
  }

  return true;
}

static bool _KeyboardMouseControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _KeyboardMouseControl__ros_msg_type * ros_message = static_cast<_KeyboardMouseControl__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: mouse_x
  {
    cdr >> ros_message->mouse_x;
  }

  // Field name: mouse_y
  {
    cdr >> ros_message->mouse_y;
  }

  // Field name: mouse_z
  {
    cdr >> ros_message->mouse_z;
  }

  // Field name: left_button_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_button_down = tmp ? true : false;
  }

  // Field name: right_button_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_button_down = tmp ? true : false;
  }

  // Field name: keyboard_value
  {
    cdr >> ros_message->keyboard_value;
  }

  // Field name: mid_button_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mid_button_down = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_referee_msgs
size_t get_serialized_size_rm_referee_msgs__msg__KeyboardMouseControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KeyboardMouseControl__ros_msg_type * ros_message = static_cast<const _KeyboardMouseControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name mouse_x
  {
    size_t item_size = sizeof(ros_message->mouse_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_y
  {
    size_t item_size = sizeof(ros_message->mouse_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_z
  {
    size_t item_size = sizeof(ros_message->mouse_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_button_down
  {
    size_t item_size = sizeof(ros_message->left_button_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_button_down
  {
    size_t item_size = sizeof(ros_message->right_button_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name keyboard_value
  {
    size_t item_size = sizeof(ros_message->keyboard_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mid_button_down
  {
    size_t item_size = sizeof(ros_message->mid_button_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _KeyboardMouseControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_referee_msgs__msg__KeyboardMouseControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_referee_msgs
size_t max_serialized_size_rm_referee_msgs__msg__KeyboardMouseControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mouse_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mouse_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mouse_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_button_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_button_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: keyboard_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mid_button_down
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_referee_msgs__msg__KeyboardMouseControl;
    is_plain =
      (
      offsetof(DataType, mid_button_down) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _KeyboardMouseControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_referee_msgs__msg__KeyboardMouseControl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KeyboardMouseControl = {
  "rm_referee_msgs::msg",
  "KeyboardMouseControl",
  _KeyboardMouseControl__cdr_serialize,
  _KeyboardMouseControl__cdr_deserialize,
  _KeyboardMouseControl__get_serialized_size,
  _KeyboardMouseControl__max_serialized_size
};

static rosidl_message_type_support_t _KeyboardMouseControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KeyboardMouseControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_referee_msgs, msg, KeyboardMouseControl)() {
  return &_KeyboardMouseControl__type_support;
}

#if defined(__cplusplus)
}
#endif
