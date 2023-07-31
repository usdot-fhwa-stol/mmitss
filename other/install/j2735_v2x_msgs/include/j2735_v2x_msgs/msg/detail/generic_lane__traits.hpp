// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/generic_lane__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'lane_attributes'
#include "j2735_v2x_msgs/msg/detail/lane_attributes__traits.hpp"
// Member 'maneuvers'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__traits.hpp"
// Member 'node_list'
#include "j2735_v2x_msgs/msg/detail/node_list_xy__traits.hpp"
// Member 'connects_to'
#include "j2735_v2x_msgs/msg/detail/connects_to_list__traits.hpp"
// Member 'overlay_lane_list'
#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::GenericLane>()
{
  return "j2735_v2x_msgs::msg::GenericLane";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::GenericLane>()
{
  return "j2735_v2x_msgs/msg/GenericLane";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::GenericLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
