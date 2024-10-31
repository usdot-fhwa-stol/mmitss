// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.hpp"
// Member 'ref_point'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.hpp"
// Member 'speed_limits'
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__struct.hpp"
// Member 'lane_list'
#include "carma_v2x_msgs/msg/detail/generic_lane__struct.hpp"
// Member 'preempt_priority_list'
#include "j2735_v2x_msgs/msg/detail/signal_control_zone__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__IntersectionGeometry __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__IntersectionGeometry __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionGeometry_
{
  using Type = IntersectionGeometry_<ContainerAllocator>;

  explicit IntersectionGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    ref_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->name_exists = false;
      this->revision = 0;
      this->lane_width = 0.0f;
      this->lane_width_exists = false;
      this->speed_limits_exists = false;
      this->preempt_priority_data_exists = false;
    }
  }

  explicit IntersectionGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc, _init),
    ref_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->name_exists = false;
      this->revision = 0;
      this->lane_width = 0.0f;
      this->lane_width_exists = false;
      this->speed_limits_exists = false;
      this->preempt_priority_data_exists = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _name_exists_type =
    bool;
  _name_exists_type name_exists;
  using _id_type =
    j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>;
  _id_type id;
  using _revision_type =
    uint8_t;
  _revision_type revision;
  using _ref_point_type =
    carma_v2x_msgs::msg::Position3D_<ContainerAllocator>;
  _ref_point_type ref_point;
  using _lane_width_type =
    float;
  _lane_width_type lane_width;
  using _lane_width_exists_type =
    bool;
  _lane_width_exists_type lane_width_exists;
  using _speed_limits_type =
    std::vector<carma_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>::other>;
  _speed_limits_type speed_limits;
  using _speed_limits_exists_type =
    bool;
  _speed_limits_exists_type speed_limits_exists;
  using _lane_list_type =
    std::vector<carma_v2x_msgs::msg::GenericLane_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::GenericLane_<ContainerAllocator>>::other>;
  _lane_list_type lane_list;
  using _preempt_priority_list_type =
    std::vector<j2735_v2x_msgs::msg::SignalControlZone_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::SignalControlZone_<ContainerAllocator>>::other>;
  _preempt_priority_list_type preempt_priority_list;
  using _preempt_priority_data_exists_type =
    bool;
  _preempt_priority_data_exists_type preempt_priority_data_exists;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__name_exists(
    const bool & _arg)
  {
    this->name_exists = _arg;
    return *this;
  }
  Type & set__id(
    const j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__revision(
    const uint8_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }
  Type & set__ref_point(
    const carma_v2x_msgs::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->ref_point = _arg;
    return *this;
  }
  Type & set__lane_width(
    const float & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__lane_width_exists(
    const bool & _arg)
  {
    this->lane_width_exists = _arg;
    return *this;
  }
  Type & set__speed_limits(
    const std::vector<carma_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>::other> & _arg)
  {
    this->speed_limits = _arg;
    return *this;
  }
  Type & set__speed_limits_exists(
    const bool & _arg)
  {
    this->speed_limits_exists = _arg;
    return *this;
  }
  Type & set__lane_list(
    const std::vector<carma_v2x_msgs::msg::GenericLane_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::GenericLane_<ContainerAllocator>>::other> & _arg)
  {
    this->lane_list = _arg;
    return *this;
  }
  Type & set__preempt_priority_list(
    const std::vector<j2735_v2x_msgs::msg::SignalControlZone_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::SignalControlZone_<ContainerAllocator>>::other> & _arg)
  {
    this->preempt_priority_list = _arg;
    return *this;
  }
  Type & set__preempt_priority_data_exists(
    const bool & _arg)
  {
    this->preempt_priority_data_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__IntersectionGeometry
    std::shared_ptr<carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__IntersectionGeometry
    std::shared_ptr<carma_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionGeometry_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->name_exists != other.name_exists) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->ref_point != other.ref_point) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->lane_width_exists != other.lane_width_exists) {
      return false;
    }
    if (this->speed_limits != other.speed_limits) {
      return false;
    }
    if (this->speed_limits_exists != other.speed_limits_exists) {
      return false;
    }
    if (this->lane_list != other.lane_list) {
      return false;
    }
    if (this->preempt_priority_list != other.preempt_priority_list) {
      return false;
    }
    if (this->preempt_priority_data_exists != other.preempt_priority_data_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionGeometry_

// alias to use template instance with default allocator
using IntersectionGeometry =
  carma_v2x_msgs::msg::IntersectionGeometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_
