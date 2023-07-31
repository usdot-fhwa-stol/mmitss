// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/movement_event__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'event_state'
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__traits.hpp"
// Member 'timing'
#include "j2735_v2x_msgs/msg/detail/time_change_details__traits.hpp"
// Member 'speeds'
#include "j2735_v2x_msgs/msg/detail/advisory_speed_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::MovementEvent>()
{
  return "j2735_v2x_msgs::msg::MovementEvent";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::MovementEvent>()
{
  return "j2735_v2x_msgs/msg/MovementEvent";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::MovementEvent>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AdvisorySpeedList>::value && has_fixed_size<j2735_v2x_msgs::msg::MovementPhaseState>::value && has_fixed_size<j2735_v2x_msgs::msg::TimeChangeDetails>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::MovementEvent>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AdvisorySpeedList>::value && has_bounded_size<j2735_v2x_msgs::msg::MovementPhaseState>::value && has_bounded_size<j2735_v2x_msgs::msg::TimeChangeDetails>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::MovementEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_
