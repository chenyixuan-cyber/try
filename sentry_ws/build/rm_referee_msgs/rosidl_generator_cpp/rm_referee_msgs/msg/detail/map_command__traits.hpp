// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_msgs:msg/MapCommand.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__TRAITS_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_msgs/msg/detail/map_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_referee_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: target_position_x
  {
    out << "target_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_x, out);
    out << ", ";
  }

  // member: target_position_y
  {
    out << "target_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_y, out);
    out << ", ";
  }

  // member: cmd_keyboard
  {
    out << "cmd_keyboard: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_keyboard, out);
    out << ", ";
  }

  // member: target_robot_id
  {
    out << "target_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_robot_id, out);
    out << ", ";
  }

  // member: cmd_source
  {
    out << "cmd_source: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapCommand & msg,
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

  // member: target_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_x, out);
    out << "\n";
  }

  // member: target_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position_y, out);
    out << "\n";
  }

  // member: cmd_keyboard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_keyboard: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_keyboard, out);
    out << "\n";
  }

  // member: target_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_robot_id, out);
    out << "\n";
  }

  // member: cmd_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_source: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapCommand & msg, bool use_flow_style = false)
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
  const rm_referee_msgs::msg::MapCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_msgs::msg::MapCommand & msg)
{
  return rm_referee_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_msgs::msg::MapCommand>()
{
  return "rm_referee_msgs::msg::MapCommand";
}

template<>
inline const char * name<rm_referee_msgs::msg::MapCommand>()
{
  return "rm_referee_msgs/msg/MapCommand";
}

template<>
struct has_fixed_size<rm_referee_msgs::msg::MapCommand>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_referee_msgs::msg::MapCommand>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_referee_msgs::msg::MapCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__TRAITS_HPP_
