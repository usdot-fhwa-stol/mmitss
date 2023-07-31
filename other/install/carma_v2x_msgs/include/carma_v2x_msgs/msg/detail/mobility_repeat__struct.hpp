// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MobilityRepeat.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MobilityRepeat __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MobilityRepeat __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityRepeat_
{
  using Type = MobilityRepeat_<ContainerAllocator>;

  explicit MobilityRepeat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->repeat = 0;
    }
  }

  explicit MobilityRepeat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->repeat = 0;
    }
  }

  // field types and members
  using _repeat_type =
    uint8_t;
  _repeat_type repeat;

  // setters for named parameter idiom
  Type & set__repeat(
    const uint8_t & _arg)
  {
    this->repeat = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t REQUEST_AGAIN =
    1u;
  static constexpr uint8_t NEVER_REQUEST_AGAIN =
    2u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityRepeat
    std::shared_ptr<carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityRepeat
    std::shared_ptr<carma_v2x_msgs::msg::MobilityRepeat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityRepeat_ & other) const
  {
    if (this->repeat != other.repeat) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityRepeat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityRepeat_

// alias to use template instance with default allocator
using MobilityRepeat =
  carma_v2x_msgs::msg::MobilityRepeat_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t MobilityRepeat_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t MobilityRepeat_<ContainerAllocator>::REQUEST_AGAIN;
template<typename ContainerAllocator>
constexpr uint8_t MobilityRepeat_<ContainerAllocator>::NEVER_REQUEST_AGAIN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REPEAT__STRUCT_HPP_
