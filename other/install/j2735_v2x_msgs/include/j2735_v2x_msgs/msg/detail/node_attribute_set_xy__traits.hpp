// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'local_node'
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__traits.hpp"
// Member 'disabled'
// Member 'enabled'
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__traits.hpp"
// Member 'data'
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeAttributeSetXY>()
{
  return "j2735_v2x_msgs::msg::NodeAttributeSetXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeAttributeSetXY>()
{
  return "j2735_v2x_msgs/msg/NodeAttributeSetXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeAttributeSetXY>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::LaneDataAttributeList>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeAttributeXYList>::value && has_fixed_size<j2735_v2x_msgs::msg::SegmentAttributeXYList>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeAttributeSetXY>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::LaneDataAttributeList>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeAttributeXYList>::value && has_bounded_size<j2735_v2x_msgs::msg::SegmentAttributeXYList>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeAttributeSetXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__TRAITS_HPP_
