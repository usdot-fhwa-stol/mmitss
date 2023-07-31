// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/VertOffsetB07.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__VertOffsetB07 __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__VertOffsetB07 __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VertOffsetB07_
{
  using Type = VertOffsetB07_<ContainerAllocator>;

  explicit VertOffsetB07_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0.0f;
      this->unavailable = false;
    }
  }

  explicit VertOffsetB07_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0.0f;
      this->unavailable = false;
    }
  }

  // field types and members
  using _offset_type =
    float;
  _offset_type offset;
  using _unavailable_type =
    bool;
  _unavailable_type unavailable;

  // setters for named parameter idiom
  Type & set__offset(
    const float & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__unavailable(
    const bool & _arg)
  {
    this->unavailable = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float OFFSET_MIN =
    -6.3;
  static constexpr float OFFSET_MAX =
    6.3;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__VertOffsetB07
    std::shared_ptr<carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__VertOffsetB07
    std::shared_ptr<carma_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VertOffsetB07_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    if (this->unavailable != other.unavailable) {
      return false;
    }
    return true;
  }
  bool operator!=(const VertOffsetB07_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VertOffsetB07_

// alias to use template instance with default allocator
using VertOffsetB07 =
  carma_v2x_msgs::msg::VertOffsetB07_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float VertOffsetB07_<ContainerAllocator>::OFFSET_MIN;
template<typename ContainerAllocator>
constexpr float VertOffsetB07_<ContainerAllocator>::OFFSET_MAX;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_HPP_
