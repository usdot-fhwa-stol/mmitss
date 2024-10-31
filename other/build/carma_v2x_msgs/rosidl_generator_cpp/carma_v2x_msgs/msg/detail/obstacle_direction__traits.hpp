// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/ObstacleDirection.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/obstacle_direction__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'direction'
#include "carma_v2x_msgs/msg/detail/angle__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::ObstacleDirection>()
{
  return "carma_v2x_msgs::msg::ObstacleDirection";
}

template<>
inline const char * name<carma_v2x_msgs::msg::ObstacleDirection>()
{
  return "carma_v2x_msgs/msg/ObstacleDirection";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::ObstacleDirection>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::Angle>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::ObstacleDirection>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::Angle>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::ObstacleDirection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__TRAITS_HPP_
