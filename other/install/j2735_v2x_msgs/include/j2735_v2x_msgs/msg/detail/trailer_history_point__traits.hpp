// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/trailer_history_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pivot_angle'
#include "j2735_v2x_msgs/msg/detail/angle__traits.hpp"
// Member 'time_offset'
#include "j2735_v2x_msgs/msg/detail/time_offset__traits.hpp"
// Member 'position_offset'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__traits.hpp"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/coarse_heading__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrailerHistoryPoint>()
{
  return "j2735_v2x_msgs::msg::TrailerHistoryPoint";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrailerHistoryPoint>()
{
  return "j2735_v2x_msgs/msg/TrailerHistoryPoint";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrailerHistoryPoint>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::Angle>::value && has_fixed_size<j2735_v2x_msgs::msg::CoarseHeading>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_fixed_size<j2735_v2x_msgs::msg::TimeOffset>::value && has_fixed_size<j2735_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrailerHistoryPoint>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::Angle>::value && has_bounded_size<j2735_v2x_msgs::msg::CoarseHeading>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_bounded_size<j2735_v2x_msgs::msg::TimeOffset>::value && has_bounded_size<j2735_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrailerHistoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_
