// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'lane_following_maneuver'
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__struct.hpp"
// Member 'lane_change_maneuver'
#include "carma_planning_msgs/msg/detail/lane_change_maneuver__struct.hpp"
// Member 'intersection_transit_straight_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_straight_maneuver__struct.hpp"
// Member 'intersection_transit_left_turn_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_left_turn_maneuver__struct.hpp"
// Member 'intersection_transit_right_turn_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__struct.hpp"
// Member 'stop_and_wait_maneuver'
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__Maneuver __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__Maneuver __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Maneuver_
{
  using Type = Maneuver_<ContainerAllocator>;

  explicit Maneuver_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_following_maneuver(_init),
    lane_change_maneuver(_init),
    intersection_transit_straight_maneuver(_init),
    intersection_transit_left_turn_maneuver(_init),
    intersection_transit_right_turn_maneuver(_init),
    stop_and_wait_maneuver(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit Maneuver_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_following_maneuver(_alloc, _init),
    lane_change_maneuver(_alloc, _init),
    intersection_transit_straight_maneuver(_alloc, _init),
    intersection_transit_left_turn_maneuver(_alloc, _init),
    intersection_transit_right_turn_maneuver(_alloc, _init),
    stop_and_wait_maneuver(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _lane_following_maneuver_type =
    carma_planning_msgs::msg::LaneFollowingManeuver_<ContainerAllocator>;
  _lane_following_maneuver_type lane_following_maneuver;
  using _lane_change_maneuver_type =
    carma_planning_msgs::msg::LaneChangeManeuver_<ContainerAllocator>;
  _lane_change_maneuver_type lane_change_maneuver;
  using _intersection_transit_straight_maneuver_type =
    carma_planning_msgs::msg::IntersectionTransitStraightManeuver_<ContainerAllocator>;
  _intersection_transit_straight_maneuver_type intersection_transit_straight_maneuver;
  using _intersection_transit_left_turn_maneuver_type =
    carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator>;
  _intersection_transit_left_turn_maneuver_type intersection_transit_left_turn_maneuver;
  using _intersection_transit_right_turn_maneuver_type =
    carma_planning_msgs::msg::IntersectionTransitRightTurnManeuver_<ContainerAllocator>;
  _intersection_transit_right_turn_maneuver_type intersection_transit_right_turn_maneuver;
  using _stop_and_wait_maneuver_type =
    carma_planning_msgs::msg::StopAndWaitManeuver_<ContainerAllocator>;
  _stop_and_wait_maneuver_type stop_and_wait_maneuver;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__lane_following_maneuver(
    const carma_planning_msgs::msg::LaneFollowingManeuver_<ContainerAllocator> & _arg)
  {
    this->lane_following_maneuver = _arg;
    return *this;
  }
  Type & set__lane_change_maneuver(
    const carma_planning_msgs::msg::LaneChangeManeuver_<ContainerAllocator> & _arg)
  {
    this->lane_change_maneuver = _arg;
    return *this;
  }
  Type & set__intersection_transit_straight_maneuver(
    const carma_planning_msgs::msg::IntersectionTransitStraightManeuver_<ContainerAllocator> & _arg)
  {
    this->intersection_transit_straight_maneuver = _arg;
    return *this;
  }
  Type & set__intersection_transit_left_turn_maneuver(
    const carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator> & _arg)
  {
    this->intersection_transit_left_turn_maneuver = _arg;
    return *this;
  }
  Type & set__intersection_transit_right_turn_maneuver(
    const carma_planning_msgs::msg::IntersectionTransitRightTurnManeuver_<ContainerAllocator> & _arg)
  {
    this->intersection_transit_right_turn_maneuver = _arg;
    return *this;
  }
  Type & set__stop_and_wait_maneuver(
    const carma_planning_msgs::msg::StopAndWaitManeuver_<ContainerAllocator> & _arg)
  {
    this->stop_and_wait_maneuver = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LANE_FOLLOWING =
    0u;
  static constexpr uint8_t LANE_CHANGE =
    1u;
  static constexpr uint8_t INTERSECTION_TRANSIT_STRAIGHT =
    2u;
  static constexpr uint8_t INTERSECTION_TRANSIT_LEFT_TURN =
    3u;
  static constexpr uint8_t INTERSECTION_TRANSIT_RIGHT_TURN =
    4u;
  static constexpr uint8_t STOP_AND_WAIT =
    5u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::Maneuver_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::Maneuver_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::Maneuver_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::Maneuver_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::Maneuver_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::Maneuver_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::Maneuver_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::Maneuver_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::Maneuver_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::Maneuver_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__Maneuver
    std::shared_ptr<carma_planning_msgs::msg::Maneuver_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__Maneuver
    std::shared_ptr<carma_planning_msgs::msg::Maneuver_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Maneuver_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->lane_following_maneuver != other.lane_following_maneuver) {
      return false;
    }
    if (this->lane_change_maneuver != other.lane_change_maneuver) {
      return false;
    }
    if (this->intersection_transit_straight_maneuver != other.intersection_transit_straight_maneuver) {
      return false;
    }
    if (this->intersection_transit_left_turn_maneuver != other.intersection_transit_left_turn_maneuver) {
      return false;
    }
    if (this->intersection_transit_right_turn_maneuver != other.intersection_transit_right_turn_maneuver) {
      return false;
    }
    if (this->stop_and_wait_maneuver != other.stop_and_wait_maneuver) {
      return false;
    }
    return true;
  }
  bool operator!=(const Maneuver_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Maneuver_

// alias to use template instance with default allocator
using Maneuver =
  carma_planning_msgs::msg::Maneuver_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::LANE_FOLLOWING;
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::LANE_CHANGE;
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::INTERSECTION_TRANSIT_STRAIGHT;
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::INTERSECTION_TRANSIT_LEFT_TURN;
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::INTERSECTION_TRANSIT_RIGHT_TURN;
template<typename ContainerAllocator>
constexpr uint8_t Maneuver_<ContainerAllocator>::STOP_AND_WAIT;

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__STRUCT_HPP_
