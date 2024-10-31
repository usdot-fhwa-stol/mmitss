// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/weather_report__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'is_raining'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__traits.hpp"
// Member 'rain_rate'
#include "carma_v2x_msgs/msg/detail/ntcip_ess_precip_rate__traits.hpp"
// Member 'precip_situation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__traits.hpp"
// Member 'solar_radiation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__traits.hpp"
// Member 'friction'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__traits.hpp"
// Member 'road_friction'
#include "carma_v2x_msgs/msg/detail/coefficient_of_friction__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::WeatherReport>()
{
  return "carma_v2x_msgs::msg::WeatherReport";
}

template<>
inline const char * name<carma_v2x_msgs::msg::WeatherReport>()
{
  return "carma_v2x_msgs/msg/WeatherReport";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::WeatherReport>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::CoefficientOfFriction>::value && has_fixed_size<carma_v2x_msgs::msg::NTCIPEssPrecipRate>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssMobileFriction>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo>::value && has_fixed_size<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::WeatherReport>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::CoefficientOfFriction>::value && has_bounded_size<carma_v2x_msgs::msg::NTCIPEssPrecipRate>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssMobileFriction>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssPrecipSituation>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo>::value && has_bounded_size<j2735_v2x_msgs::msg::NTCIPEssSolarRadiation>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::WeatherReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__TRAITS_HPP_
