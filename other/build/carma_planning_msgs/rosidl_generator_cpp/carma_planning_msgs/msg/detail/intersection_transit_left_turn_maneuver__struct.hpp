// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/IntersectionTransitLeftTurnManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'parameters'
#include "carma_planning_msgs/msg/detail/maneuver_parameters__struct.hpp"
// Member 'start_time'
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionTransitLeftTurnManeuver_
{
  using Type = IntersectionTransitLeftTurnManeuver_<ContainerAllocator>;

  explicit IntersectionTransitLeftTurnManeuver_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parameters(_init),
    start_time(_init),
    end_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_dist = 0.0;
      this->start_speed = 0.0;
      this->end_dist = 0.0;
      this->end_speed = 0.0;
      this->starting_lane_id = "";
      this->ending_lane_id = "";
    }
  }

  explicit IntersectionTransitLeftTurnManeuver_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parameters(_alloc, _init),
    start_time(_alloc, _init),
    end_time(_alloc, _init),
    starting_lane_id(_alloc),
    ending_lane_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_dist = 0.0;
      this->start_speed = 0.0;
      this->end_dist = 0.0;
      this->end_speed = 0.0;
      this->starting_lane_id = "";
      this->ending_lane_id = "";
    }
  }

  // field types and members
  using _parameters_type =
    carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator>;
  _parameters_type parameters;
  using _start_dist_type =
    double;
  _start_dist_type start_dist;
  using _start_speed_type =
    double;
  _start_speed_type start_speed;
  using _start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_time_type start_time;
  using _end_dist_type =
    double;
  _end_dist_type end_dist;
  using _end_speed_type =
    double;
  _end_speed_type end_speed;
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _starting_lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _starting_lane_id_type starting_lane_id;
  using _ending_lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _ending_lane_id_type ending_lane_id;

  // setters for named parameter idiom
  Type & set__parameters(
    const carma_planning_msgs::msg::ManeuverParameters_<ContainerAllocator> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }
  Type & set__start_dist(
    const double & _arg)
  {
    this->start_dist = _arg;
    return *this;
  }
  Type & set__start_speed(
    const double & _arg)
  {
    this->start_speed = _arg;
    return *this;
  }
  Type & set__start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__end_dist(
    const double & _arg)
  {
    this->end_dist = _arg;
    return *this;
  }
  Type & set__end_speed(
    const double & _arg)
  {
    this->end_speed = _arg;
    return *this;
  }
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__starting_lane_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->starting_lane_id = _arg;
    return *this;
  }
  Type & set__ending_lane_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->ending_lane_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver
    std::shared_ptr<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver
    std::shared_ptr<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionTransitLeftTurnManeuver_ & other) const
  {
    if (this->parameters != other.parameters) {
      return false;
    }
    if (this->start_dist != other.start_dist) {
      return false;
    }
    if (this->start_speed != other.start_speed) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->end_dist != other.end_dist) {
      return false;
    }
    if (this->end_speed != other.end_speed) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->starting_lane_id != other.starting_lane_id) {
      return false;
    }
    if (this->ending_lane_id != other.ending_lane_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionTransitLeftTurnManeuver_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionTransitLeftTurnManeuver_

// alias to use template instance with default allocator
using IntersectionTransitLeftTurnManeuver =
  carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__STRUCT_HPP_
