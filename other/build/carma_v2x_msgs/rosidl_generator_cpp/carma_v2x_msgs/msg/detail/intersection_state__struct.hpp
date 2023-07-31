// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_

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
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__struct.hpp"
// Member 'movement_list'
#include "carma_v2x_msgs/msg/detail/movement_state__struct.hpp"
// Member 'connection_maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__IntersectionState __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__IntersectionState __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionState_
{
  using Type = IntersectionState_<ContainerAllocator>;

  explicit IntersectionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->name_exists = false;
      this->revision = 0;
      this->moy = 0ul;
      this->moy_exists = false;
      this->time_stamp = 0.0f;
      this->time_stamp_exists = false;
      this->enabled_lanes_exists = false;
      this->maneuever_assist_list_exists = false;
    }
  }

  explicit IntersectionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->name_exists = false;
      this->revision = 0;
      this->moy = 0ul;
      this->moy_exists = false;
      this->time_stamp = 0.0f;
      this->time_stamp_exists = false;
      this->enabled_lanes_exists = false;
      this->maneuever_assist_list_exists = false;
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
  using _status_type =
    j2735_v2x_msgs::msg::IntersectionStatusObject_<ContainerAllocator>;
  _status_type status;
  using _moy_type =
    uint32_t;
  _moy_type moy;
  using _moy_exists_type =
    bool;
  _moy_exists_type moy_exists;
  using _time_stamp_type =
    float;
  _time_stamp_type time_stamp;
  using _time_stamp_exists_type =
    bool;
  _time_stamp_exists_type time_stamp_exists;
  using _lane_id_list_type =
    std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other>;
  _lane_id_list_type lane_id_list;
  using _enabled_lanes_exists_type =
    bool;
  _enabled_lanes_exists_type enabled_lanes_exists;
  using _movement_list_type =
    std::vector<carma_v2x_msgs::msg::MovementState_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::MovementState_<ContainerAllocator>>::other>;
  _movement_list_type movement_list;
  using _connection_maneuver_assist_list_type =
    std::vector<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>::other>;
  _connection_maneuver_assist_list_type connection_maneuver_assist_list;
  using _maneuever_assist_list_exists_type =
    bool;
  _maneuever_assist_list_exists_type maneuever_assist_list_exists;

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
  Type & set__status(
    const j2735_v2x_msgs::msg::IntersectionStatusObject_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__moy(
    const uint32_t & _arg)
  {
    this->moy = _arg;
    return *this;
  }
  Type & set__moy_exists(
    const bool & _arg)
  {
    this->moy_exists = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const float & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__time_stamp_exists(
    const bool & _arg)
  {
    this->time_stamp_exists = _arg;
    return *this;
  }
  Type & set__lane_id_list(
    const std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other> & _arg)
  {
    this->lane_id_list = _arg;
    return *this;
  }
  Type & set__enabled_lanes_exists(
    const bool & _arg)
  {
    this->enabled_lanes_exists = _arg;
    return *this;
  }
  Type & set__movement_list(
    const std::vector<carma_v2x_msgs::msg::MovementState_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::MovementState_<ContainerAllocator>>::other> & _arg)
  {
    this->movement_list = _arg;
    return *this;
  }
  Type & set__connection_maneuver_assist_list(
    const std::vector<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>, typename ContainerAllocator::template rebind<j2735_v2x_msgs::msg::ConnectionManeuverAssist_<ContainerAllocator>>::other> & _arg)
  {
    this->connection_maneuver_assist_list = _arg;
    return *this;
  }
  Type & set__maneuever_assist_list_exists(
    const bool & _arg)
  {
    this->maneuever_assist_list_exists = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MOY_INVALID =
    527040u;
  static constexpr float TIME_STAMP_UNAVAILABLE =
    65.535;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__IntersectionState
    std::shared_ptr<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__IntersectionState
    std::shared_ptr<carma_v2x_msgs::msg::IntersectionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionState_ & other) const
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
    if (this->status != other.status) {
      return false;
    }
    if (this->moy != other.moy) {
      return false;
    }
    if (this->moy_exists != other.moy_exists) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->time_stamp_exists != other.time_stamp_exists) {
      return false;
    }
    if (this->lane_id_list != other.lane_id_list) {
      return false;
    }
    if (this->enabled_lanes_exists != other.enabled_lanes_exists) {
      return false;
    }
    if (this->movement_list != other.movement_list) {
      return false;
    }
    if (this->connection_maneuver_assist_list != other.connection_maneuver_assist_list) {
      return false;
    }
    if (this->maneuever_assist_list_exists != other.maneuever_assist_list_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionState_

// alias to use template instance with default allocator
using IntersectionState =
  carma_v2x_msgs::msg::IntersectionState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t IntersectionState_<ContainerAllocator>::MOY_INVALID;
template<typename ContainerAllocator>
constexpr float IntersectionState_<ContainerAllocator>::TIME_STAMP_UNAVAILABLE;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_
