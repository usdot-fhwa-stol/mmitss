// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from can_msgs:msg/CanState.idl
// generated code does not contain a copyright notice

#ifndef CAN_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_HPP_
#define CAN_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__can_msgs__msg__CanState __attribute__((deprecated))
#else
# define DEPRECATED__can_msgs__msg__CanState __declspec(deprecated)
#endif

namespace can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanState_
{
  using Type = CanState_<ContainerAllocator>;

  explicit CanState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driver_state = 0;
    }
  }

  explicit CanState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->driver_state = 0;
    }
  }

  // field types and members
  using _driver_state_type =
    uint8_t;
  _driver_state_type driver_state;

  // setters for named parameter idiom
  Type & set__driver_state(
    const uint8_t & _arg)
  {
    this->driver_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CLOSED =
    0u;
  static constexpr uint8_t OPEN =
    1u;
  static constexpr uint8_t READY =
    2u;

  // pointer types
  using RawPtr =
    can_msgs::msg::CanState_<ContainerAllocator> *;
  using ConstRawPtr =
    const can_msgs::msg::CanState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<can_msgs::msg::CanState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<can_msgs::msg::CanState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      can_msgs::msg::CanState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<can_msgs::msg::CanState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      can_msgs::msg::CanState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<can_msgs::msg::CanState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<can_msgs::msg::CanState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<can_msgs::msg::CanState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__can_msgs__msg__CanState
    std::shared_ptr<can_msgs::msg::CanState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__can_msgs__msg__CanState
    std::shared_ptr<can_msgs::msg::CanState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanState_ & other) const
  {
    if (this->driver_state != other.driver_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanState_

// alias to use template instance with default allocator
using CanState =
  can_msgs::msg::CanState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CanState_<ContainerAllocator>::CLOSED;
template<typename ContainerAllocator>
constexpr uint8_t CanState_<ContainerAllocator>::OPEN;
template<typename ContainerAllocator>
constexpr uint8_t CanState_<ContainerAllocator>::READY;

}  // namespace msg

}  // namespace can_msgs

#endif  // CAN_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_HPP_
