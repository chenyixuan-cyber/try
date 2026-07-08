// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__ShootData __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__ShootData __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShootData_
{
  using Type = ShootData_<ContainerAllocator>;

  explicit ShootData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_type = 0;
      this->shooter_number = 0;
      this->launching_frequency = 0;
      this->initial_speed = 0.0f;
    }
  }

  explicit ShootData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_type = 0;
      this->shooter_number = 0;
      this->launching_frequency = 0;
      this->initial_speed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bullet_type_type =
    uint8_t;
  _bullet_type_type bullet_type;
  using _shooter_number_type =
    uint8_t;
  _shooter_number_type shooter_number;
  using _launching_frequency_type =
    uint8_t;
  _launching_frequency_type launching_frequency;
  using _initial_speed_type =
    float;
  _initial_speed_type initial_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bullet_type(
    const uint8_t & _arg)
  {
    this->bullet_type = _arg;
    return *this;
  }
  Type & set__shooter_number(
    const uint8_t & _arg)
  {
    this->shooter_number = _arg;
    return *this;
  }
  Type & set__launching_frequency(
    const uint8_t & _arg)
  {
    this->launching_frequency = _arg;
    return *this;
  }
  Type & set__initial_speed(
    const float & _arg)
  {
    this->initial_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::ShootData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::ShootData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::ShootData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::ShootData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::ShootData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::ShootData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::ShootData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::ShootData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::ShootData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::ShootData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__ShootData
    std::shared_ptr<rm_referee_msgs::msg::ShootData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__ShootData
    std::shared_ptr<rm_referee_msgs::msg::ShootData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShootData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bullet_type != other.bullet_type) {
      return false;
    }
    if (this->shooter_number != other.shooter_number) {
      return false;
    }
    if (this->launching_frequency != other.launching_frequency) {
      return false;
    }
    if (this->initial_speed != other.initial_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShootData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShootData_

// alias to use template instance with default allocator
using ShootData =
  rm_referee_msgs::msg::ShootData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_
