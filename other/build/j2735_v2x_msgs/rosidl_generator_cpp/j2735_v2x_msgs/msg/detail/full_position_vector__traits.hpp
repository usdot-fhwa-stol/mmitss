// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/full_position_vector__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'utc_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__traits.hpp"
// Member 'lon'
#include "j2735_v2x_msgs/msg/detail/longitude__traits.hpp"
// Member 'lat'
#include "j2735_v2x_msgs/msg/detail/latitude__traits.hpp"
// Member 'elevation'
#include "j2735_v2x_msgs/msg/detail/elevation__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__traits.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__traits.hpp"
// Member 'pos_accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'time_confidence'
#include "j2735_v2x_msgs/msg/detail/time_confidence__traits.hpp"
// Member 'pos_confidence'
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__traits.hpp"
// Member 'speed_confidence'
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::FullPositionVector>()
{
  return "j2735_v2x_msgs::msg::FullPositionVector";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::FullPositionVector>()
{
  return "j2735_v2x_msgs/msg/FullPositionVector";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::FullPositionVector>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::DDateTime>::value && has_fixed_size<j2735_v2x_msgs::msg::Elevation>::value && has_fixed_size<j2735_v2x_msgs::msg::Heading>::value && has_fixed_size<j2735_v2x_msgs::msg::Latitude>::value && has_fixed_size<j2735_v2x_msgs::msg::Longitude>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionConfidenceSet>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_fixed_size<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::TimeConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::TransmissionAndSpeed>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::FullPositionVector>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::DDateTime>::value && has_bounded_size<j2735_v2x_msgs::msg::Elevation>::value && has_bounded_size<j2735_v2x_msgs::msg::Heading>::value && has_bounded_size<j2735_v2x_msgs::msg::Latitude>::value && has_bounded_size<j2735_v2x_msgs::msg::Longitude>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionConfidenceSet>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_bounded_size<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::TimeConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::TransmissionAndSpeed>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::FullPositionVector>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__TRAITS_HPP_
