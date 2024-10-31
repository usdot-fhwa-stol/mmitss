// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'vehicle_safety_extensions'
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__traits.hpp"
// Member 'special_vehicle_extensions'
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__traits.hpp"
// Member 'supplemental_vehicle_extensions'
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BSMPartIIExtension>()
{
  return "j2735_v2x_msgs::msg::BSMPartIIExtension";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BSMPartIIExtension>()
{
  return "j2735_v2x_msgs/msg/BSMPartIIExtension";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BSMPartIIExtension>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::SpecialVehicleExtensions>::value && has_fixed_size<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleSafetyExtensions>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BSMPartIIExtension>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::SpecialVehicleExtensions>::value && has_bounded_size<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleSafetyExtensions>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BSMPartIIExtension>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__TRAITS_HPP_
