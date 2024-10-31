// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/lane_attributes__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'directional_use'
#include "j2735_v2x_msgs/msg/detail/lane_direction__traits.hpp"
// Member 'shared_with'
#include "j2735_v2x_msgs/msg/detail/lane_sharing__traits.hpp"
// Member 'lane_type'
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::LaneAttributes>()
{
  return "j2735_v2x_msgs::msg::LaneAttributes";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::LaneAttributes>()
{
  return "j2735_v2x_msgs/msg/LaneAttributes";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::LaneAttributes>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::LaneDirection>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneSharing>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneTypeAttributes>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::LaneAttributes>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::LaneDirection>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneSharing>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneTypeAttributes>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::LaneAttributes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__TRAITS_HPP_
