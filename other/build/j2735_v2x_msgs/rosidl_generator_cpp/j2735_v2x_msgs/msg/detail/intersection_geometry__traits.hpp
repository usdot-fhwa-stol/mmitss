// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/intersection_geometry__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__traits.hpp"
// Member 'ref_point'
#include "j2735_v2x_msgs/msg/detail/position3_d__traits.hpp"
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__traits.hpp"
// Member 'lane_set'
#include "j2735_v2x_msgs/msg/detail/lane_list__traits.hpp"
// Member 'preempt_priority_data'
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::IntersectionGeometry>()
{
  return "j2735_v2x_msgs::msg::IntersectionGeometry";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::IntersectionGeometry>()
{
  return "j2735_v2x_msgs/msg/IntersectionGeometry";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::IntersectionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::IntersectionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::IntersectionGeometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_
