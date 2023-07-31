// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/ClassificationConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__ClassificationConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__ClassificationConfidence __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClassificationConfidence_
{
  using Type = ClassificationConfidence_<ContainerAllocator>;

  explicit ClassificationConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->classification_confidence = 0;
    }
  }

  explicit ClassificationConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->classification_confidence = 0;
    }
  }

  // field types and members
  using _classification_confidence_type =
    uint8_t;
  _classification_confidence_type classification_confidence;

  // setters for named parameter idiom
  Type & set__classification_confidence(
    const uint8_t & _arg)
  {
    this->classification_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MIN_CLASSIFICATION_CONFIDENCE =
    0u;
  static constexpr uint8_t MAX_CLASSIFICATION_CONFIDENCE =
    101u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__ClassificationConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__ClassificationConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClassificationConfidence_ & other) const
  {
    if (this->classification_confidence != other.classification_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClassificationConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClassificationConfidence_

// alias to use template instance with default allocator
using ClassificationConfidence =
  j3224_v2x_msgs::msg::ClassificationConfidence_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ClassificationConfidence_<ContainerAllocator>::MIN_CLASSIFICATION_CONFIDENCE;
template<typename ContainerAllocator>
constexpr uint8_t ClassificationConfidence_<ContainerAllocator>::MAX_CLASSIFICATION_CONFIDENCE;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__STRUCT_HPP_
