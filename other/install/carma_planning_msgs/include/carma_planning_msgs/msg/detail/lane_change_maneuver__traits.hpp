// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:msg/LaneChangeManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_MANEUVER__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_MANEUVER__TRAITS_HPP_

#include "carma_planning_msgs/msg/detail/lane_change_maneuver__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'parameters'
#include "carma_planning_msgs/msg/detail/maneuver_parameters__traits.hpp"
// Member 'start_time'
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::msg::LaneChangeManeuver>()
{
  return "carma_planning_msgs::msg::LaneChangeManeuver";
}

template<>
inline const char * name<carma_planning_msgs::msg::LaneChangeManeuver>()
{
  return "carma_planning_msgs/msg/LaneChangeManeuver";
}

template<>
struct has_fixed_size<carma_planning_msgs::msg::LaneChangeManeuver>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_planning_msgs::msg::LaneChangeManeuver>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_planning_msgs::msg::LaneChangeManeuver>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_MANEUVER__TRAITS_HPP_
