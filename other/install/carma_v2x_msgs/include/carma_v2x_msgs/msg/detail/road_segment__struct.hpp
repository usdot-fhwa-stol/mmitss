// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__struct.hpp"
// Member 'ref_point'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.hpp"
// Member 'speed_limits'
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__struct.hpp"
// Member 'road_lane_set_list'
#include "carma_v2x_msgs/msg/detail/generic_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__RoadSegment __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__RoadSegment __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadSegment_
{
  using Type = RoadSegment_<ContainerAllocator>;

  explicit RoadSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    }
  }

  explicit RoadSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator>;
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
  using _road_lane_set_list_type =
    std::vector<carma_v2x_msgs::msg::GenericLane_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::GenericLane_<ContainerAllocator>>::other>;
  _road_lane_set_list_type road_lane_set_list;

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
    const j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator> & _arg)
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
  Type & set__road_lane_set_list(
    const std::vector<carma_v2x_msgs::msg::GenericLane_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::GenericLane_<ContainerAllocator>>::other> & _arg)
  {
    this->road_lane_set_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__RoadSegment
    std::shared_ptr<carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__RoadSegment
    std::shared_ptr<carma_v2x_msgs::msg::RoadSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadSegment_ & other) const
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
    if (this->road_lane_set_list != other.road_lane_set_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadSegment_

// alias to use template instance with default allocator
using RoadSegment =
  carma_v2x_msgs::msg::RoadSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_
