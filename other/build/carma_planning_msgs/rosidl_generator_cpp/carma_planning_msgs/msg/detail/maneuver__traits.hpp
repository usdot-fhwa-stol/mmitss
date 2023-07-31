// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__TRAITS_HPP_

#include "carma_planning_msgs/msg/detail/maneuver__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'lane_following_maneuver'
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__traits.hpp"
// Member 'lane_change_maneuver'
#include "carma_planning_msgs/msg/detail/lane_change_maneuver__traits.hpp"
// Member 'intersection_transit_straight_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_straight_maneuver__traits.hpp"
// Member 'intersection_transit_left_turn_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_left_turn_maneuver__traits.hpp"
// Member 'intersection_transit_right_turn_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__traits.hpp"
// Member 'stop_and_wait_maneuver'
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::msg::Maneuver>()
{
  return "carma_planning_msgs::msg::Maneuver";
}

template<>
inline const char * name<carma_planning_msgs::msg::Maneuver>()
{
  return "carma_planning_msgs/msg/Maneuver";
}

template<>
struct has_fixed_size<carma_planning_msgs::msg::Maneuver>
  : std::integral_constant<bool, has_fixed_size<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver>::value && has_fixed_size<carma_planning_msgs::msg::IntersectionTransitRightTurnManeuver>::value && has_fixed_size<carma_planning_msgs::msg::IntersectionTransitStraightManeuver>::value && has_fixed_size<carma_planning_msgs::msg::LaneChangeManeuver>::value && has_fixed_size<carma_planning_msgs::msg::LaneFollowingManeuver>::value && has_fixed_size<carma_planning_msgs::msg::StopAndWaitManeuver>::value> {};

template<>
struct has_bounded_size<carma_planning_msgs::msg::Maneuver>
  : std::integral_constant<bool, has_bounded_size<carma_planning_msgs::msg::IntersectionTransitLeftTurnManeuver>::value && has_bounded_size<carma_planning_msgs::msg::IntersectionTransitRightTurnManeuver>::value && has_bounded_size<carma_planning_msgs::msg::IntersectionTransitStraightManeuver>::value && has_bounded_size<carma_planning_msgs::msg::LaneChangeManeuver>::value && has_bounded_size<carma_planning_msgs::msg::LaneFollowingManeuver>::value && has_bounded_size<carma_planning_msgs::msg::StopAndWaitManeuver>::value> {};

template<>
struct is_message<carma_planning_msgs::msg::Maneuver>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__TRAITS_HPP_
