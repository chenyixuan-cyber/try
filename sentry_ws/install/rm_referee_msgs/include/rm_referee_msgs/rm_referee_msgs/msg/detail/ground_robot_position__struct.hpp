// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/GroundRobotPosition.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__GroundRobotPosition __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__GroundRobotPosition __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroundRobotPosition_
{
  using Type = GroundRobotPosition_<ContainerAllocator>;

  explicit GroundRobotPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_x = 0.0f;
      this->hero_y = 0.0f;
      this->engineer_x = 0.0f;
      this->engineer_y = 0.0f;
      this->standard_3_x = 0.0f;
      this->standard_3_y = 0.0f;
      this->standard_4_x = 0.0f;
      this->standard_4_y = 0.0f;
      this->reserved = 0.0f;
      this->reserved_2 = 0.0f;
    }
  }

  explicit GroundRobotPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_x = 0.0f;
      this->hero_y = 0.0f;
      this->engineer_x = 0.0f;
      this->engineer_y = 0.0f;
      this->standard_3_x = 0.0f;
      this->standard_3_y = 0.0f;
      this->standard_4_x = 0.0f;
      this->standard_4_y = 0.0f;
      this->reserved = 0.0f;
      this->reserved_2 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hero_x_type =
    float;
  _hero_x_type hero_x;
  using _hero_y_type =
    float;
  _hero_y_type hero_y;
  using _engineer_x_type =
    float;
  _engineer_x_type engineer_x;
  using _engineer_y_type =
    float;
  _engineer_y_type engineer_y;
  using _standard_3_x_type =
    float;
  _standard_3_x_type standard_3_x;
  using _standard_3_y_type =
    float;
  _standard_3_y_type standard_3_y;
  using _standard_4_x_type =
    float;
  _standard_4_x_type standard_4_x;
  using _standard_4_y_type =
    float;
  _standard_4_y_type standard_4_y;
  using _reserved_type =
    float;
  _reserved_type reserved;
  using _reserved_2_type =
    float;
  _reserved_2_type reserved_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hero_x(
    const float & _arg)
  {
    this->hero_x = _arg;
    return *this;
  }
  Type & set__hero_y(
    const float & _arg)
  {
    this->hero_y = _arg;
    return *this;
  }
  Type & set__engineer_x(
    const float & _arg)
  {
    this->engineer_x = _arg;
    return *this;
  }
  Type & set__engineer_y(
    const float & _arg)
  {
    this->engineer_y = _arg;
    return *this;
  }
  Type & set__standard_3_x(
    const float & _arg)
  {
    this->standard_3_x = _arg;
    return *this;
  }
  Type & set__standard_3_y(
    const float & _arg)
  {
    this->standard_3_y = _arg;
    return *this;
  }
  Type & set__standard_4_x(
    const float & _arg)
  {
    this->standard_4_x = _arg;
    return *this;
  }
  Type & set__standard_4_y(
    const float & _arg)
  {
    this->standard_4_y = _arg;
    return *this;
  }
  Type & set__reserved(
    const float & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__reserved_2(
    const float & _arg)
  {
    this->reserved_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__GroundRobotPosition
    std::shared_ptr<rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__GroundRobotPosition
    std::shared_ptr<rm_referee_msgs::msg::GroundRobotPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroundRobotPosition_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hero_x != other.hero_x) {
      return false;
    }
    if (this->hero_y != other.hero_y) {
      return false;
    }
    if (this->engineer_x != other.engineer_x) {
      return false;
    }
    if (this->engineer_y != other.engineer_y) {
      return false;
    }
    if (this->standard_3_x != other.standard_3_x) {
      return false;
    }
    if (this->standard_3_y != other.standard_3_y) {
      return false;
    }
    if (this->standard_4_x != other.standard_4_x) {
      return false;
    }
    if (this->standard_4_y != other.standard_4_y) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->reserved_2 != other.reserved_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroundRobotPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroundRobotPosition_

// alias to use template instance with default allocator
using GroundRobotPosition =
  rm_referee_msgs::msg::GroundRobotPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GROUND_ROBOT_POSITION__STRUCT_HPP_
