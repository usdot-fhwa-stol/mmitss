// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/ObjectType.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_TYPE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_TYPE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__ObjectType __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__ObjectType __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectType_
{
  using Type = ObjectType_<ContainerAllocator>;

  explicit ObjectType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_type = 0;
    }
  }

  explicit ObjectType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_type = 0;
    }
  }

  // field types and members
  using _object_type_type =
    uint8_t;
  _object_type_type object_type;

  // setters for named parameter idiom
  Type & set__object_type(
    const uint8_t & _arg)
  {
    this->object_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t VEHICLE =
    1u;
  static constexpr uint8_t VRU =
    2u;
  static constexpr uint8_t ANIMAL =
    3u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__ObjectType
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__ObjectType
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectType_ & other) const
  {
    if (this->object_type != other.object_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectType_

// alias to use template instance with default allocator
using ObjectType =
  j3224_v2x_msgs::msg::ObjectType_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ObjectType_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ObjectType_<ContainerAllocator>::VEHICLE;
template<typename ContainerAllocator>
constexpr uint8_t ObjectType_<ContainerAllocator>::VRU;
template<typename ContainerAllocator>
constexpr uint8_t ObjectType_<ContainerAllocator>::ANIMAL;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_TYPE__STRUCT_HPP_
