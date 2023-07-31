// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/NodeXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'delta'
#include "carma_v2x_msgs/msg/detail/node_offset_point_xy__struct.hpp"
// Member 'attributes'
#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__NodeXY __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__NodeXY __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeXY_
{
  using Type = NodeXY_<ContainerAllocator>;

  explicit NodeXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delta(_init),
    attributes(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attributes_exists = false;
    }
  }

  explicit NodeXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delta(_alloc, _init),
    attributes(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attributes_exists = false;
    }
  }

  // field types and members
  using _delta_type =
    carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>;
  _delta_type delta;
  using _attributes_type =
    carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator>;
  _attributes_type attributes;
  using _attributes_exists_type =
    bool;
  _attributes_exists_type attributes_exists;

  // setters for named parameter idiom
  Type & set__delta(
    const carma_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> & _arg)
  {
    this->delta = _arg;
    return *this;
  }
  Type & set__attributes(
    const carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator> & _arg)
  {
    this->attributes = _arg;
    return *this;
  }
  Type & set__attributes_exists(
    const bool & _arg)
  {
    this->attributes_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::NodeXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::NodeXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeXY
    std::shared_ptr<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeXY
    std::shared_ptr<carma_v2x_msgs::msg::NodeXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeXY_ & other) const
  {
    if (this->delta != other.delta) {
      return false;
    }
    if (this->attributes != other.attributes) {
      return false;
    }
    if (this->attributes_exists != other.attributes_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeXY_

// alias to use template instance with default allocator
using NodeXY =
  carma_v2x_msgs::msg::NodeXY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY__STRUCT_HPP_
