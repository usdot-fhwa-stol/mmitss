// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/YawDetected.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__YawDetected __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__YawDetected __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YawDetected_
{
  using Type = YawDetected_<ContainerAllocator>;

  explicit YawDetected_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_detected = 0.0f;
    }
  }

  explicit YawDetected_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_detected = 0.0f;
    }
  }

  // field types and members
  using _yaw_detected_type =
    float;
  _yaw_detected_type yaw_detected;

  // setters for named parameter idiom
  Type & set__yaw_detected(
    const float & _arg)
  {
    this->yaw_detected = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float MIN_YAW_DETECTED =
    -180.0;
  static constexpr float MAX_YAW_DETECTED =
    180.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::YawDetected_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::YawDetected_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::YawDetected_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::YawDetected_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::YawDetected_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::YawDetected_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::YawDetected_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::YawDetected_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::YawDetected_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::YawDetected_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__YawDetected
    std::shared_ptr<carma_v2x_msgs::msg::YawDetected_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__YawDetected
    std::shared_ptr<carma_v2x_msgs::msg::YawDetected_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YawDetected_ & other) const
  {
    if (this->yaw_detected != other.yaw_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const YawDetected_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YawDetected_

// alias to use template instance with default allocator
using YawDetected =
  carma_v2x_msgs::msg::YawDetected_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float YawDetected_<ContainerAllocator>::MIN_YAW_DETECTED;
template<typename ContainerAllocator>
constexpr float YawDetected_<ContainerAllocator>::MAX_YAW_DETECTED;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_HPP_
