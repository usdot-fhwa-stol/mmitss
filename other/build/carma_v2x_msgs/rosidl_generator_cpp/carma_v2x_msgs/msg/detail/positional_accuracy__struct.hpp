// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__PositionalAccuracy __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__PositionalAccuracy __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionalAccuracy_
{
  using Type = PositionalAccuracy_<ContainerAllocator>;

  explicit PositionalAccuracy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->semi_major = 0.0f;
      this->semi_minor = 0.0f;
      this->orientation = 0.0;
    }
  }

  explicit PositionalAccuracy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->semi_major = 0.0f;
      this->semi_minor = 0.0f;
      this->orientation = 0.0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _semi_major_type =
    float;
  _semi_major_type semi_major;
  using _semi_minor_type =
    float;
  _semi_minor_type semi_minor;
  using _orientation_type =
    double;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__semi_major(
    const float & _arg)
  {
    this->semi_major = _arg;
    return *this;
  }
  Type & set__semi_minor(
    const float & _arg)
  {
    this->semi_minor = _arg;
    return *this;
  }
  Type & set__orientation(
    const double & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ACCURACY_AVAILABLE =
    1u;
  static constexpr uint16_t ACCURACY_ORIENTATION_AVAILABLE =
    2u;
  static constexpr float ACCURACY_MAX =
    12.7;
  static constexpr float ACCURACY_MIN =
    0.0;
  static constexpr double ACCURACY_ORIENTATION_MAX =
    359.9945078786;
  static constexpr double ACCURACY_ORIENTATION_MIN =
    0.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__PositionalAccuracy
    std::shared_ptr<carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__PositionalAccuracy
    std::shared_ptr<carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionalAccuracy_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->semi_major != other.semi_major) {
      return false;
    }
    if (this->semi_minor != other.semi_minor) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionalAccuracy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionalAccuracy_

// alias to use template instance with default allocator
using PositionalAccuracy =
  carma_v2x_msgs::msg::PositionalAccuracy_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t PositionalAccuracy_<ContainerAllocator>::ACCURACY_AVAILABLE;
template<typename ContainerAllocator>
constexpr uint16_t PositionalAccuracy_<ContainerAllocator>::ACCURACY_ORIENTATION_AVAILABLE;
template<typename ContainerAllocator>
constexpr float PositionalAccuracy_<ContainerAllocator>::ACCURACY_MAX;
template<typename ContainerAllocator>
constexpr float PositionalAccuracy_<ContainerAllocator>::ACCURACY_MIN;
template<typename ContainerAllocator>
constexpr double PositionalAccuracy_<ContainerAllocator>::ACCURACY_ORIENTATION_MAX;
template<typename ContainerAllocator>
constexpr double PositionalAccuracy_<ContainerAllocator>::ACCURACY_ORIENTATION_MIN;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_HPP_
