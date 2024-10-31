// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/RepeatParams.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'offset'
// Member 'period'
// Member 'span'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__RepeatParams __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__RepeatParams __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RepeatParams_
{
  using Type = RepeatParams_<ContainerAllocator>;

  explicit RepeatParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset(_init),
    period(_init),
    span(_init)
  {
    (void)_init;
  }

  explicit RepeatParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset(_alloc, _init),
    period(_alloc, _init),
    span(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _offset_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _offset_type offset;
  using _period_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _period_type period;
  using _span_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _span_type span;

  // setters for named parameter idiom
  Type & set__offset(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__period(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->period = _arg;
    return *this;
  }
  Type & set__span(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->span = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__RepeatParams
    std::shared_ptr<carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__RepeatParams
    std::shared_ptr<carma_v2x_msgs::msg::RepeatParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RepeatParams_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    if (this->period != other.period) {
      return false;
    }
    if (this->span != other.span) {
      return false;
    }
    return true;
  }
  bool operator!=(const RepeatParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RepeatParams_

// alias to use template instance with default allocator
using RepeatParams =
  carma_v2x_msgs::msg::RepeatParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_HPP_
