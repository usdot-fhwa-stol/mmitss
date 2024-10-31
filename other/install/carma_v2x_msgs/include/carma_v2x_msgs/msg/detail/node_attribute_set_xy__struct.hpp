// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'local_node'
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__struct.hpp"
// Member 'disabled'
// Member 'enabled'
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__struct.hpp"
// Member 'lane_attribute_list'
#include "carma_v2x_msgs/msg/detail/lane_data_attribute__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__NodeAttributeSetXY __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__NodeAttributeSetXY __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeAttributeSetXY_
{
  using Type = NodeAttributeSetXY_<ContainerAllocator>;

  explicit NodeAttributeSetXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_node_exists = false;
      this->disabled_exists = false;
      this->enabled_exists = false;
      this->data_exists = false;
      this->d_width = 0.0f;
      this->d_width_exists = false;
      this->d_elevation = 0.0f;
      this->d_elevation_exists = false;
    }
  }

  explicit NodeAttributeSetXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_node_exists = false;
      this->disabled_exists = false;
      this->enabled_exists = false;
      this->data_exists = false;
      this->d_width = 0.0f;
      this->d_width_exists = false;
      this->d_elevation = 0.0f;
      this->d_elevation_exists = false;
    }
  }

  // field types and members
  using _local_node_type =
    std::vector<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>::other>;
  _local_node_type local_node;
  using _local_node_exists_type =
    bool;
  _local_node_exists_type local_node_exists;
  using _disabled_type =
    std::vector<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>::other>;
  _disabled_type disabled;
  using _disabled_exists_type =
    bool;
  _disabled_exists_type disabled_exists;
  using _enabled_type =
    std::vector<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>::other>;
  _enabled_type enabled;
  using _enabled_exists_type =
    bool;
  _enabled_exists_type enabled_exists;
  using _lane_attribute_list_type =
    std::vector<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>::other>;
  _lane_attribute_list_type lane_attribute_list;
  using _data_exists_type =
    bool;
  _data_exists_type data_exists;
  using _d_width_type =
    float;
  _d_width_type d_width;
  using _d_width_exists_type =
    bool;
  _d_width_exists_type d_width_exists;
  using _d_elevation_type =
    float;
  _d_elevation_type d_elevation;
  using _d_elevation_exists_type =
    bool;
  _d_elevation_exists_type d_elevation_exists;

  // setters for named parameter idiom
  Type & set__local_node(
    const std::vector<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>::other> & _arg)
  {
    this->local_node = _arg;
    return *this;
  }
  Type & set__local_node_exists(
    const bool & _arg)
  {
    this->local_node_exists = _arg;
    return *this;
  }
  Type & set__disabled(
    const std::vector<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>::other> & _arg)
  {
    this->disabled = _arg;
    return *this;
  }
  Type & set__disabled_exists(
    const bool & _arg)
  {
    this->disabled_exists = _arg;
    return *this;
  }
  Type & set__enabled(
    const std::vector<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>::other> & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__enabled_exists(
    const bool & _arg)
  {
    this->enabled_exists = _arg;
    return *this;
  }
  Type & set__lane_attribute_list(
    const std::vector<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>::other> & _arg)
  {
    this->lane_attribute_list = _arg;
    return *this;
  }
  Type & set__data_exists(
    const bool & _arg)
  {
    this->data_exists = _arg;
    return *this;
  }
  Type & set__d_width(
    const float & _arg)
  {
    this->d_width = _arg;
    return *this;
  }
  Type & set__d_width_exists(
    const bool & _arg)
  {
    this->d_width_exists = _arg;
    return *this;
  }
  Type & set__d_elevation(
    const float & _arg)
  {
    this->d_elevation = _arg;
    return *this;
  }
  Type & set__d_elevation_exists(
    const bool & _arg)
  {
    this->d_elevation_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeAttributeSetXY
    std::shared_ptr<carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__NodeAttributeSetXY
    std::shared_ptr<carma_v2x_msgs::msg::NodeAttributeSetXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeAttributeSetXY_ & other) const
  {
    if (this->local_node != other.local_node) {
      return false;
    }
    if (this->local_node_exists != other.local_node_exists) {
      return false;
    }
    if (this->disabled != other.disabled) {
      return false;
    }
    if (this->disabled_exists != other.disabled_exists) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->enabled_exists != other.enabled_exists) {
      return false;
    }
    if (this->lane_attribute_list != other.lane_attribute_list) {
      return false;
    }
    if (this->data_exists != other.data_exists) {
      return false;
    }
    if (this->d_width != other.d_width) {
      return false;
    }
    if (this->d_width_exists != other.d_width_exists) {
      return false;
    }
    if (this->d_elevation != other.d_elevation) {
      return false;
    }
    if (this->d_elevation_exists != other.d_elevation_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeAttributeSetXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeAttributeSetXY_

// alias to use template instance with default allocator
using NodeAttributeSetXY =
  carma_v2x_msgs::msg::NodeAttributeSetXY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_HPP_
