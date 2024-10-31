// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_bounds__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'oldest'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'offsets'
#include "carma_v2x_msgs/msg/detail/offset_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::TrafficControlBounds>()
{
  return "carma_v2x_msgs::msg::TrafficControlBounds";
}

template<>
inline const char * name<carma_v2x_msgs::msg::TrafficControlBounds>()
{
  return "carma_v2x_msgs/msg/TrafficControlBounds";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::TrafficControlBounds>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<carma_v2x_msgs::msg::OffsetPoint>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::TrafficControlBounds>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<carma_v2x_msgs::msg::OffsetPoint>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::TrafficControlBounds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__TRAITS_HPP_
