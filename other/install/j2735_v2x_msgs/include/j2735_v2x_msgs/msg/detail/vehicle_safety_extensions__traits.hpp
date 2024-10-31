// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'events'
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__traits.hpp"
// Member 'path_history'
#include "j2735_v2x_msgs/msg/detail/path_history__traits.hpp"
// Member 'path_prediction'
#include "j2735_v2x_msgs/msg/detail/path_prediction__traits.hpp"
// Member 'lights'
#include "j2735_v2x_msgs/msg/detail/exterior_lights__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::VehicleSafetyExtensions>()
{
  return "j2735_v2x_msgs::msg::VehicleSafetyExtensions";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::VehicleSafetyExtensions>()
{
  return "j2735_v2x_msgs/msg/VehicleSafetyExtensions";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::VehicleSafetyExtensions>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ExteriorLights>::value && has_fixed_size<j2735_v2x_msgs::msg::PathHistory>::value && has_fixed_size<j2735_v2x_msgs::msg::PathPrediction>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleEventFlags>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::VehicleSafetyExtensions>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ExteriorLights>::value && has_bounded_size<j2735_v2x_msgs::msg::PathHistory>::value && has_bounded_size<j2735_v2x_msgs::msg::PathPrediction>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleEventFlags>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::VehicleSafetyExtensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_
