// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/ObstacleSizeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'width_confidence'
// Member 'length_confidence'
// Member 'height_confidence'
#include "j3224_v2x_msgs/msg/detail/size_value_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::ObstacleSizeConfidence>()
{
  return "j3224_v2x_msgs::msg::ObstacleSizeConfidence";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::ObstacleSizeConfidence>()
{
  return "j3224_v2x_msgs/msg/ObstacleSizeConfidence";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::ObstacleSizeConfidence>
  : std::integral_constant<bool, has_fixed_size<j3224_v2x_msgs::msg::SizeValueConfidence>::value> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::ObstacleSizeConfidence>
  : std::integral_constant<bool, has_bounded_size<j3224_v2x_msgs::msg::SizeValueConfidence>::value> {};

template<>
struct is_message<j3224_v2x_msgs::msg::ObstacleSizeConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBSTACLE_SIZE_CONFIDENCE__TRAITS_HPP_
