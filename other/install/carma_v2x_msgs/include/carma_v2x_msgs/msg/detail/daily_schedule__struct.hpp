// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/DailySchedule.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'begin'
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__DailySchedule __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__DailySchedule __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DailySchedule_
{
  using Type = DailySchedule_<ContainerAllocator>;

  explicit DailySchedule_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : begin(_init),
    duration(_init)
  {
    (void)_init;
  }

  explicit DailySchedule_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : begin(_alloc, _init),
    duration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _begin_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _begin_type begin;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__begin(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->begin = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__DailySchedule
    std::shared_ptr<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__DailySchedule
    std::shared_ptr<carma_v2x_msgs::msg::DailySchedule_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DailySchedule_ & other) const
  {
    if (this->begin != other.begin) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const DailySchedule_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DailySchedule_

// alias to use template instance with default allocator
using DailySchedule =
  carma_v2x_msgs::msg::DailySchedule_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_HPP_
