// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/trailer_unit_description__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'is_dolly'
#include "j2735_v2x_msgs/msg/detail/is_dolly__traits.hpp"
// Member 'width'
#include "carma_v2x_msgs/msg/detail/vehicle_width__traits.hpp"
// Member 'length'
#include "carma_v2x_msgs/msg/detail/vehicle_length__traits.hpp"
// Member 'height'
// Member 'center_of_gravity'
#include "carma_v2x_msgs/msg/detail/vehicle_height__traits.hpp"
// Member 'mass'
#include "carma_v2x_msgs/msg/detail/trailer_mass__traits.hpp"
// Member 'bumper_heights'
#include "carma_v2x_msgs/msg/detail/bumper_heights__traits.hpp"
// Member 'front_pivot'
// Member 'rear_pivot'
#include "carma_v2x_msgs/msg/detail/pivot_point_description__traits.hpp"
// Member 'rear_wheel_offset'
#include "carma_v2x_msgs/msg/detail/offset_b12__traits.hpp"
// Member 'position_offset'
#include "carma_v2x_msgs/msg/detail/node_xy24b__traits.hpp"
// Member 'elevation_offset'
#include "carma_v2x_msgs/msg/detail/vert_offset_b07__traits.hpp"
// Member 'crumb_data'
#include "carma_v2x_msgs/msg/detail/trailer_history_point_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::TrailerUnitDescription>()
{
  return "carma_v2x_msgs::msg::TrailerUnitDescription";
}

template<>
inline const char * name<carma_v2x_msgs::msg::TrailerUnitDescription>()
{
  return "carma_v2x_msgs/msg/TrailerUnitDescription";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::TrailerUnitDescription>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::BumperHeights>::value && has_fixed_size<carma_v2x_msgs::msg::NodeXY24b>::value && has_fixed_size<carma_v2x_msgs::msg::OffsetB12>::value && has_fixed_size<carma_v2x_msgs::msg::PivotPointDescription>::value && has_fixed_size<carma_v2x_msgs::msg::TrailerHistoryPointList>::value && has_fixed_size<carma_v2x_msgs::msg::TrailerMass>::value && has_fixed_size<carma_v2x_msgs::msg::VehicleHeight>::value && has_fixed_size<carma_v2x_msgs::msg::VehicleLength>::value && has_fixed_size<carma_v2x_msgs::msg::VehicleWidth>::value && has_fixed_size<carma_v2x_msgs::msg::VertOffsetB07>::value && has_fixed_size<j2735_v2x_msgs::msg::IsDolly>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::TrailerUnitDescription>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::BumperHeights>::value && has_bounded_size<carma_v2x_msgs::msg::NodeXY24b>::value && has_bounded_size<carma_v2x_msgs::msg::OffsetB12>::value && has_bounded_size<carma_v2x_msgs::msg::PivotPointDescription>::value && has_bounded_size<carma_v2x_msgs::msg::TrailerHistoryPointList>::value && has_bounded_size<carma_v2x_msgs::msg::TrailerMass>::value && has_bounded_size<carma_v2x_msgs::msg::VehicleHeight>::value && has_bounded_size<carma_v2x_msgs::msg::VehicleLength>::value && has_bounded_size<carma_v2x_msgs::msg::VehicleWidth>::value && has_bounded_size<carma_v2x_msgs::msg::VertOffsetB07>::value && has_bounded_size<j2735_v2x_msgs::msg::IsDolly>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::TrailerUnitDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_
