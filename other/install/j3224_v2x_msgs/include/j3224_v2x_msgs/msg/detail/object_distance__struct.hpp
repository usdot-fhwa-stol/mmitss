// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__ObjectDistance __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__ObjectDistance __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDistance_
{
  using Type = ObjectDistance_<ContainerAllocator>;

  explicit ObjectDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_distance = 0;
    }
  }

  explicit ObjectDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_distance = 0;
    }
  }

  // field types and members
  using _object_distance_type =
    int16_t;
  _object_distance_type object_distance;

  // setters for named parameter idiom
  Type & set__object_distance(
    const int16_t & _arg)
  {
    this->object_distance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t MIN_OBJECT_DISTANCE =
    -32767;
  static constexpr int16_t MAX_OBJECT_DISTANCE =
    32767;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__ObjectDistance
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__ObjectDistance
    std::shared_ptr<j3224_v2x_msgs::msg::ObjectDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDistance_ & other) const
  {
    if (this->object_distance != other.object_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDistance_

// alias to use template instance with default allocator
using ObjectDistance =
  j3224_v2x_msgs::msg::ObjectDistance_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int16_t ObjectDistance_<ContainerAllocator>::MIN_OBJECT_DISTANCE;
template<typename ContainerAllocator>
constexpr int16_t ObjectDistance_<ContainerAllocator>::MAX_OBJECT_DISTANCE;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_
