// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/PivotPointDescription.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/pivot_point_description__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pivot_offset'
#include "carma_v2x_msgs/msg/detail/offset_b11__traits.hpp"
// Member 'pivot_angle'
#include "carma_v2x_msgs/msg/detail/angle__traits.hpp"
// Member 'pivots'
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::PivotPointDescription>()
{
  return "carma_v2x_msgs::msg::PivotPointDescription";
}

template<>
inline const char * name<carma_v2x_msgs::msg::PivotPointDescription>()
{
  return "carma_v2x_msgs/msg/PivotPointDescription";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::PivotPointDescription>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::Angle>::value && has_fixed_size<carma_v2x_msgs::msg::OffsetB11>::value && has_fixed_size<j2735_v2x_msgs::msg::PivotingAllowed>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::PivotPointDescription>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::Angle>::value && has_bounded_size<carma_v2x_msgs::msg::OffsetB11>::value && has_bounded_size<j2735_v2x_msgs::msg::PivotingAllowed>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::PivotPointDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__TRAITS_HPP_
