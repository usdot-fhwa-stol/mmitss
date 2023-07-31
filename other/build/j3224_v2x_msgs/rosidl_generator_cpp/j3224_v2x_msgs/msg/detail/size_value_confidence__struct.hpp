// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/SizeValueConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__SizeValueConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__SizeValueConfidence __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SizeValueConfidence_
{
  using Type = SizeValueConfidence_<ContainerAllocator>;

  explicit SizeValueConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_value_confidence = 0;
    }
  }

  explicit SizeValueConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_value_confidence = 0;
    }
  }

  // field types and members
  using _size_value_confidence_type =
    uint8_t;
  _size_value_confidence_type size_value_confidence;

  // setters for named parameter idiom
  Type & set__size_value_confidence(
    const uint8_t & _arg)
  {
    this->size_value_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t SIZE_100_00 =
    1u;
  static constexpr uint8_t SIZE_050_00 =
    2u;
  static constexpr uint8_t SIZE_020_00 =
    3u;
  static constexpr uint8_t SIZE_010_00 =
    4u;
  static constexpr uint8_t SIZE_005_00 =
    5u;
  static constexpr uint8_t SIZE_002_00 =
    6u;
  static constexpr uint8_t SIZE_001_00 =
    7u;
  static constexpr uint8_t SIZE_000_50 =
    8u;
  static constexpr uint8_t SIZE_000_20 =
    9u;
  static constexpr uint8_t SIZE_000_10 =
    10u;
  static constexpr uint8_t SIZE_000_05 =
    11u;
  static constexpr uint8_t SIZE_000_02 =
    12u;
  static constexpr uint8_t SIZE_000_01 =
    13u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__SizeValueConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__SizeValueConfidence
    std::shared_ptr<j3224_v2x_msgs::msg::SizeValueConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SizeValueConfidence_ & other) const
  {
    if (this->size_value_confidence != other.size_value_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const SizeValueConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SizeValueConfidence_

// alias to use template instance with default allocator
using SizeValueConfidence =
  j3224_v2x_msgs::msg::SizeValueConfidence_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_100_00;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_050_00;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_020_00;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_010_00;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_005_00;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_002_00;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_001_00;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_000_50;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_000_20;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_000_10;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_000_05;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_000_02;
template<typename ContainerAllocator>
constexpr uint8_t SizeValueConfidence_<ContainerAllocator>::SIZE_000_01;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE_CONFIDENCE__STRUCT_HPP_
