// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_msgs:msg/GroundRobotPosition.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__TRAITS_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_msgs/msg/detail/ground_robot_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_referee_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroundRobotPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hero_x
  {
    out << "hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_x, out);
    out << ", ";
  }

  // member: hero_y
  {
    out << "hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_y, out);
    out << ", ";
  }

  // member: engineer_x
  {
    out << "engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_x, out);
    out << ", ";
  }

  // member: engineer_y
  {
    out << "engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_y, out);
    out << ", ";
  }

  // member: standard_3_x
  {
    out << "standard_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_3_x, out);
    out << ", ";
  }

  // member: standard_3_y
  {
    out << "standard_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_3_y, out);
    out << ", ";
  }

  // member: standard_4_x
  {
    out << "standard_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_4_x, out);
    out << ", ";
  }

  // member: standard_4_y
  {
    out << "standard_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_4_y, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: reserved_2
  {
    out << "reserved_2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroundRobotPosition & msg,
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

  // member: hero_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_x, out);
    out << "\n";
  }

  // member: hero_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_y, out);
    out << "\n";
  }

  // member: engineer_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_x, out);
    out << "\n";
  }

  // member: engineer_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_y, out);
    out << "\n";
  }

  // member: standard_3_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_3_x, out);
    out << "\n";
  }

  // member: standard_3_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_3_y, out);
    out << "\n";
  }

  // member: standard_4_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_4_x, out);
    out << "\n";
  }

  // member: standard_4_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_4_y, out);
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

  // member: reserved_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroundRobotPosition & msg, bool use_flow_style = false)
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
  const rm_referee_msgs::msg::GroundRobotPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_msgs::msg::GroundRobotPosition & msg)
{
  return rm_referee_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_msgs::msg::GroundRobotPosition>()
{
  return "rm_referee_msgs::msg::GroundRobotPosition";
}

template<>
inline const char * name<rm_referee_msgs::msg::GroundRobotPosition>()
{
  return "rm_referee_msgs/msg/GroundRobotPosition";
}

template<>
struct has_fixed_size<rm_referee_msgs::msg::GroundRobotPosition>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_referee_msgs::msg::GroundRobotPosition>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_referee_msgs::msg::GroundRobotPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__TRAITS_HPP_
