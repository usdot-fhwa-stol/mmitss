// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/MobilityResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/mobility_response__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'm_header'
#include "carma_v2x_msgs/msg/detail/mobility_header__traits.hpp"
// Member 'plan_type'
#include "carma_v2x_msgs/msg/detail/plan_type__traits.hpp"
// Member 'reason'
#include "carma_v2x_msgs/msg/detail/mobility_reason__traits.hpp"
// Member 'repeat'
#include "carma_v2x_msgs/msg/detail/mobility_repeat__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::MobilityResponse>()
{
  return "carma_v2x_msgs::msg::MobilityResponse";
}

template<>
inline const char * name<carma_v2x_msgs::msg::MobilityResponse>()
{
  return "carma_v2x_msgs/msg/MobilityResponse";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::MobilityResponse>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::MobilityHeader>::value && has_fixed_size<carma_v2x_msgs::msg::MobilityReason>::value && has_fixed_size<carma_v2x_msgs::msg::MobilityRepeat>::value && has_fixed_size<carma_v2x_msgs::msg::PlanType>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::MobilityResponse>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::MobilityHeader>::value && has_bounded_size<carma_v2x_msgs::msg::MobilityReason>::value && has_bounded_size<carma_v2x_msgs::msg::MobilityRepeat>::value && has_bounded_size<carma_v2x_msgs::msg::PlanType>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::MobilityResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__TRAITS_HPP_
