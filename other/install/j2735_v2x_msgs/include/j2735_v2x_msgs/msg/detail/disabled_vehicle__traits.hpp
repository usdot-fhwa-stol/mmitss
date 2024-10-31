// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'status_details'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__traits.hpp"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::DisabledVehicle>()
{
  return "j2735_v2x_msgs::msg::DisabledVehicle";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::DisabledVehicle>()
{
  return "j2735_v2x_msgs/msg/DisabledVehicle";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::DisabledVehicle>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ITISGenericLocations>::value && has_fixed_size<j2735_v2x_msgs::msg::ITIScodes>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::DisabledVehicle>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ITISGenericLocations>::value && has_bounded_size<j2735_v2x_msgs::msg::ITIScodes>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::DisabledVehicle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__TRAITS_HPP_
