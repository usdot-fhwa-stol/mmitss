// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'offset_x_axis'
// Member 'offset_y_axis'
#include "carma_v2x_msgs/msg/detail/offset_axis__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__ComputedLane __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__ComputedLane __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ComputedLane_
{
  using Type = ComputedLane_<ContainerAllocator>;

  explicit ComputedLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset_x_axis(_init),
    offset_y_axis(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_lane_id = 0;
      this->rotate_xy = 0.0f;
      this->rotatexy_exists = false;
      this->scale_x_axis = 0;
      this->scale_x_axis_exists = false;
      this->scale_y_axis = 0;
      this->scale_y_axis_exists = false;
    }
  }

  explicit ComputedLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offset_x_axis(_alloc, _init),
    offset_y_axis(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reference_lane_id = 0;
      this->rotate_xy = 0.0f;
      this->rotatexy_exists = false;
      this->scale_x_axis = 0;
      this->scale_x_axis_exists = false;
      this->scale_y_axis = 0;
      this->scale_y_axis_exists = false;
    }
  }

  // field types and members
  using _reference_lane_id_type =
    uint16_t;
  _reference_lane_id_type reference_lane_id;
  using _offset_x_axis_type =
    carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator>;
  _offset_x_axis_type offset_x_axis;
  using _offset_y_axis_type =
    carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator>;
  _offset_y_axis_type offset_y_axis;
  using _rotate_xy_type =
    float;
  _rotate_xy_type rotate_xy;
  using _rotatexy_exists_type =
    bool;
  _rotatexy_exists_type rotatexy_exists;
  using _scale_x_axis_type =
    int16_t;
  _scale_x_axis_type scale_x_axis;
  using _scale_x_axis_exists_type =
    bool;
  _scale_x_axis_exists_type scale_x_axis_exists;
  using _scale_y_axis_type =
    int16_t;
  _scale_y_axis_type scale_y_axis;
  using _scale_y_axis_exists_type =
    bool;
  _scale_y_axis_exists_type scale_y_axis_exists;

  // setters for named parameter idiom
  Type & set__reference_lane_id(
    const uint16_t & _arg)
  {
    this->reference_lane_id = _arg;
    return *this;
  }
  Type & set__offset_x_axis(
    const carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator> & _arg)
  {
    this->offset_x_axis = _arg;
    return *this;
  }
  Type & set__offset_y_axis(
    const carma_v2x_msgs::msg::OffsetAxis_<ContainerAllocator> & _arg)
  {
    this->offset_y_axis = _arg;
    return *this;
  }
  Type & set__rotate_xy(
    const float & _arg)
  {
    this->rotate_xy = _arg;
    return *this;
  }
  Type & set__rotatexy_exists(
    const bool & _arg)
  {
    this->rotatexy_exists = _arg;
    return *this;
  }
  Type & set__scale_x_axis(
    const int16_t & _arg)
  {
    this->scale_x_axis = _arg;
    return *this;
  }
  Type & set__scale_x_axis_exists(
    const bool & _arg)
  {
    this->scale_x_axis_exists = _arg;
    return *this;
  }
  Type & set__scale_y_axis(
    const int16_t & _arg)
  {
    this->scale_y_axis = _arg;
    return *this;
  }
  Type & set__scale_y_axis_exists(
    const bool & _arg)
  {
    this->scale_y_axis_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__ComputedLane
    std::shared_ptr<carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__ComputedLane
    std::shared_ptr<carma_v2x_msgs::msg::ComputedLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputedLane_ & other) const
  {
    if (this->reference_lane_id != other.reference_lane_id) {
      return false;
    }
    if (this->offset_x_axis != other.offset_x_axis) {
      return false;
    }
    if (this->offset_y_axis != other.offset_y_axis) {
      return false;
    }
    if (this->rotate_xy != other.rotate_xy) {
      return false;
    }
    if (this->rotatexy_exists != other.rotatexy_exists) {
      return false;
    }
    if (this->scale_x_axis != other.scale_x_axis) {
      return false;
    }
    if (this->scale_x_axis_exists != other.scale_x_axis_exists) {
      return false;
    }
    if (this->scale_y_axis != other.scale_y_axis) {
      return false;
    }
    if (this->scale_y_axis_exists != other.scale_y_axis_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputedLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputedLane_

// alias to use template instance with default allocator
using ComputedLane =
  carma_v2x_msgs::msg::ComputedLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_HPP_
