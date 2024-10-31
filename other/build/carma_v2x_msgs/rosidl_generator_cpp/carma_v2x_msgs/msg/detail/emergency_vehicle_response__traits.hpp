// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/EmergencyVehicleResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/emergency_vehicle_response__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'm_header'
#include "carma_v2x_msgs/msg/detail/mobility_header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::EmergencyVehicleResponse>()
{
  return "carma_v2x_msgs::msg::EmergencyVehicleResponse";
}

template<>
inline const char * name<carma_v2x_msgs::msg::EmergencyVehicleResponse>()
{
  return "carma_v2x_msgs/msg/EmergencyVehicleResponse";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::EmergencyVehicleResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::EmergencyVehicleResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_v2x_msgs::msg::EmergencyVehicleResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__TRAITS_HPP_
