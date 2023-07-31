// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_perception_msgs:msg/PredictedState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__TRAITS_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__TRAITS_HPP_

#include "carma_perception_msgs/msg/detail/predicted_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'predicted_position'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'predicted_velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_perception_msgs::msg::PredictedState>()
{
  return "carma_perception_msgs::msg::PredictedState";
}

template<>
inline const char * name<carma_perception_msgs::msg::PredictedState>()
{
  return "carma_perception_msgs/msg/PredictedState";
}

template<>
struct has_fixed_size<carma_perception_msgs::msg::PredictedState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<carma_perception_msgs::msg::PredictedState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<carma_perception_msgs::msg::PredictedState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__TRAITS_HPP_
