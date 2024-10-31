// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__TRAITS_HPP_

#include "carma_msgs/msg/detail/carla_enabled__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::msg::CarlaEnabled>()
{
  return "carma_msgs::msg::CarlaEnabled";
}

template<>
inline const char * name<carma_msgs::msg::CarlaEnabled>()
{
  return "carma_msgs/msg/CarlaEnabled";
}

template<>
struct has_fixed_size<carma_msgs::msg::CarlaEnabled>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_msgs::msg::CarlaEnabled>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_msgs::msg::CarlaEnabled>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__TRAITS_HPP_
