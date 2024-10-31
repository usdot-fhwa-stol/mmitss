// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/NodeXY24b.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'x'
// Member 'y'
#include "carma_v2x_msgs/msg/detail/offset_b12__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__NodeXY24b __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__NodeXY24b __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeXY24b_
{
  using Type = NodeXY24b_<ContainerAllocator>;

  explicit NodeXY24b_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_init),
    y(_init)
  {
    (void)_init;
  }

  explicit NodeXY24b_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc, _init),
    y(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _x_type =
    carma_v2x_msgs::msg::OffsetB12_<ContainerAllocator>;
  _x_type x;
  using _y_type =
    carma_v2x_msgs::msg::OffsetB12_<ContainerAllocator>;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const carma_v2x_msgs::msg::OffsetB12_<ContainerAllocator> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const carma_v2x_msgs::msg::OffsetB12_<ContainerAllocator> & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeXY24b
    std::shared_ptr<carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeXY24b
    std::shared_ptr<carma_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeXY24b_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeXY24b_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeXY24b_

// alias to use template instance with default allocator
using NodeXY24b =
  carma_v2x_msgs::msg::NodeXY24b_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__STRUCT_HPP_
