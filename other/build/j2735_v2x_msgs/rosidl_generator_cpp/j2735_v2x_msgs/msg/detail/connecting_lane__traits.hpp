// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/connecting_lane__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'maneuver'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::ConnectingLane>()
{
  return "j2735_v2x_msgs::msg::ConnectingLane";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::ConnectingLane>()
{
  return "j2735_v2x_msgs/msg/ConnectingLane";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::ConnectingLane>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AllowedManeuvers>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::ConnectingLane>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AllowedManeuvers>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::ConnectingLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__TRAITS_HPP_
