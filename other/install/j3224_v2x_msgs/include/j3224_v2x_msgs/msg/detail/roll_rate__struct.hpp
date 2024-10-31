// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/RollRate.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__RollRate __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__RollRate __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RollRate_
{
  using Type = RollRate_<ContainerAllocator>;

  explicit RollRate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll_rate = 0;
    }
  }

  explicit RollRate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll_rate = 0;
    }
  }

  // field types and members
  using _roll_rate_type =
    int16_t;
  _roll_rate_type roll_rate;

  // setters for named parameter idiom
  Type & set__roll_rate(
    const int16_t & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t MIN_ROLL_RATE =
    -32767;
  static constexpr int16_t MAX_ROLL_RATE =
    32766;
  static constexpr int16_t UNAVAILABLE =
    32767;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::RollRate_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::RollRate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::RollRate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::RollRate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::RollRate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::RollRate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::RollRate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::RollRate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::RollRate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::RollRate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__RollRate
    std::shared_ptr<j3224_v2x_msgs::msg::RollRate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__RollRate
    std::shared_ptr<j3224_v2x_msgs::msg::RollRate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RollRate_ & other) const
  {
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const RollRate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RollRate_

// alias to use template instance with default allocator
using RollRate =
  j3224_v2x_msgs::msg::RollRate_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int16_t RollRate_<ContainerAllocator>::MIN_ROLL_RATE;
template<typename ContainerAllocator>
constexpr int16_t RollRate_<ContainerAllocator>::MAX_ROLL_RATE;
template<typename ContainerAllocator>
constexpr int16_t RollRate_<ContainerAllocator>::UNAVAILABLE;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ROLL_RATE__STRUCT_HPP_
