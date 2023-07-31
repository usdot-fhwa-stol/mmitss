// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/emergency_details__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'siren_use'
#include "j2735_v2x_msgs/msg/detail/siren_in_use__traits.hpp"
// Member 'lights_use'
#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__traits.hpp"
// Member 'multi'
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__traits.hpp"
// Member 'events'
#include "j2735_v2x_msgs/msg/detail/privileged_events__traits.hpp"
// Member 'response_type'
#include "j2735_v2x_msgs/msg/detail/response_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::EmergencyDetails>()
{
  return "j2735_v2x_msgs::msg::EmergencyDetails";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::EmergencyDetails>()
{
  return "j2735_v2x_msgs/msg/EmergencyDetails";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::EmergencyDetails>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::LightbarInUse>::value && has_fixed_size<j2735_v2x_msgs::msg::MultiVehicleResponse>::value && has_fixed_size<j2735_v2x_msgs::msg::PrivilegedEvents>::value && has_fixed_size<j2735_v2x_msgs::msg::ResponseType>::value && has_fixed_size<j2735_v2x_msgs::msg::SirenInUse>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::EmergencyDetails>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::LightbarInUse>::value && has_bounded_size<j2735_v2x_msgs::msg::MultiVehicleResponse>::value && has_bounded_size<j2735_v2x_msgs::msg::PrivilegedEvents>::value && has_bounded_size<j2735_v2x_msgs::msg::ResponseType>::value && has_bounded_size<j2735_v2x_msgs::msg::SirenInUse>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::EmergencyDetails>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_
