// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/ObstacleDirection.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'direction'
#include "carma_v2x_msgs/msg/detail/angle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__ObstacleDirection __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__ObstacleDirection __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleDirection_
{
  using Type = ObstacleDirection_<ContainerAllocator>;

  explicit ObstacleDirection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_init)
  {
    (void)_init;
  }

  explicit ObstacleDirection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _direction_type =
    carma_v2x_msgs::msg::Angle_<ContainerAllocator>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__direction(
    const carma_v2x_msgs::msg::Angle_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__ObstacleDirection
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__ObstacleDirection
    std::shared_ptr<carma_v2x_msgs::msg::ObstacleDirection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleDirection_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleDirection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleDirection_

// alias to use template instance with default allocator
using ObstacleDirection =
  carma_v2x_msgs::msg::ObstacleDirection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__STRUCT_HPP_
