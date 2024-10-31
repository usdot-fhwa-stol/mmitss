// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/RegulatorySpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'type'
#include "j2735_v2x_msgs/msg/detail/speed_limit_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::RegulatorySpeedLimit>()
{
  return "carma_v2x_msgs::msg::RegulatorySpeedLimit";
}

template<>
inline const char * name<carma_v2x_msgs::msg::RegulatorySpeedLimit>()
{
  return "carma_v2x_msgs/msg/RegulatorySpeedLimit";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::RegulatorySpeedLimit>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::SpeedLimitType>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::RegulatorySpeedLimit>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::SpeedLimitType>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::RegulatorySpeedLimit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__TRAITS_HPP_
