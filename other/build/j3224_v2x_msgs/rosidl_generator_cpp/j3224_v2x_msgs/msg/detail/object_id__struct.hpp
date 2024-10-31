// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/ObjectID.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__ObjectID __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__ObjectID __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectID_
{
  using Type = ObjectID_<ContainerAllocator>;

  explicit ObjectID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0;
    }
  }

  explicit ObjectID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0;
    }
  }

  // field types and members
  using _object_id_type =
    uint16_t;
  _object_id_type object_id;

  // setters for named parameter idiom
  Type & set__object_id(
    const uint16_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MIN_OBJECT_ID =
    0u;
  static constexpr uint16_t MAX_OBJECT_ID =
    65535u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__ObjectID
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__ObjectID
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectID_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectID_

// alias to use template instance with default allocator
using ObjectID =
  j3224_v2x_msgs::msg::ObjectID_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t ObjectID_<ContainerAllocator>::MIN_OBJECT_ID;
template<typename ContainerAllocator>
constexpr uint16_t ObjectID_<ContainerAllocator>::MAX_OBJECT_ID;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__STRUCT_HPP_
