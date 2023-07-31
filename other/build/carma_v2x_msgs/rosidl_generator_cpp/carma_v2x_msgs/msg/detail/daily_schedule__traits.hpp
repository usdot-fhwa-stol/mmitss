// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/DailySchedule.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/daily_schedule__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'begin'
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::DailySchedule>()
{
  return "carma_v2x_msgs::msg::DailySchedule";
}

template<>
inline const char * name<carma_v2x_msgs::msg::DailySchedule>()
{
  return "carma_v2x_msgs/msg/DailySchedule";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::DailySchedule>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::DailySchedule>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::DailySchedule>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__TRAITS_HPP_
