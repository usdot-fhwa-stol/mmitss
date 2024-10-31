// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/node_xy__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'delta'
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__traits.hpp"
// Member 'attributes'
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeXY>()
{
  return "j2735_v2x_msgs::msg::NodeXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeXY>()
{
  return "j2735_v2x_msgs/msg/NodeXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeXY>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::NodeAttributeSetXY>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeOffsetPointXY>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeXY>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::NodeAttributeSetXY>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeOffsetPointXY>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__TRAITS_HPP_
