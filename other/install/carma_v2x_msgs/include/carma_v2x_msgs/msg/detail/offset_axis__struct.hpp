// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/OffsetAxis.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__OffsetAxis __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__OffsetAxis __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OffsetAxis_
{
  using Type = OffsetAxis_<ContainerAllocator>;

  explicit OffsetAxis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->small = 0.0f;
      this->large = 0.0f;
    }
  }

  explicit OffsetAxis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->small = 0.0f;
      this->large = 0.0f;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _small_type =
    float;
  _small_type small;
  using _large_type =
    float;
  _large_type large;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__small(
    const float & _arg)
  {
    this->small = _arg;
    return *this;
  }
  Type & set__large(
    const float & _arg)
  {
    this->large = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SMALL =
    0u;
  static constexpr uint8_t LARGE =
    1u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__OffsetAxis
    std::shared_ptr<carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__OffsetAxis
    std::shared_ptr<carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OffsetAxis_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->small != other.small) {
      return false;
    }
    if (this->large != other.large) {
      return false;
    }
    return true;
  }
  bool operator!=(const OffsetAxis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OffsetAxis_

// alias to use template instance with default allocator
using OffsetAxis =
  carma_v2x_msgs::msg::OffsetAxis_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t OffsetAxis_<ContainerAllocator>::SMALL;
template<typename ContainerAllocator>
constexpr uint8_t OffsetAxis_<ContainerAllocator>::LARGE;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__STRUCT_HPP_
