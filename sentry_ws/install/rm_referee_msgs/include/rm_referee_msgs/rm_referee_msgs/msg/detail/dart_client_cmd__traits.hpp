// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__TRAITS_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_msgs/msg/detail/dart_client_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_referee_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DartClientCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: dart_launch_opening_status
  {
    out << "dart_launch_opening_status: ";
    rosidl_generator_traits::value_to_yaml(msg.dart_launch_opening_status, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: target_change_time
  {
    out << "target_change_time: ";
    rosidl_generator_traits::value_to_yaml(msg.target_change_time, out);
    out << ", ";
  }

  // member: latest_launch_cmd_time
  {
    out << "latest_launch_cmd_time: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_launch_cmd_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DartClientCmd & msg,
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

  // member: dart_launch_opening_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dart_launch_opening_status: ";
    rosidl_generator_traits::value_to_yaml(msg.dart_launch_opening_status, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }

  // member: target_change_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_change_time: ";
    rosidl_generator_traits::value_to_yaml(msg.target_change_time, out);
    out << "\n";
  }

  // member: latest_launch_cmd_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_launch_cmd_time: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_launch_cmd_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DartClientCmd & msg, bool use_flow_style = false)
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
  const rm_referee_msgs::msg::DartClientCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_msgs::msg::DartClientCmd & msg)
{
  return rm_referee_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_msgs::msg::DartClientCmd>()
{
  return "rm_referee_msgs::msg::DartClientCmd";
}

template<>
inline const char * name<rm_referee_msgs::msg::DartClientCmd>()
{
  return "rm_referee_msgs/msg/DartClientCmd";
}

template<>
struct has_fixed_size<rm_referee_msgs::msg::DartClientCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_referee_msgs::msg::DartClientCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_referee_msgs::msg::DartClientCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__TRAITS_HPP_
