// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/trailer_history_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pivot_angle'
#include "carma_v2x_msgs/msg/detail/angle__traits.hpp"
// Member 'time_offset'
#include "carma_v2x_msgs/msg/detail/time_offset__traits.hpp"
// Member 'position_offset'
#include "carma_v2x_msgs/msg/detail/node_xy24b__traits.hpp"
// Member 'elevation_offset'
#include "carma_v2x_msgs/msg/detail/vert_offset_b07__traits.hpp"
// Member 'heading'
#include "carma_v2x_msgs/msg/detail/coarse_heading__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::TrailerHistoryPoint>()
{
  return "carma_v2x_msgs::msg::TrailerHistoryPoint";
}

template<>
inline const char * name<carma_v2x_msgs::msg::TrailerHistoryPoint>()
{
  return "carma_v2x_msgs/msg/TrailerHistoryPoint";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::TrailerHistoryPoint>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::Angle>::value && has_fixed_size<carma_v2x_msgs::msg::CoarseHeading>::value && has_fixed_size<carma_v2x_msgs::msg::NodeXY24b>::value && has_fixed_size<carma_v2x_msgs::msg::TimeOffset>::value && has_fixed_size<carma_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::TrailerHistoryPoint>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::Angle>::value && has_bounded_size<carma_v2x_msgs::msg::CoarseHeading>::value && has_bounded_size<carma_v2x_msgs::msg::NodeXY24b>::value && has_bounded_size<carma_v2x_msgs::msg::TimeOffset>::value && has_bounded_size<carma_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::TrailerHistoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__TRAITS_HPP_
