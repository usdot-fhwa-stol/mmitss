// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/transmission_and_speed__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__traits.hpp"
// Member 'speed'
#include "carma_v2x_msgs/msg/detail/velocity__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::TransmissionAndSpeed>()
{
  return "carma_v2x_msgs::msg::TransmissionAndSpeed";
}

template<>
inline const char * name<carma_v2x_msgs::msg::TransmissionAndSpeed>()
{
  return "carma_v2x_msgs/msg/TransmissionAndSpeed";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::TransmissionAndSpeed>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::Velocity>::value && has_fixed_size<j2735_v2x_msgs::msg::TransmissionState>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::TransmissionAndSpeed>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::Velocity>::value && has_bounded_size<j2735_v2x_msgs::msg::TransmissionState>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::TransmissionAndSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__TRAITS_HPP_
