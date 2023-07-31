// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__TRAITS_HPP_

#include "carma_msgs/msg/detail/light_bar_indicator__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::msg::LightBarIndicator>()
{
  return "carma_msgs::msg::LightBarIndicator";
}

template<>
inline const char * name<carma_msgs::msg::LightBarIndicator>()
{
  return "carma_msgs/msg/LightBarIndicator";
}

template<>
struct has_fixed_size<carma_msgs::msg::LightBarIndicator>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_msgs::msg::LightBarIndicator>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_msgs::msg::LightBarIndicator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__TRAITS_HPP_
