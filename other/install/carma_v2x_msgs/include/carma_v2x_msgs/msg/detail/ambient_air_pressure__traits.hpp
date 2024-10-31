// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/AmbientAirPressure.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/ambient_air_pressure__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::AmbientAirPressure>()
{
  return "carma_v2x_msgs::msg::AmbientAirPressure";
}

template<>
inline const char * name<carma_v2x_msgs::msg::AmbientAirPressure>()
{
  return "carma_v2x_msgs/msg/AmbientAirPressure";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::AmbientAirPressure>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::AmbientAirPressure>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_v2x_msgs::msg::AmbientAirPressure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__TRAITS_HPP_
