// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/AttitudeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pitch_confidence'
// Member 'roll_confidence'
// Member 'yaw_confidence'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__AttitudeConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__AttitudeConfidence __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttitudeConfidence_
{
  using Type = AttitudeConfidence_<ContainerAllocator>;

  explicit AttitudeConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pitch_confidence(_init),
    roll_confidence(_init),
    yaw_confidence(_init)
  {
    (void)_init;
  }

  explicit AttitudeConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pitch_confidence(_alloc, _init),
    roll_confidence(_alloc, _init),
    yaw_confidence(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pitch_confidence_type =
    j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>;
  _pitch_confidence_type pitch_confidence;
  using _roll_confidence_type =
    j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>;
  _roll_confidence_type roll_confidence;
  using _yaw_confidence_type =
    j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>;
  _yaw_confidence_type yaw_confidence;

  // setters for named parameter idiom
  Type & set__pitch_confidence(
    const j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> & _arg)
  {
    this->pitch_confidence = _arg;
    return *this;
  }
  Type & set__roll_confidence(
    const j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> & _arg)
  {
    this->roll_confidence = _arg;
    return *this;
  }
  Type & set__yaw_confidence(
    const j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> & _arg)
  {
    this->yaw_confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__AttitudeConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__AttitudeConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttitudeConfidence_ & other) const
  {
    if (this->pitch_confidence != other.pitch_confidence) {
      return false;
    }
    if (this->roll_confidence != other.roll_confidence) {
      return false;
    }
    if (this->yaw_confidence != other.yaw_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttitudeConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttitudeConfidence_

// alias to use template instance with default allocator
using AttitudeConfidence =
  j3224_v2x_msgs::msg::AttitudeConfidence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__STRUCT_HPP_
