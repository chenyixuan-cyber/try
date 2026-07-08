// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:srv/Tx.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__SRV__DETAIL__TX__STRUCT_HPP_
#define RM_REFEREE_MSGS__SRV__DETAIL__TX__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__srv__Tx_Request __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__srv__Tx_Request __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tx_Request_
{
  using Type = Tx_Request_<ContainerAllocator>;

  explicit Tx_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Tx_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::srv::Tx_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::srv::Tx_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::srv::Tx_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::srv::Tx_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::srv::Tx_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::srv::Tx_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::srv::Tx_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::srv::Tx_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::srv::Tx_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::srv::Tx_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__srv__Tx_Request
    std::shared_ptr<rm_referee_msgs::srv::Tx_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__srv__Tx_Request
    std::shared_ptr<rm_referee_msgs::srv::Tx_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tx_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tx_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tx_Request_

// alias to use template instance with default allocator
using Tx_Request =
  rm_referee_msgs::srv::Tx_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rm_referee_msgs


// Include directives for member types
// Member 'header'
// already included above
// #include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_referee_msgs__srv__Tx_Response __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__srv__Tx_Response __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tx_Response_
{
  using Type = Tx_Response_<ContainerAllocator>;

  explicit Tx_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit Tx_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ok_type =
    bool;
  _ok_type ok;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::srv::Tx_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::srv::Tx_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::srv::Tx_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::srv::Tx_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::srv::Tx_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::srv::Tx_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::srv::Tx_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::srv::Tx_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::srv::Tx_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::srv::Tx_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__srv__Tx_Response
    std::shared_ptr<rm_referee_msgs::srv::Tx_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__srv__Tx_Response
    std::shared_ptr<rm_referee_msgs::srv::Tx_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tx_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tx_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tx_Response_

// alias to use template instance with default allocator
using Tx_Response =
  rm_referee_msgs::srv::Tx_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rm_referee_msgs

namespace rm_referee_msgs
{

namespace srv
{

struct Tx
{
  using Request = rm_referee_msgs::srv::Tx_Request;
  using Response = rm_referee_msgs::srv::Tx_Response;
};

}  // namespace srv

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__SRV__DETAIL__TX__STRUCT_HPP_
