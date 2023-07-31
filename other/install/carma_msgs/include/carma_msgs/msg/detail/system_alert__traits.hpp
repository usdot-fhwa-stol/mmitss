// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/SystemAlert.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_

#include "carma_msgs/msg/detail/system_alert__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::msg::SystemAlert>()
{
  return "carma_msgs::msg::SystemAlert";
}

template<>
inline const char * name<carma_msgs::msg::SystemAlert>()
{
  return "carma_msgs/msg/SystemAlert";
}

template<>
struct has_fixed_size<carma_msgs::msg::SystemAlert>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::msg::SystemAlert>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::msg::SystemAlert>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__TRAITS_HPP_
