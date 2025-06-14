// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/HeadingStamped.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__TRAITS_HPP_

#include "carma_driver_msgs/msg/detail/heading_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::msg::HeadingStamped>()
{
  return "carma_driver_msgs::msg::HeadingStamped";
}

template<>
inline const char * name<carma_driver_msgs::msg::HeadingStamped>()
{
  return "carma_driver_msgs/msg/HeadingStamped";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::HeadingStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::HeadingStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<carma_driver_msgs::msg::HeadingStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__TRAITS_HPP_
