// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/movement_event__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'event_state'
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__traits.hpp"
// Member 'timing'
#include "carma_v2x_msgs/msg/detail/time_change_details__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::MovementEvent>()
{
  return "carma_v2x_msgs::msg::MovementEvent";
}

template<>
inline const char * name<carma_v2x_msgs::msg::MovementEvent>()
{
  return "carma_v2x_msgs/msg/MovementEvent";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::MovementEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::MovementEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_v2x_msgs::msg::MovementEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_
