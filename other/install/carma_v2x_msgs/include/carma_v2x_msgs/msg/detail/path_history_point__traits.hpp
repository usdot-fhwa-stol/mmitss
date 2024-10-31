// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/path_history_point__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'lat_offset'
// Member 'lon_offset'
#include "carma_v2x_msgs/msg/detail/offset_llb18__traits.hpp"
// Member 'elevation_offset'
#include "carma_v2x_msgs/msg/detail/vert_offset_b12__traits.hpp"
// Member 'time_offset'
#include "carma_v2x_msgs/msg/detail/time_offset__traits.hpp"
// Member 'speed'
#include "carma_v2x_msgs/msg/detail/speed__traits.hpp"
// Member 'pos_accuracy'
#include "carma_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'heading'
#include "carma_v2x_msgs/msg/detail/coarse_heading__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::PathHistoryPoint>()
{
  return "carma_v2x_msgs::msg::PathHistoryPoint";
}

template<>
inline const char * name<carma_v2x_msgs::msg::PathHistoryPoint>()
{
  return "carma_v2x_msgs/msg/PathHistoryPoint";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::PathHistoryPoint>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::CoarseHeading>::value && has_fixed_size<carma_v2x_msgs::msg::OffsetLLB18>::value && has_fixed_size<carma_v2x_msgs::msg::PositionalAccuracy>::value && has_fixed_size<carma_v2x_msgs::msg::Speed>::value && has_fixed_size<carma_v2x_msgs::msg::TimeOffset>::value && has_fixed_size<carma_v2x_msgs::msg::VertOffsetB12>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::PathHistoryPoint>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::CoarseHeading>::value && has_bounded_size<carma_v2x_msgs::msg::OffsetLLB18>::value && has_bounded_size<carma_v2x_msgs::msg::PositionalAccuracy>::value && has_bounded_size<carma_v2x_msgs::msg::Speed>::value && has_bounded_size<carma_v2x_msgs::msg::TimeOffset>::value && has_bounded_size<carma_v2x_msgs::msg::VertOffsetB12>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::PathHistoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_
