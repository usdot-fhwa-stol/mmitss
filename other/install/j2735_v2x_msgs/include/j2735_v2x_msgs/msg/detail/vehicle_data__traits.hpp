// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/vehicle_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'height'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__traits.hpp"
// Member 'bumpers'
#include "j2735_v2x_msgs/msg/detail/bumper_heights__traits.hpp"
// Member 'mass'
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__traits.hpp"
// Member 'trailer_weight'
#include "j2735_v2x_msgs/msg/detail/trailer_weight__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::VehicleData>()
{
  return "j2735_v2x_msgs::msg::VehicleData";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::VehicleData>()
{
  return "j2735_v2x_msgs/msg/VehicleData";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::VehicleData>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::BumperHeights>::value && has_fixed_size<j2735_v2x_msgs::msg::TrailerWeight>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleHeight>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleMass>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::VehicleData>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::BumperHeights>::value && has_bounded_size<j2735_v2x_msgs::msg::TrailerWeight>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleHeight>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleMass>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::VehicleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
