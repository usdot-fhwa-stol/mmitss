// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/NodeXY24b.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/node_xy24b__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'x'
// Member 'y'
#include "carma_v2x_msgs/msg/detail/offset_b12__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::NodeXY24b>()
{
  return "carma_v2x_msgs::msg::NodeXY24b";
}

template<>
inline const char * name<carma_v2x_msgs::msg::NodeXY24b>()
{
  return "carma_v2x_msgs/msg/NodeXY24b";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::NodeXY24b>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::OffsetB12>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::NodeXY24b>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::OffsetB12>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::NodeXY24b>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__TRAITS_HPP_
