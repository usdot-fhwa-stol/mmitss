// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__traits.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__traits.hpp"
// Member 'throttle'
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>()
{
  return "j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>()
{
  return "j2735_v2x_msgs/msg/SpeedandHeadingandThrottleConfidence";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::HeadingConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::SpeedConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::ThrottleConfidence>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::HeadingConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::SpeedConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::ThrottleConfidence>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__TRAITS_HPP_
