// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/special_vehicle_extensions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'vehicle_alerts'
#include "j2735_v2x_msgs/msg/detail/emergency_details__traits.hpp"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/event_description__traits.hpp"
// Member 'trailers'
#include "carma_v2x_msgs/msg/detail/trailer_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::SpecialVehicleExtensions>()
{
  return "carma_v2x_msgs::msg::SpecialVehicleExtensions";
}

template<>
inline const char * name<carma_v2x_msgs::msg::SpecialVehicleExtensions>()
{
  return "carma_v2x_msgs/msg/SpecialVehicleExtensions";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::SpecialVehicleExtensions>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::TrailerData>::value && has_fixed_size<j2735_v2x_msgs::msg::EmergencyDetails>::value && has_fixed_size<j2735_v2x_msgs::msg::EventDescription>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::SpecialVehicleExtensions>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::TrailerData>::value && has_bounded_size<j2735_v2x_msgs::msg::EmergencyDetails>::value && has_bounded_size<j2735_v2x_msgs::msg::EventDescription>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::SpecialVehicleExtensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__TRAITS_HPP_
