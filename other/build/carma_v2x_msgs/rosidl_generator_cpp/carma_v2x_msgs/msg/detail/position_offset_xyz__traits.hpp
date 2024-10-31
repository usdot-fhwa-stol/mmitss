// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/PositionOffsetXYZ.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/position_offset_xyz__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'offset_x'
// Member 'offset_y'
// Member 'offset_z'
#include "carma_v2x_msgs/msg/detail/object_distance__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::PositionOffsetXYZ>()
{
  return "carma_v2x_msgs::msg::PositionOffsetXYZ";
}

template<>
inline const char * name<carma_v2x_msgs::msg::PositionOffsetXYZ>()
{
  return "carma_v2x_msgs/msg/PositionOffsetXYZ";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::PositionOffsetXYZ>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::ObjectDistance>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::PositionOffsetXYZ>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::ObjectDistance>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::PositionOffsetXYZ>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__TRAITS_HPP_
