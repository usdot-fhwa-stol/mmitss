// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/RollDetected.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__RollDetected __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__RollDetected __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RollDetected_
{
  using Type = RollDetected_<ContainerAllocator>;

  explicit RollDetected_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll_detected = 0.0f;
    }
  }

  explicit RollDetected_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll_detected = 0.0f;
    }
  }

  // field types and members
  using _roll_detected_type =
    float;
  _roll_detected_type roll_detected;

  // setters for named parameter idiom
  Type & set__roll_detected(
    const float & _arg)
  {
    this->roll_detected = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float MIN_ROLL_DETECTED =
    -180.0;
  static constexpr float MAX_ROLL_DETECTED =
    180.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::RollDetected_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::RollDetected_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::RollDetected_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::RollDetected_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::RollDetected_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::RollDetected_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::RollDetected_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::RollDetected_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::RollDetected_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::RollDetected_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__RollDetected
    std::shared_ptr<carma_v2x_msgs::msg::RollDetected_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__RollDetected
    std::shared_ptr<carma_v2x_msgs::msg::RollDetected_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RollDetected_ & other) const
  {
    if (this->roll_detected != other.roll_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const RollDetected_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RollDetected_

// alias to use template instance with default allocator
using RollDetected =
  carma_v2x_msgs::msg::RollDetected_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float RollDetected_<ContainerAllocator>::MIN_ROLL_DETECTED;
template<typename ContainerAllocator>
constexpr float RollDetected_<ContainerAllocator>::MAX_ROLL_DETECTED;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ROLL_DETECTED__STRUCT_HPP_
