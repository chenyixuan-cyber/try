// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_msgs:msg/KeyboardMouseControl.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__TRAITS_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_msgs/msg/detail/keyboard_mouse_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_referee_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyboardMouseControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mouse_x
  {
    out << "mouse_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_x, out);
    out << ", ";
  }

  // member: mouse_y
  {
    out << "mouse_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_y, out);
    out << ", ";
  }

  // member: mouse_z
  {
    out << "mouse_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_z, out);
    out << ", ";
  }

  // member: left_button_down
  {
    out << "left_button_down: ";
    rosidl_generator_traits::value_to_yaml(msg.left_button_down, out);
    out << ", ";
  }

  // member: right_button_down
  {
    out << "right_button_down: ";
    rosidl_generator_traits::value_to_yaml(msg.right_button_down, out);
    out << ", ";
  }

  // member: keyboard_value
  {
    out << "keyboard_value: ";
    rosidl_generator_traits::value_to_yaml(msg.keyboard_value, out);
    out << ", ";
  }

  // member: mid_button_down
  {
    out << "mid_button_down: ";
    rosidl_generator_traits::value_to_yaml(msg.mid_button_down, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyboardMouseControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: mouse_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_x, out);
    out << "\n";
  }

  // member: mouse_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_y, out);
    out << "\n";
  }

  // member: mouse_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_z, out);
    out << "\n";
  }

  // member: left_button_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_button_down: ";
    rosidl_generator_traits::value_to_yaml(msg.left_button_down, out);
    out << "\n";
  }

  // member: right_button_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_button_down: ";
    rosidl_generator_traits::value_to_yaml(msg.right_button_down, out);
    out << "\n";
  }

  // member: keyboard_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keyboard_value: ";
    rosidl_generator_traits::value_to_yaml(msg.keyboard_value, out);
    out << "\n";
  }

  // member: mid_button_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mid_button_down: ";
    rosidl_generator_traits::value_to_yaml(msg.mid_button_down, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyboardMouseControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_referee_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rm_referee_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_referee_msgs::msg::KeyboardMouseControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_msgs::msg::KeyboardMouseControl & msg)
{
  return rm_referee_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_msgs::msg::KeyboardMouseControl>()
{
  return "rm_referee_msgs::msg::KeyboardMouseControl";
}

template<>
inline const char * name<rm_referee_msgs::msg::KeyboardMouseControl>()
{
  return "rm_referee_msgs/msg/KeyboardMouseControl";
}

template<>
struct has_fixed_size<rm_referee_msgs::msg::KeyboardMouseControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_referee_msgs::msg::KeyboardMouseControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_referee_msgs::msg::KeyboardMouseControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__TRAITS_HPP_
