// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__RobotStatus __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->robot_level = 0;
      this->current_hp = 0;
      this->maximum_hp = 0;
      this->shooter_barrel_cooling_value = 0;
      this->shooter_barrel_heat_limit = 0;
      this->chassis_power_limit = 0;
      this->bullet_speed_limit = 0.0f;
      this->power_management_gimbal_output = false;
      this->power_management_chassis_output = false;
      this->power_management_shooter_output = false;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->robot_level = 0;
      this->current_hp = 0;
      this->maximum_hp = 0;
      this->shooter_barrel_cooling_value = 0;
      this->shooter_barrel_heat_limit = 0;
      this->chassis_power_limit = 0;
      this->bullet_speed_limit = 0.0f;
      this->power_management_gimbal_output = false;
      this->power_management_chassis_output = false;
      this->power_management_shooter_output = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    uint8_t;
  _robot_id_type robot_id;
  using _robot_level_type =
    uint8_t;
  _robot_level_type robot_level;
  using _current_hp_type =
    uint16_t;
  _current_hp_type current_hp;
  using _maximum_hp_type =
    uint16_t;
  _maximum_hp_type maximum_hp;
  using _shooter_barrel_cooling_value_type =
    uint16_t;
  _shooter_barrel_cooling_value_type shooter_barrel_cooling_value;
  using _shooter_barrel_heat_limit_type =
    uint16_t;
  _shooter_barrel_heat_limit_type shooter_barrel_heat_limit;
  using _chassis_power_limit_type =
    uint16_t;
  _chassis_power_limit_type chassis_power_limit;
  using _bullet_speed_limit_type =
    float;
  _bullet_speed_limit_type bullet_speed_limit;
  using _power_management_gimbal_output_type =
    bool;
  _power_management_gimbal_output_type power_management_gimbal_output;
  using _power_management_chassis_output_type =
    bool;
  _power_management_chassis_output_type power_management_chassis_output;
  using _power_management_shooter_output_type =
    bool;
  _power_management_shooter_output_type power_management_shooter_output;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robot_id(
    const uint8_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__robot_level(
    const uint8_t & _arg)
  {
    this->robot_level = _arg;
    return *this;
  }
  Type & set__current_hp(
    const uint16_t & _arg)
  {
    this->current_hp = _arg;
    return *this;
  }
  Type & set__maximum_hp(
    const uint16_t & _arg)
  {
    this->maximum_hp = _arg;
    return *this;
  }
  Type & set__shooter_barrel_cooling_value(
    const uint16_t & _arg)
  {
    this->shooter_barrel_cooling_value = _arg;
    return *this;
  }
  Type & set__shooter_barrel_heat_limit(
    const uint16_t & _arg)
  {
    this->shooter_barrel_heat_limit = _arg;
    return *this;
  }
  Type & set__chassis_power_limit(
    const uint16_t & _arg)
  {
    this->chassis_power_limit = _arg;
    return *this;
  }
  Type & set__bullet_speed_limit(
    const float & _arg)
  {
    this->bullet_speed_limit = _arg;
    return *this;
  }
  Type & set__power_management_gimbal_output(
    const bool & _arg)
  {
    this->power_management_gimbal_output = _arg;
    return *this;
  }
  Type & set__power_management_chassis_output(
    const bool & _arg)
  {
    this->power_management_chassis_output = _arg;
    return *this;
  }
  Type & set__power_management_shooter_output(
    const bool & _arg)
  {
    this->power_management_shooter_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__RobotStatus
    std::shared_ptr<rm_referee_msgs::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__RobotStatus
    std::shared_ptr<rm_referee_msgs::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->robot_level != other.robot_level) {
      return false;
    }
    if (this->current_hp != other.current_hp) {
      return false;
    }
    if (this->maximum_hp != other.maximum_hp) {
      return false;
    }
    if (this->shooter_barrel_cooling_value != other.shooter_barrel_cooling_value) {
      return false;
    }
    if (this->shooter_barrel_heat_limit != other.shooter_barrel_heat_limit) {
      return false;
    }
    if (this->chassis_power_limit != other.chassis_power_limit) {
      return false;
    }
    if (this->bullet_speed_limit != other.bullet_speed_limit) {
      return false;
    }
    if (this->power_management_gimbal_output != other.power_management_gimbal_output) {
      return false;
    }
    if (this->power_management_chassis_output != other.power_management_chassis_output) {
      return false;
    }
    if (this->power_management_shooter_output != other.power_management_shooter_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  rm_referee_msgs::msg::RobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
