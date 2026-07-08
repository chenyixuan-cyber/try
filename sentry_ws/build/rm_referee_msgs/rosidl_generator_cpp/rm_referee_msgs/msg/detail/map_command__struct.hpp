// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/MapCommand.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__MapCommand __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__MapCommand __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapCommand_
{
  using Type = MapCommand_<ContainerAllocator>;

  explicit MapCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_position_x = 0.0f;
      this->target_position_y = 0.0f;
      this->cmd_keyboard = 0;
      this->target_robot_id = 0;
      this->cmd_source = 0;
    }
  }

  explicit MapCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_position_x = 0.0f;
      this->target_position_y = 0.0f;
      this->cmd_keyboard = 0;
      this->target_robot_id = 0;
      this->cmd_source = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _target_position_x_type =
    float;
  _target_position_x_type target_position_x;
  using _target_position_y_type =
    float;
  _target_position_y_type target_position_y;
  using _cmd_keyboard_type =
    uint8_t;
  _cmd_keyboard_type cmd_keyboard;
  using _target_robot_id_type =
    uint8_t;
  _target_robot_id_type target_robot_id;
  using _cmd_source_type =
    uint16_t;
  _cmd_source_type cmd_source;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__target_position_x(
    const float & _arg)
  {
    this->target_position_x = _arg;
    return *this;
  }
  Type & set__target_position_y(
    const float & _arg)
  {
    this->target_position_y = _arg;
    return *this;
  }
  Type & set__cmd_keyboard(
    const uint8_t & _arg)
  {
    this->cmd_keyboard = _arg;
    return *this;
  }
  Type & set__target_robot_id(
    const uint8_t & _arg)
  {
    this->target_robot_id = _arg;
    return *this;
  }
  Type & set__cmd_source(
    const uint16_t & _arg)
  {
    this->cmd_source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::MapCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::MapCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::MapCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::MapCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::MapCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::MapCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::MapCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::MapCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::MapCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::MapCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__MapCommand
    std::shared_ptr<rm_referee_msgs::msg::MapCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__MapCommand
    std::shared_ptr<rm_referee_msgs::msg::MapCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->target_position_x != other.target_position_x) {
      return false;
    }
    if (this->target_position_y != other.target_position_y) {
      return false;
    }
    if (this->cmd_keyboard != other.cmd_keyboard) {
      return false;
    }
    if (this->target_robot_id != other.target_robot_id) {
      return false;
    }
    if (this->cmd_source != other.cmd_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapCommand_

// alias to use template instance with default allocator
using MapCommand =
  rm_referee_msgs::msg::MapCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__STRUCT_HPP_
