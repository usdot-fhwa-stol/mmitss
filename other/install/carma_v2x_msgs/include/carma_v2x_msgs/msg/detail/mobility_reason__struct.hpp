// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MobilityReason.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REASON__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REASON__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MobilityReason __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MobilityReason __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityReason_
{
  using Type = MobilityReason_<ContainerAllocator>;

  explicit MobilityReason_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = 0;
    }
  }

  explicit MobilityReason_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reason = 0;
    }
  }

  // field types and members
  using _reason_type =
    uint8_t;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__reason(
    const uint8_t & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t ACCEPTED =
    1u;
  static constexpr uint8_t SAFETY_VIOLATION =
    2u;
  static constexpr uint8_t INSUFFICIENT_TIME =
    3u;
  static constexpr uint8_t PLAN_CONFLICT =
    4u;
  static constexpr uint8_t OTHERWISE_ENGAGED =
    5u;
  static constexpr uint8_t INSUFFICIENT_URGENCY =
    6u;
  static constexpr uint8_t PLAN_UNCLEAR =
    7u;
  static constexpr uint8_t OTHER =
    8u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityReason
    std::shared_ptr<carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityReason
    std::shared_ptr<carma_v2x_msgs::msg::MobilityReason_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityReason_ & other) const
  {
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityReason_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityReason_

// alias to use template instance with default allocator
using MobilityReason =
  carma_v2x_msgs::msg::MobilityReason_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::ACCEPTED;
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::SAFETY_VIOLATION;
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::INSUFFICIENT_TIME;
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::PLAN_CONFLICT;
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::OTHERWISE_ENGAGED;
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::INSUFFICIENT_URGENCY;
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::PLAN_UNCLEAR;
template<typename ContainerAllocator>
constexpr uint8_t MobilityReason_<ContainerAllocator>::OTHER;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REASON__STRUCT_HPP_
