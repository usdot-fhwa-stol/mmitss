// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pitch'
#include "j3224_v2x_msgs/msg/detail/pitch_detected__struct.hpp"
// Member 'roll'
#include "j3224_v2x_msgs/msg/detail/roll_detected__struct.hpp"
// Member 'yaw'
#include "j3224_v2x_msgs/msg/detail/yaw_detected__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__Attitude __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__Attitude __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Attitude_
{
  using Type = Attitude_<ContainerAllocator>;

  explicit Attitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pitch(_init),
    roll(_init),
    yaw(_init)
  {
    (void)_init;
  }

  explicit Attitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pitch(_alloc, _init),
    roll(_alloc, _init),
    yaw(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pitch_type =
    j3224_v2x_msgs::msg::PitchDetected_<ContainerAllocator>;
  _pitch_type pitch;
  using _roll_type =
    j3224_v2x_msgs::msg::RollDetected_<ContainerAllocator>;
  _roll_type roll;
  using _yaw_type =
    j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator>;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__pitch(
    const j3224_v2x_msgs::msg::PitchDetected_<ContainerAllocator> & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const j3224_v2x_msgs::msg::RollDetected_<ContainerAllocator> & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__yaw(
    const j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator> & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::Attitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::Attitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::Attitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::Attitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::Attitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::Attitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::Attitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::Attitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::Attitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::Attitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__Attitude
    std::shared_ptr<j3224_v2x_msgs::msg::Attitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__Attitude
    std::shared_ptr<j3224_v2x_msgs::msg::Attitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attitude_ & other) const
  {
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attitude_

// alias to use template instance with default allocator
using Attitude =
  j3224_v2x_msgs::msg::Attitude_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE__STRUCT_HPP_
