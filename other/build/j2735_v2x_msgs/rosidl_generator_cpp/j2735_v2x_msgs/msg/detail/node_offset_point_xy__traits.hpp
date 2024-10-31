// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'node_xy1'
#include "j2735_v2x_msgs/msg/detail/node_xy20b__traits.hpp"
// Member 'node_xy2'
#include "j2735_v2x_msgs/msg/detail/node_xy22b__traits.hpp"
// Member 'node_xy3'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__traits.hpp"
// Member 'node_xy4'
#include "j2735_v2x_msgs/msg/detail/node_xy26b__traits.hpp"
// Member 'node_xy5'
#include "j2735_v2x_msgs/msg/detail/node_xy28b__traits.hpp"
// Member 'node_xy6'
#include "j2735_v2x_msgs/msg/detail/node_xy32b__traits.hpp"
// Member 'node_latlon'
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::NodeOffsetPointXY>()
{
  return "j2735_v2x_msgs::msg::NodeOffsetPointXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::NodeOffsetPointXY>()
{
  return "j2735_v2x_msgs/msg/NodeOffsetPointXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::NodeOffsetPointXY>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::NodeLLmD64b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY20b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY22b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY26b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY28b>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY32b>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::NodeOffsetPointXY>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::NodeLLmD64b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY20b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY22b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY26b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY28b>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY32b>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::NodeOffsetPointXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__TRAITS_HPP_
