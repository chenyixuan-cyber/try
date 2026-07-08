// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_referee_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__TRAITS_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_referee_msgs/msg/detail/game_robot_hp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rm_referee_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameRobotHP & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ally_1_robot_hp
  {
    out << "ally_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_1_robot_hp, out);
    out << ", ";
  }

  // member: ally_2_robot_hp
  {
    out << "ally_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_2_robot_hp, out);
    out << ", ";
  }

  // member: ally_3_robot_hp
  {
    out << "ally_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_3_robot_hp, out);
    out << ", ";
  }

  // member: ally_4_robot_hp
  {
    out << "ally_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_4_robot_hp, out);
    out << ", ";
  }

  // member: damage_difference
  {
    out << "damage_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.damage_difference, out);
    out << ", ";
  }

  // member: ally_7_robot_hp
  {
    out << "ally_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_7_robot_hp, out);
    out << ", ";
  }

  // member: ally_outpost_hp
  {
    out << "ally_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_outpost_hp, out);
    out << ", ";
  }

  // member: ally_base_hp
  {
    out << "ally_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_base_hp, out);
    out << ", ";
  }

  // member: enemy_outpost_hp
  {
    out << "enemy_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_outpost_hp, out);
    out << ", ";
  }

  // member: enemy_base_hp
  {
    out << "enemy_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_base_hp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameRobotHP & msg,
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

  // member: ally_1_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_1_robot_hp, out);
    out << "\n";
  }

  // member: ally_2_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_2_robot_hp, out);
    out << "\n";
  }

  // member: ally_3_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_3_robot_hp, out);
    out << "\n";
  }

  // member: ally_4_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_4_robot_hp, out);
    out << "\n";
  }

  // member: damage_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "damage_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.damage_difference, out);
    out << "\n";
  }

  // member: ally_7_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_7_robot_hp, out);
    out << "\n";
  }

  // member: ally_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_outpost_hp, out);
    out << "\n";
  }

  // member: ally_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_base_hp, out);
    out << "\n";
  }

  // member: enemy_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_outpost_hp, out);
    out << "\n";
  }

  // member: enemy_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_base_hp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameRobotHP & msg, bool use_flow_style = false)
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
  const rm_referee_msgs::msg::GameRobotHP & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_referee_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_referee_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_referee_msgs::msg::GameRobotHP & msg)
{
  return rm_referee_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_referee_msgs::msg::GameRobotHP>()
{
  return "rm_referee_msgs::msg::GameRobotHP";
}

template<>
inline const char * name<rm_referee_msgs::msg::GameRobotHP>()
{
  return "rm_referee_msgs/msg/GameRobotHP";
}

template<>
struct has_fixed_size<rm_referee_msgs::msg::GameRobotHP>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rm_referee_msgs::msg::GameRobotHP>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rm_referee_msgs::msg::GameRobotHP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__TRAITS_HPP_
