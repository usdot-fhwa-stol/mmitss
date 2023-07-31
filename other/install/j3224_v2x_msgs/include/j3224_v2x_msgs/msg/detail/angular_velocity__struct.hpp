// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/AngularVelocity.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pitch_rate'
#include "j3224_v2x_msgs/msg/detail/pitch_rate__struct.hpp"
// Member 'roll_rate'
#include "j3224_v2x_msgs/msg/detail/roll_rate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__AngularVelocity __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__AngularVelocity __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AngularVelocity_
{
  using Type = AngularVelocity_<ContainerAllocator>;

  explicit AngularVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pitch_rate(_init),
    roll_rate(_init)
  {
    (void)_init;
  }

  explicit AngularVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pitch_rate(_alloc, _init),
    roll_rate(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pitch_rate_type =
    j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator>;
  _pitch_rate_type pitch_rate;
  using _roll_rate_type =
    j3224_v2x_msgs::msg::RollRate_<ContainerAllocator>;
  _roll_rate_type roll_rate;

  // setters for named parameter idiom
  Type & set__pitch_rate(
    const j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator> & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const j3224_v2x_msgs::msg::RollRate_<ContainerAllocator> & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__AngularVelocity
    std::shared_ptr<j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__AngularVelocity
    std::shared_ptr<j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngularVelocity_ & other) const
  {
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngularVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngularVelocity_

// alias to use template instance with default allocator
using AngularVelocity =
  j3224_v2x_msgs::msg::AngularVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__STRUCT_HPP_
