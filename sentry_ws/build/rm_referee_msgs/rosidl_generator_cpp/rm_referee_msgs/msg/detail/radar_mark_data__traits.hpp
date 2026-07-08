// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_msgs:msg/RadarMarkData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__RADAR_MARK_DATA__TRAITS_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__RADAR_MARK_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_msgs/msg/detail/radar_mark_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_referee_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarMarkData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mark_progress
  {
    out << "mark_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.mark_progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarMarkData & msg,
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

  // member: mark_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mark_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.mark_progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarMarkData & msg, bool use_flow_style = false)
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
  const rm_referee_msgs::msg::RadarMarkData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_msgs::msg::RadarMarkData & msg)
{
  return rm_referee_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_msgs::msg::RadarMarkData>()
{
  return "rm_referee_msgs::msg::RadarMarkData";
}

template<>
inline const char * name<rm_referee_msgs::msg::RadarMarkData>()
{
  return "rm_referee_msgs/msg/RadarMarkData";
}

template<>
struct has_fixed_size<rm_referee_msgs::msg::RadarMarkData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_referee_msgs::msg::RadarMarkData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_referee_msgs::msg::RadarMarkData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__RADAR_MARK_DATA__TRAITS_HPP_
