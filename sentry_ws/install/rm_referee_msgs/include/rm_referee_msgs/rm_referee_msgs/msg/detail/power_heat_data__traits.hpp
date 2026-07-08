// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__TRAITS_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_msgs/msg/detail/power_heat_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_referee_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerHeatData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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
    out << ", ";
  }

  // member: reserved_3
  {
    out << "reserved_3: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_3, out);
    out << ", ";
  }

  // member: buffer_energy
  {
    out << "buffer_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_energy, out);
    out << ", ";
  }

  // member: shooter_17mm_1_barrel_heat
  {
    out << "shooter_17mm_1_barrel_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_1_barrel_heat, out);
    out << ", ";
  }

  // member: shooter_42mm_barrel_heat
  {
    out << "shooter_42mm_barrel_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_barrel_heat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerHeatData & msg,
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

  // member: reserved_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved_3: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved_3, out);
    out << "\n";
  }

  // member: buffer_energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buffer_energy: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_energy, out);
    out << "\n";
  }

  // member: shooter_17mm_1_barrel_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17mm_1_barrel_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17mm_1_barrel_heat, out);
    out << "\n";
  }

  // member: shooter_42mm_barrel_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_42mm_barrel_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_42mm_barrel_heat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerHeatData & msg, bool use_flow_style = false)
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
  const rm_referee_msgs::msg::PowerHeatData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_msgs::msg::PowerHeatData & msg)
{
  return rm_referee_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_msgs::msg::PowerHeatData>()
{
  return "rm_referee_msgs::msg::PowerHeatData";
}

template<>
inline const char * name<rm_referee_msgs::msg::PowerHeatData>()
{
  return "rm_referee_msgs/msg/PowerHeatData";
}

template<>
struct has_fixed_size<rm_referee_msgs::msg::PowerHeatData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_referee_msgs::msg::PowerHeatData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_referee_msgs::msg::PowerHeatData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__TRAITS_HPP_
