// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SegmentAttributeXY>()
{
  return "j2735_v2x_msgs::msg::SegmentAttributeXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SegmentAttributeXY>()
{
  return "j2735_v2x_msgs/msg/SegmentAttributeXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SegmentAttributeXY>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SegmentAttributeXY>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SegmentAttributeXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__TRAITS_HPP_
