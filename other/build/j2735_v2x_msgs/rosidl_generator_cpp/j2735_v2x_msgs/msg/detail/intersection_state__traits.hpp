// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/intersection_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__traits.hpp"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__traits.hpp"
// Member 'enabled_lanes'
#include "j2735_v2x_msgs/msg/detail/enabled_lane_list__traits.hpp"
// Member 'states'
#include "j2735_v2x_msgs/msg/detail/movement_list__traits.hpp"
// Member 'maneuever_assist_list'
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::IntersectionState>()
{
  return "j2735_v2x_msgs::msg::IntersectionState";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::IntersectionState>()
{
  return "j2735_v2x_msgs/msg/IntersectionState";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::IntersectionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::IntersectionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::IntersectionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_
