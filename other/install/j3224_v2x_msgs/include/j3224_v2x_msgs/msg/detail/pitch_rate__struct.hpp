// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/PitchRate.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__PitchRate __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__PitchRate __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PitchRate_
{
  using Type = PitchRate_<ContainerAllocator>;

  explicit PitchRate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch_rate = 0;
    }
  }

  explicit PitchRate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch_rate = 0;
    }
  }

  // field types and members
  using _pitch_rate_type =
    int16_t;
  _pitch_rate_type pitch_rate;

  // setters for named parameter idiom
  Type & set__pitch_rate(
    const int16_t & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t MIN_PITCH_RATE =
    -32767;
  static constexpr int16_t MAX_PITCH_RATE =
    32766;
  static constexpr int16_t UNAVAILABLE =
    32767;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__PitchRate
    std::shared_ptr<j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__PitchRate
    std::shared_ptr<j3224_v2x_msgs::msg::PitchRate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PitchRate_ & other) const
  {
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const PitchRate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PitchRate_

// alias to use template instance with default allocator
using PitchRate =
  j3224_v2x_msgs::msg::PitchRate_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int16_t PitchRate_<ContainerAllocator>::MIN_PITCH_RATE;
template<typename ContainerAllocator>
constexpr int16_t PitchRate_<ContainerAllocator>::MAX_PITCH_RATE;
template<typename ContainerAllocator>
constexpr int16_t PitchRate_<ContainerAllocator>::UNAVAILABLE;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__PITCH_RATE__STRUCT_HPP_
