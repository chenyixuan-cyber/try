// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_referee_msgs__msg__GameRobotHP __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__GameRobotHP __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameRobotHP_
{
  using Type = GameRobotHP_<ContainerAllocator>;

  explicit GameRobotHP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ally_1_robot_hp = 0;
      this->ally_2_robot_hp = 0;
      this->ally_3_robot_hp = 0;
      this->ally_4_robot_hp = 0;
      this->damage_difference = 0;
      this->ally_7_robot_hp = 0;
      this->ally_outpost_hp = 0;
      this->ally_base_hp = 0;
      this->enemy_outpost_hp = 0;
      this->enemy_base_hp = 0;
    }
  }

  explicit GameRobotHP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ally_1_robot_hp = 0;
      this->ally_2_robot_hp = 0;
      this->ally_3_robot_hp = 0;
      this->ally_4_robot_hp = 0;
      this->damage_difference = 0;
      this->ally_7_robot_hp = 0;
      this->ally_outpost_hp = 0;
      this->ally_base_hp = 0;
      this->enemy_outpost_hp = 0;
      this->enemy_base_hp = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ally_1_robot_hp_type =
    uint16_t;
  _ally_1_robot_hp_type ally_1_robot_hp;
  using _ally_2_robot_hp_type =
    uint16_t;
  _ally_2_robot_hp_type ally_2_robot_hp;
  using _ally_3_robot_hp_type =
    uint16_t;
  _ally_3_robot_hp_type ally_3_robot_hp;
  using _ally_4_robot_hp_type =
    uint16_t;
  _ally_4_robot_hp_type ally_4_robot_hp;
  using _damage_difference_type =
    int16_t;
  _damage_difference_type damage_difference;
  using _ally_7_robot_hp_type =
    uint16_t;
  _ally_7_robot_hp_type ally_7_robot_hp;
  using _ally_outpost_hp_type =
    uint16_t;
  _ally_outpost_hp_type ally_outpost_hp;
  using _ally_base_hp_type =
    uint16_t;
  _ally_base_hp_type ally_base_hp;
  using _enemy_outpost_hp_type =
    uint16_t;
  _enemy_outpost_hp_type enemy_outpost_hp;
  using _enemy_base_hp_type =
    uint16_t;
  _enemy_base_hp_type enemy_base_hp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ally_1_robot_hp(
    const uint16_t & _arg)
  {
    this->ally_1_robot_hp = _arg;
    return *this;
  }
  Type & set__ally_2_robot_hp(
    const uint16_t & _arg)
  {
    this->ally_2_robot_hp = _arg;
    return *this;
  }
  Type & set__ally_3_robot_hp(
    const uint16_t & _arg)
  {
    this->ally_3_robot_hp = _arg;
    return *this;
  }
  Type & set__ally_4_robot_hp(
    const uint16_t & _arg)
  {
    this->ally_4_robot_hp = _arg;
    return *this;
  }
  Type & set__damage_difference(
    const int16_t & _arg)
  {
    this->damage_difference = _arg;
    return *this;
  }
  Type & set__ally_7_robot_hp(
    const uint16_t & _arg)
  {
    this->ally_7_robot_hp = _arg;
    return *this;
  }
  Type & set__ally_outpost_hp(
    const uint16_t & _arg)
  {
    this->ally_outpost_hp = _arg;
    return *this;
  }
  Type & set__ally_base_hp(
    const uint16_t & _arg)
  {
    this->ally_base_hp = _arg;
    return *this;
  }
  Type & set__enemy_outpost_hp(
    const uint16_t & _arg)
  {
    this->enemy_outpost_hp = _arg;
    return *this;
  }
  Type & set__enemy_base_hp(
    const uint16_t & _arg)
  {
    this->enemy_base_hp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__GameRobotHP
    std::shared_ptr<rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__GameRobotHP
    std::shared_ptr<rm_referee_msgs::msg::GameRobotHP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameRobotHP_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ally_1_robot_hp != other.ally_1_robot_hp) {
      return false;
    }
    if (this->ally_2_robot_hp != other.ally_2_robot_hp) {
      return false;
    }
    if (this->ally_3_robot_hp != other.ally_3_robot_hp) {
      return false;
    }
    if (this->ally_4_robot_hp != other.ally_4_robot_hp) {
      return false;
    }
    if (this->damage_difference != other.damage_difference) {
      return false;
    }
    if (this->ally_7_robot_hp != other.ally_7_robot_hp) {
      return false;
    }
    if (this->ally_outpost_hp != other.ally_outpost_hp) {
      return false;
    }
    if (this->ally_base_hp != other.ally_base_hp) {
      return false;
    }
    if (this->enemy_outpost_hp != other.enemy_outpost_hp) {
      return false;
    }
    if (this->enemy_base_hp != other.enemy_base_hp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameRobotHP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameRobotHP_

// alias to use template instance with default allocator
using GameRobotHP =
  rm_referee_msgs::msg::GameRobotHP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_HPP_
