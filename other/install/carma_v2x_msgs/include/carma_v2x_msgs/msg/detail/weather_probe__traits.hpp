// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/weather_probe__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'air_temp'
#include "carma_v2x_msgs/msg/detail/ambient_air_temperature__traits.hpp"
// Member 'air_pressure'
#include "carma_v2x_msgs/msg/detail/ambient_air_pressure__traits.hpp"
// Member 'rain_rates'
#include "carma_v2x_msgs/msg/detail/wiper_set__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::WeatherProbe>()
{
  return "carma_v2x_msgs::msg::WeatherProbe";
}

template<>
inline const char * name<carma_v2x_msgs::msg::WeatherProbe>()
{
  return "carma_v2x_msgs/msg/WeatherProbe";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::WeatherProbe>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::AmbientAirPressure>::value && has_fixed_size<carma_v2x_msgs::msg::AmbientAirTemperature>::value && has_fixed_size<carma_v2x_msgs::msg::WiperSet>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::WeatherProbe>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::AmbientAirPressure>::value && has_bounded_size<carma_v2x_msgs::msg::AmbientAirTemperature>::value && has_bounded_size<carma_v2x_msgs::msg::WiperSet>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::WeatherProbe>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_
