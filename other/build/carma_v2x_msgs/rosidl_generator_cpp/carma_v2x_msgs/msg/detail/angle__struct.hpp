// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__Angle __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__Angle __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Angle_
{
  using Type = Angle_<ContainerAllocator>;

  explicit Angle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
      this->unavailable = false;
    }
  }

  explicit Angle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
      this->unavailable = false;
    }
  }

  // field types and members
  using _angle_type =
    float;
  _angle_type angle;
  using _unavailable_type =
    bool;
  _unavailable_type unavailable;

  // setters for named parameter idiom
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__unavailable(
    const bool & _arg)
  {
    this->unavailable = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float ANGLE_MAX =
    359.9875;
  static constexpr float ANGLE_MIN =
    0.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::Angle_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::Angle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::Angle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::Angle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::Angle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::Angle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::Angle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::Angle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::Angle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::Angle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__Angle
    std::shared_ptr<carma_v2x_msgs::msg::Angle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__Angle
    std::shared_ptr<carma_v2x_msgs::msg::Angle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Angle_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    if (this->unavailable != other.unavailable) {
      return false;
    }
    return true;
  }
  bool operator!=(const Angle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Angle_

// alias to use template instance with default allocator
using Angle =
  carma_v2x_msgs::msg::Angle_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float Angle_<ContainerAllocator>::ANGLE_MAX;
template<typename ContainerAllocator>
constexpr float Angle_<ContainerAllocator>::ANGLE_MIN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_HPP_
