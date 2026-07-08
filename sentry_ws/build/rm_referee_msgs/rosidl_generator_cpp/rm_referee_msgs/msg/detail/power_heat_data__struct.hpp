// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__PowerHeatData __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__PowerHeatData __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerHeatData_
{
  using Type = PowerHeatData_<ContainerAllocator>;

  explicit PowerHeatData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reserved = 0;
      this->reserved_2 = 0;
      this->reserved_3 = 0.0f;
      this->buffer_energy = 0;
      this->shooter_17mm_1_barrel_heat = 0;
      this->shooter_42mm_barrel_heat = 0;
    }
  }

  explicit PowerHeatData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reserved = 0;
      this->reserved_2 = 0;
      this->reserved_3 = 0.0f;
      this->buffer_energy = 0;
      this->shooter_17mm_1_barrel_heat = 0;
      this->shooter_42mm_barrel_heat = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _reserved_type =
    uint16_t;
  _reserved_type reserved;
  using _reserved_2_type =
    uint16_t;
  _reserved_2_type reserved_2;
  using _reserved_3_type =
    float;
  _reserved_3_type reserved_3;
  using _buffer_energy_type =
    uint16_t;
  _buffer_energy_type buffer_energy;
  using _shooter_17mm_1_barrel_heat_type =
    uint16_t;
  _shooter_17mm_1_barrel_heat_type shooter_17mm_1_barrel_heat;
  using _shooter_42mm_barrel_heat_type =
    uint16_t;
  _shooter_42mm_barrel_heat_type shooter_42mm_barrel_heat;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint16_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__reserved_2(
    const uint16_t & _arg)
  {
    this->reserved_2 = _arg;
    return *this;
  }
  Type & set__reserved_3(
    const float & _arg)
  {
    this->reserved_3 = _arg;
    return *this;
  }
  Type & set__buffer_energy(
    const uint16_t & _arg)
  {
    this->buffer_energy = _arg;
    return *this;
  }
  Type & set__shooter_17mm_1_barrel_heat(
    const uint16_t & _arg)
  {
    this->shooter_17mm_1_barrel_heat = _arg;
    return *this;
  }
  Type & set__shooter_42mm_barrel_heat(
    const uint16_t & _arg)
  {
    this->shooter_42mm_barrel_heat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__PowerHeatData
    std::shared_ptr<rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__PowerHeatData
    std::shared_ptr<rm_referee_msgs::msg::PowerHeatData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerHeatData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->reserved_2 != other.reserved_2) {
      return false;
    }
    if (this->reserved_3 != other.reserved_3) {
      return false;
    }
    if (this->buffer_energy != other.buffer_energy) {
      return false;
    }
    if (this->shooter_17mm_1_barrel_heat != other.shooter_17mm_1_barrel_heat) {
      return false;
    }
    if (this->shooter_42mm_barrel_heat != other.shooter_42mm_barrel_heat) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerHeatData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerHeatData_

// alias to use template instance with default allocator
using PowerHeatData =
  rm_referee_msgs::msg::PowerHeatData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_HPP_
