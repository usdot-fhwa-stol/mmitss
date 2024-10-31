// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/ObstacleSizeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'width_confidence'
// Member 'length_confidence'
// Member 'height_confidence'
#include "j3224_v2x_msgs/msg/detail/size_value_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__ObstacleSizeConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__ObstacleSizeConfidence __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleSizeConfidence_
{
  using Type = ObstacleSizeConfidence_<ContainerAllocator>;

  explicit ObstacleSizeConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : width_confidence(_init),
    length_confidence(_init),
    height_confidence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit ObstacleSizeConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : width_confidence(_alloc, _init),
    length_confidence(_alloc, _init),
    height_confidence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _width_confidence_type =
    j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>;
  _width_confidence_type width_confidence;
  using _length_confidence_type =
    j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>;
  _length_confidence_type length_confidence;
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _height_confidence_type =
    j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>;
  _height_confidence_type height_confidence;

  // setters for named parameter idiom
  Type & set__width_confidence(
    const j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> & _arg)
  {
    this->width_confidence = _arg;
    return *this;
  }
  Type & set__length_confidence(
    const j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> & _arg)
  {
    this->length_confidence = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__height_confidence(
    const j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> & _arg)
  {
    this->height_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_HEIGHT_CONFIDENCE =
    1u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__ObstacleSizeConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__ObstacleSizeConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleSizeConfidence_ & other) const
  {
    if (this->width_confidence != other.width_confidence) {
      return false;
    }
    if (this->length_confidence != other.length_confidence) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->height_confidence != other.height_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleSizeConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleSizeConfidence_

// alias to use template instance with default allocator
using ObstacleSizeConfidence =
  j3224_v2x_msgs::msg::ObstacleSizeConfidence_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ObstacleSizeConfidence_<ContainerAllocator>::HAS_HEIGHT_CONFIDENCE;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__STRUCT_HPP_
