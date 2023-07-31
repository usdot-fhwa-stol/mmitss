// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/AngularVelocityConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pitch_rate_confidence'
#include "j3224_v2x_msgs/msg/detail/pitch_rate_confidence__traits.hpp"
// Member 'roll_rate_confidence'
#include "j3224_v2x_msgs/msg/detail/roll_rate_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::AngularVelocityConfidence>()
{
  return "j3224_v2x_msgs::msg::AngularVelocityConfidence";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::AngularVelocityConfidence>()
{
  return "j3224_v2x_msgs/msg/AngularVelocityConfidence";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::AngularVelocityConfidence>
  : std::integral_constant<bool, has_fixed_size<j3224_v2x_msgs::msg::PitchRateConfidence>::value && has_fixed_size<j3224_v2x_msgs::msg::RollRateConfidence>::value> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::AngularVelocityConfidence>
  : std::integral_constant<bool, has_bounded_size<j3224_v2x_msgs::msg::PitchRateConfidence>::value && has_bounded_size<j3224_v2x_msgs::msg::RollRateConfidence>::value> {};

template<>
struct is_message<j3224_v2x_msgs::msg::AngularVelocityConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_CONFIDENCE__TRAITS_HPP_
