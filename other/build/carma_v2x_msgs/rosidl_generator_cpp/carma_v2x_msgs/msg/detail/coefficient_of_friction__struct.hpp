// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/CoefficientOfFriction.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__CoefficientOfFriction __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__CoefficientOfFriction __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CoefficientOfFriction_
{
  using Type = CoefficientOfFriction_<ContainerAllocator>;

  explicit CoefficientOfFriction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coefficient = 0.0f;
      this->unavailable = false;
    }
  }

  explicit CoefficientOfFriction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coefficient = 0.0f;
      this->unavailable = false;
    }
  }

  // field types and members
  using _coefficient_type =
    float;
  _coefficient_type coefficient;
  using _unavailable_type =
    bool;
  _unavailable_type unavailable;

  // setters for named parameter idiom
  Type & set__coefficient(
    const float & _arg)
  {
    this->coefficient = _arg;
    return *this;
  }
  Type & set__unavailable(
    const bool & _arg)
  {
    this->unavailable = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float COEFFICIENT_MIN =
    0.0;
  static constexpr float COEFFICIENT_MAX =
    1.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__CoefficientOfFriction
    std::shared_ptr<carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__CoefficientOfFriction
    std::shared_ptr<carma_v2x_msgs::msg::CoefficientOfFriction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoefficientOfFriction_ & other) const
  {
    if (this->coefficient != other.coefficient) {
      return false;
    }
    if (this->unavailable != other.unavailable) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoefficientOfFriction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoefficientOfFriction_

// alias to use template instance with default allocator
using CoefficientOfFriction =
  carma_v2x_msgs::msg::CoefficientOfFriction_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float CoefficientOfFriction_<ContainerAllocator>::COEFFICIENT_MIN;
template<typename ContainerAllocator>
constexpr float CoefficientOfFriction_<ContainerAllocator>::COEFFICIENT_MAX;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__STRUCT_HPP_
