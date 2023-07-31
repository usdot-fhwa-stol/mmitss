// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'type'
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__struct.hpp"
// Member 'confidence'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__AdvisorySpeed __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__AdvisorySpeed __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdvisorySpeed_
{
  using Type = AdvisorySpeed_<ContainerAllocator>;

  explicit AdvisorySpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init),
    confidence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->speed_exists = false;
      this->distance = 0;
      this->distance_exists = false;
      this->restriction_class_id = 0;
      this->restriction_class_id_exists = false;
    }
  }

  explicit AdvisorySpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    confidence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->speed_exists = false;
      this->distance = 0;
      this->distance_exists = false;
      this->restriction_class_id = 0;
      this->restriction_class_id_exists = false;
    }
  }

  // field types and members
  using _type_type =
    j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator>;
  _type_type type;
  using _speed_type =
    float;
  _speed_type speed;
  using _speed_exists_type =
    bool;
  _speed_exists_type speed_exists;
  using _confidence_type =
    j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>;
  _confidence_type confidence;
  using _distance_type =
    uint16_t;
  _distance_type distance;
  using _distance_exists_type =
    bool;
  _distance_exists_type distance_exists;
  using _restriction_class_id_type =
    uint8_t;
  _restriction_class_id_type restriction_class_id;
  using _restriction_class_id_exists_type =
    bool;
  _restriction_class_id_exists_type restriction_class_id_exists;

  // setters for named parameter idiom
  Type & set__type(
    const j2735_v2x_msgs::msg::AdvisorySpeedType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__speed_exists(
    const bool & _arg)
  {
    this->speed_exists = _arg;
    return *this;
  }
  Type & set__confidence(
    const j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__distance(
    const uint16_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__distance_exists(
    const bool & _arg)
  {
    this->distance_exists = _arg;
    return *this;
  }
  Type & set__restriction_class_id(
    const uint8_t & _arg)
  {
    this->restriction_class_id = _arg;
    return *this;
  }
  Type & set__restriction_class_id_exists(
    const bool & _arg)
  {
    this->restriction_class_id_exists = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float SPEED_UNAVAILABLE =
    50.0;
  static constexpr uint16_t DISTANCE_UNKNOWN =
    0u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__AdvisorySpeed
    std::shared_ptr<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__AdvisorySpeed
    std::shared_ptr<carma_v2x_msgs::msg::AdvisorySpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdvisorySpeed_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->speed_exists != other.speed_exists) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->distance_exists != other.distance_exists) {
      return false;
    }
    if (this->restriction_class_id != other.restriction_class_id) {
      return false;
    }
    if (this->restriction_class_id_exists != other.restriction_class_id_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdvisorySpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdvisorySpeed_

// alias to use template instance with default allocator
using AdvisorySpeed =
  carma_v2x_msgs::msg::AdvisorySpeed_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float AdvisorySpeed_<ContainerAllocator>::SPEED_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t AdvisorySpeed_<ContainerAllocator>::DISTANCE_UNKNOWN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__STRUCT_HPP_
