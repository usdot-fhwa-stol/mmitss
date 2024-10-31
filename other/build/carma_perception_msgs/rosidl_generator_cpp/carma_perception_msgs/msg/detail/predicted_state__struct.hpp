// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/PredictedState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'predicted_position'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'predicted_velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__PredictedState __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__PredictedState __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PredictedState_
{
  using Type = PredictedState_<ContainerAllocator>;

  explicit PredictedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    predicted_position(_init),
    predicted_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->predicted_position_confidence = 0.0;
      this->predicted_velocity_confidence = 0.0;
    }
  }

  explicit PredictedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    predicted_position(_alloc, _init),
    predicted_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->predicted_position_confidence = 0.0;
      this->predicted_velocity_confidence = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _predicted_position_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _predicted_position_type predicted_position;
  using _predicted_position_confidence_type =
    double;
  _predicted_position_confidence_type predicted_position_confidence;
  using _predicted_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _predicted_velocity_type predicted_velocity;
  using _predicted_velocity_confidence_type =
    double;
  _predicted_velocity_confidence_type predicted_velocity_confidence;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__predicted_position(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->predicted_position = _arg;
    return *this;
  }
  Type & set__predicted_position_confidence(
    const double & _arg)
  {
    this->predicted_position_confidence = _arg;
    return *this;
  }
  Type & set__predicted_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->predicted_velocity = _arg;
    return *this;
  }
  Type & set__predicted_velocity_confidence(
    const double & _arg)
  {
    this->predicted_velocity_confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::PredictedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::PredictedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::PredictedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::PredictedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::PredictedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::PredictedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::PredictedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::PredictedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::PredictedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::PredictedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__PredictedState
    std::shared_ptr<carma_perception_msgs::msg::PredictedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__PredictedState
    std::shared_ptr<carma_perception_msgs::msg::PredictedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PredictedState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->predicted_position != other.predicted_position) {
      return false;
    }
    if (this->predicted_position_confidence != other.predicted_position_confidence) {
      return false;
    }
    if (this->predicted_velocity != other.predicted_velocity) {
      return false;
    }
    if (this->predicted_velocity_confidence != other.predicted_velocity_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const PredictedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PredictedState_

// alias to use template instance with default allocator
using PredictedState =
  carma_perception_msgs::msg::PredictedState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__STRUCT_HPP_
