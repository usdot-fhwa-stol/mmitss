// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/PivotPointDescription.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pivot_offset'
#include "carma_v2x_msgs/msg/detail/offset_b11__struct.hpp"
// Member 'pivot_angle'
#include "carma_v2x_msgs/msg/detail/angle__struct.hpp"
// Member 'pivots'
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__PivotPointDescription __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__PivotPointDescription __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PivotPointDescription_
{
  using Type = PivotPointDescription_<ContainerAllocator>;

  explicit PivotPointDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pivot_offset(_init),
    pivot_angle(_init),
    pivots(_init)
  {
    (void)_init;
  }

  explicit PivotPointDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pivot_offset(_alloc, _init),
    pivot_angle(_alloc, _init),
    pivots(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pivot_offset_type =
    carma_v2x_msgs::msg::OffsetB11_<ContainerAllocator>;
  _pivot_offset_type pivot_offset;
  using _pivot_angle_type =
    carma_v2x_msgs::msg::Angle_<ContainerAllocator>;
  _pivot_angle_type pivot_angle;
  using _pivots_type =
    j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator>;
  _pivots_type pivots;

  // setters for named parameter idiom
  Type & set__pivot_offset(
    const carma_v2x_msgs::msg::OffsetB11_<ContainerAllocator> & _arg)
  {
    this->pivot_offset = _arg;
    return *this;
  }
  Type & set__pivot_angle(
    const carma_v2x_msgs::msg::Angle_<ContainerAllocator> & _arg)
  {
    this->pivot_angle = _arg;
    return *this;
  }
  Type & set__pivots(
    const j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator> & _arg)
  {
    this->pivots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__PivotPointDescription
    std::shared_ptr<carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__PivotPointDescription
    std::shared_ptr<carma_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PivotPointDescription_ & other) const
  {
    if (this->pivot_offset != other.pivot_offset) {
      return false;
    }
    if (this->pivot_angle != other.pivot_angle) {
      return false;
    }
    if (this->pivots != other.pivots) {
      return false;
    }
    return true;
  }
  bool operator!=(const PivotPointDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PivotPointDescription_

// alias to use template instance with default allocator
using PivotPointDescription =
  carma_v2x_msgs::msg::PivotPointDescription_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_HPP_
