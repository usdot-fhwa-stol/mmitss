// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'classification'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__traits.hpp"
// Member 'class_details'
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__traits.hpp"
// Member 'vehicle_data'
#include "j2735_v2x_msgs/msg/detail/vehicle_data__traits.hpp"
// Member 'weather_report'
#include "j2735_v2x_msgs/msg/detail/weather_report__traits.hpp"
// Member 'weather_probe'
#include "j2735_v2x_msgs/msg/detail/weather_probe__traits.hpp"
// Member 'obstacle'
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__traits.hpp"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__traits.hpp"
// Member 'the_rtcm'
#include "j2735_v2x_msgs/msg/detail/rtcm_package__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>()
{
  return "j2735_v2x_msgs::msg::SupplementalVehicleExtensions";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>()
{
  return "j2735_v2x_msgs/msg/SupplementalVehicleExtensions";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__TRAITS_HPP_
