// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/position_confidence_set__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pos'
#include "j2735_v2x_msgs/msg/detail/position_confidence__traits.hpp"
// Member 'elevation'
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PositionConfidenceSet>()
{
  return "j2735_v2x_msgs::msg::PositionConfidenceSet";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PositionConfidenceSet>()
{
  return "j2735_v2x_msgs/msg/PositionConfidenceSet";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PositionConfidenceSet>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ElevationConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionConfidence>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PositionConfidenceSet>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ElevationConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionConfidence>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PositionConfidenceSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__TRAITS_HPP_
