// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TemporaryID.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TemporaryID __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TemporaryID __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TemporaryID_
{
  using Type = TemporaryID_<ContainerAllocator>;

  explicit TemporaryID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TemporaryID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _id_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ID_TIME_MAX =
    3000u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TemporaryID
    std::shared_ptr<j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TemporaryID
    std::shared_ptr<j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TemporaryID_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TemporaryID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TemporaryID_

// alias to use template instance with default allocator
using TemporaryID =
  j2735_v2x_msgs::msg::TemporaryID_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t TemporaryID_<ContainerAllocator>::ID_TIME_MAX;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TEMPORARY_ID__STRUCT_HPP_
