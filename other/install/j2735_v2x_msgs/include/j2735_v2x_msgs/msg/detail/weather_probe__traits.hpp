// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/weather_probe__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'air_temp'
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__traits.hpp"
// Member 'air_pressure'
#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__traits.hpp"
// Member 'rain_rates'
#include "j2735_v2x_msgs/msg/detail/wiper_set__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::WeatherProbe>()
{
  return "j2735_v2x_msgs::msg::WeatherProbe";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::WeatherProbe>()
{
  return "j2735_v2x_msgs/msg/WeatherProbe";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::WeatherProbe>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AmbientAirPressure>::value && has_fixed_size<j2735_v2x_msgs::msg::AmbientAirTemperature>::value && has_fixed_size<j2735_v2x_msgs::msg::WiperSet>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::WeatherProbe>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AmbientAirPressure>::value && has_bounded_size<j2735_v2x_msgs::msg::AmbientAirTemperature>::value && has_bounded_size<j2735_v2x_msgs::msg::WiperSet>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::WeatherProbe>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__TRAITS_HPP_
