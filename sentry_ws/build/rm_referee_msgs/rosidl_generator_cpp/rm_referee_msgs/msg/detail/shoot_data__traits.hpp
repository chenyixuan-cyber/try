// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_msgs/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_referee_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShootData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bullet_type
  {
    out << "bullet_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_type, out);
    out << ", ";
  }

  // member: shooter_number
  {
    out << "shooter_number: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_number, out);
    out << ", ";
  }

  // member: launching_frequency
  {
    out << "launching_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.launching_frequency, out);
    out << ", ";
  }

  // member: initial_speed
  {
    out << "initial_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ShootData & msg,
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

  // member: bullet_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_type, out);
    out << "\n";
  }

  // member: shooter_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_number: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_number, out);
    out << "\n";
  }

  // member: launching_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "launching_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.launching_frequency, out);
    out << "\n";
  }

  // member: initial_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ShootData & msg, bool use_flow_style = false)
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
  const rm_referee_msgs::msg::ShootData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_msgs::msg::ShootData & msg)
{
  return rm_referee_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_msgs::msg::ShootData>()
{
  return "rm_referee_msgs::msg::ShootData";
}

template<>
inline const char * name<rm_referee_msgs::msg::ShootData>()
{
  return "rm_referee_msgs/msg/ShootData";
}

template<>
struct has_fixed_size<rm_referee_msgs::msg::ShootData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_referee_msgs::msg::ShootData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_referee_msgs::msg::ShootData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_
