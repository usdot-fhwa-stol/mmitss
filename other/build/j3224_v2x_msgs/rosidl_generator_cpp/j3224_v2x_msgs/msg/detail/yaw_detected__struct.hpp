// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/YawDetected.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__YawDetected __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__YawDetected __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
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
      this->yaw_detected = 0;
    }
  }

  explicit YawDetected_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_detected = 0;
    }
  }

  // field types and members
  using _yaw_detected_type =
    int16_t;
  _yaw_detected_type yaw_detected;

  // setters for named parameter idiom
  Type & set__yaw_detected(
    const int16_t & _arg)
  {
    this->yaw_detected = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t MIN_YAW_DETECTED =
    -14400;
  static constexpr int16_t MAX_YAW_DETECTED =
    14400;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__YawDetected
    std::shared_ptr<j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__YawDetected
    std::shared_ptr<j3224_v2x_msgs::msg::YawDetected_<ContainerAllocator> const>
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
  j3224_v2x_msgs::msg::YawDetected_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int16_t YawDetected_<ContainerAllocator>::MIN_YAW_DETECTED;
template<typename ContainerAllocator>
constexpr int16_t YawDetected_<ContainerAllocator>::MAX_YAW_DETECTED;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__YAW_DETECTED__STRUCT_HPP_
