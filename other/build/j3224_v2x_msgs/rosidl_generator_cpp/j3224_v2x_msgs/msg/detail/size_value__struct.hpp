// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/SizeValue.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__SizeValue __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__SizeValue __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SizeValue_
{
  using Type = SizeValue_<ContainerAllocator>;

  explicit SizeValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_value = 0;
    }
  }

  explicit SizeValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_value = 0;
    }
  }

  // field types and members
  using _size_value_type =
    uint16_t;
  _size_value_type size_value;

  // setters for named parameter idiom
  Type & set__size_value(
    const uint16_t & _arg)
  {
    this->size_value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MIN_SIZE_VALUE =
    0u;
  static constexpr uint16_t MAX_SIZE_VALUE =
    1023u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__SizeValue
    std::shared_ptr<j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__SizeValue
    std::shared_ptr<j3224_v2x_msgs::msg::SizeValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SizeValue_ & other) const
  {
    if (this->size_value != other.size_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SizeValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SizeValue_

// alias to use template instance with default allocator
using SizeValue =
  j3224_v2x_msgs::msg::SizeValue_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t SizeValue_<ContainerAllocator>::MIN_SIZE_VALUE;
template<typename ContainerAllocator>
constexpr uint16_t SizeValue_<ContainerAllocator>::MAX_SIZE_VALUE;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__SIZE_VALUE__STRUCT_HPP_
