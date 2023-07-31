// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/AttitudeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/attitude_confidence__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pitch_confidence'
// Member 'roll_confidence'
// Member 'yaw_confidence'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::AttitudeConfidence>()
{
  return "j3224_v2x_msgs::msg::AttitudeConfidence";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::AttitudeConfidence>()
{
  return "j3224_v2x_msgs/msg/AttitudeConfidence";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::AttitudeConfidence>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::HeadingConfidence>::value> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::AttitudeConfidence>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::HeadingConfidence>::value> {};

template<>
struct is_message<j3224_v2x_msgs::msg::AttitudeConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ATTITUDE_CONFIDENCE__TRAITS_HPP_
