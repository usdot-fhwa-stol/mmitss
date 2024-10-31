// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/AngularVelocity.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/angular_velocity__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pitch_rate'
#include "j3224_v2x_msgs/msg/detail/pitch_rate__traits.hpp"
// Member 'roll_rate'
#include "j3224_v2x_msgs/msg/detail/roll_rate__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::AngularVelocity>()
{
  return "j3224_v2x_msgs::msg::AngularVelocity";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::AngularVelocity>()
{
  return "j3224_v2x_msgs/msg/AngularVelocity";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::AngularVelocity>
  : std::integral_constant<bool, has_fixed_size<j3224_v2x_msgs::msg::PitchRate>::value && has_fixed_size<j3224_v2x_msgs::msg::RollRate>::value> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::AngularVelocity>
  : std::integral_constant<bool, has_bounded_size<j3224_v2x_msgs::msg::PitchRate>::value && has_bounded_size<j3224_v2x_msgs::msg::RollRate>::value> {};

template<>
struct is_message<j3224_v2x_msgs::msg::AngularVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__ANGULAR_VELOCITY__TRAITS_HPP_
