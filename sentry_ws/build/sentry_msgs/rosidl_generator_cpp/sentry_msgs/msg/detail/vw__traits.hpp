// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_msgs:msg/Vw.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__VW__TRAITS_HPP_
#define SENTRY_MSGS__MSG__DETAIL__VW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_msgs/msg/detail/vw__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sentry_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vw & msg,
  std::ostream & out)
{
  out << "{";
  // member: vw
  {
    out << "vw: ";
    rosidl_generator_traits::value_to_yaml(msg.vw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Vw & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vw: ";
    rosidl_generator_traits::value_to_yaml(msg.vw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vw & msg, bool use_flow_style = false)
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

}  // namespace sentry_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sentry_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_msgs::msg::Vw & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_msgs::msg::Vw & msg)
{
  return sentry_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_msgs::msg::Vw>()
{
  return "sentry_msgs::msg::Vw";
}

template<>
inline const char * name<sentry_msgs::msg::Vw>()
{
  return "sentry_msgs/msg/Vw";
}

template<>
struct has_fixed_size<sentry_msgs::msg::Vw>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentry_msgs::msg::Vw>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentry_msgs::msg::Vw>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_MSGS__MSG__DETAIL__VW__TRAITS_HPP_
