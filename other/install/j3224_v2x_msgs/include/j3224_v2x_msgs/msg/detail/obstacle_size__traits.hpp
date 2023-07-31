// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/ObstacleSize.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/obstacle_size__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'width'
// Member 'length'
// Member 'height'
#include "j3224_v2x_msgs/msg/detail/size_value__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::ObstacleSize>()
{
  return "j3224_v2x_msgs::msg::ObstacleSize";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::ObstacleSize>()
{
  return "j3224_v2x_msgs/msg/ObstacleSize";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::ObstacleSize>
  : std::integral_constant<bool, has_fixed_size<j3224_v2x_msgs::msg::SizeValue>::value> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::ObstacleSize>
  : std::integral_constant<bool, has_bounded_size<j3224_v2x_msgs::msg::SizeValue>::value> {};

template<>
struct is_message<j3224_v2x_msgs::msg::ObstacleSize>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE__TRAITS_HPP_
