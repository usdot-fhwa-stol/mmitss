// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'is_dolly'
#include "j2735_v2x_msgs/msg/detail/is_dolly__traits.hpp"
// Member 'width'
#include "j2735_v2x_msgs/msg/detail/vehicle_width__traits.hpp"
// Member 'length'
#include "j2735_v2x_msgs/msg/detail/vehicle_length__traits.hpp"
// Member 'height'
// Member 'center_of_gravity'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__traits.hpp"
// Member 'mass'
#include "j2735_v2x_msgs/msg/detail/trailer_mass__traits.hpp"
// Member 'bumper_heights'
#include "j2735_v2x_msgs/msg/detail/bumper_heights__traits.hpp"
// Member 'front_pivot'
// Member 'rear_pivot'
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__traits.hpp"
// Member 'rear_wheel_offset'
#include "j2735_v2x_msgs/msg/detail/offset_b12__traits.hpp"
// Member 'position_offset'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__traits.hpp"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__traits.hpp"
// Member 'crumb_data'
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrailerUnitDescription>()
{
  return "j2735_v2x_msgs::msg::TrailerUnitDescription";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrailerUnitDescription>()
{
  return "j2735_v2x_msgs/msg/TrailerUnitDescription";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrailerUnitDescription>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::BumperHeights>::value && has_fixed_size<j2735_v2x_msgs::msg::IsDolly>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_fixed_size<j2735_v2x_msgs::msg::OffsetB12>::value && has_fixed_size<j2735_v2x_msgs::msg::PivotPointDescription>::value && has_fixed_size<j2735_v2x_msgs::msg::TrailerHistoryPointList>::value && has_fixed_size<j2735_v2x_msgs::msg::TrailerMass>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleHeight>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleLength>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleWidth>::value && has_fixed_size<j2735_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrailerUnitDescription>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::BumperHeights>::value && has_bounded_size<j2735_v2x_msgs::msg::IsDolly>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_bounded_size<j2735_v2x_msgs::msg::OffsetB12>::value && has_bounded_size<j2735_v2x_msgs::msg::PivotPointDescription>::value && has_bounded_size<j2735_v2x_msgs::msg::TrailerHistoryPointList>::value && has_bounded_size<j2735_v2x_msgs::msg::TrailerMass>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleHeight>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleLength>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleWidth>::value && has_bounded_size<j2735_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrailerUnitDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_
