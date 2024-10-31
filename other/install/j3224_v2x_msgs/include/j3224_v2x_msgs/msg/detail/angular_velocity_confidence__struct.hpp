// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/AngularVelocityConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pitch_rate_confidence'
#include "j3224_v2x_msgs/msg/detail/pitch_rate_confidence__struct.hpp"
// Member 'roll_rate_confidence'
#include "j3224_v2x_msgs/msg/detail/roll_rate_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__AngularVelocityConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__AngularVelocityConfidence __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AngularVelocityConfidence_
{
  using Type = AngularVelocityConfidence_<ContainerAllocator>;

  explicit AngularVelocityConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pitch_rate_confidence(_init),
    roll_rate_confidence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit AngularVelocityConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pitch_rate_confidence(_alloc, _init),
    roll_rate_confidence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _pitch_rate_confidence_type =
    j3224_v2x_msgs::msg::PitchRateConfidence_<ContainerAllocator>;
  _pitch_rate_confidence_type pitch_rate_confidence;
  using _roll_rate_confidence_type =
    j3224_v2x_msgs::msg::RollRateConfidence_<ContainerAllocator>;
  _roll_rate_confidence_type roll_rate_confidence;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__pitch_rate_confidence(
    const j3224_v2x_msgs::msg::PitchRateConfidence_<ContainerAllocator> & _arg)
  {
    this->pitch_rate_confidence = _arg;
    return *this;
  }
  Type & set__roll_rate_confidence(
    const j3224_v2x_msgs::msg::RollRateConfidence_<ContainerAllocator> & _arg)
  {
    this->roll_rate_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_PITCH_RATE_CONFIDENCE =
    1u;
  static constexpr uint8_t HAS_ROLL_RATE_CONFIDENCE =
    2u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__AngularVelocityConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__AngularVelocityConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngularVelocityConfidence_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->pitch_rate_confidence != other.pitch_rate_confidence) {
      return false;
    }
    if (this->roll_rate_confidence != other.roll_rate_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngularVelocityConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngularVelocityConfidence_

// alias to use template instance with default allocator
using AngularVelocityConfidence =
  j3224_v2x_msgs::msg::AngularVelocityConfidence_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AngularVelocityConfidence_<ContainerAllocator>::HAS_PITCH_RATE_CONFIDENCE;
template<typename ContainerAllocator>
constexpr uint8_t AngularVelocityConfidence_<ContainerAllocator>::HAS_ROLL_RATE_CONFIDENCE;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__STRUCT_HPP_
