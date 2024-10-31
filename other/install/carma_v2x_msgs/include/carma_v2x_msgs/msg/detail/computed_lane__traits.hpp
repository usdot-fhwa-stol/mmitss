// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/computed_lane__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'offset_x_axis'
// Member 'offset_y_axis'
#include "carma_v2x_msgs/msg/detail/offset_axis__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::ComputedLane>()
{
  return "carma_v2x_msgs::msg::ComputedLane";
}

template<>
inline const char * name<carma_v2x_msgs::msg::ComputedLane>()
{
  return "carma_v2x_msgs/msg/ComputedLane";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::ComputedLane>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::OffsetAxis>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::ComputedLane>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::OffsetAxis>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::ComputedLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_
