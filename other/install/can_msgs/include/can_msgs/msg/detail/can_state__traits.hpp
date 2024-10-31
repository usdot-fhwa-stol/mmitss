// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from can_msgs:msg/CanState.idl
// generated code does not contain a copyright notice

#ifndef CAN_MSGS__MSG__DETAIL__CAN_STATE__TRAITS_HPP_
#define CAN_MSGS__MSG__DETAIL__CAN_STATE__TRAITS_HPP_

#include "can_msgs/msg/detail/can_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<can_msgs::msg::CanState>()
{
  return "can_msgs::msg::CanState";
}

template<>
inline const char * name<can_msgs::msg::CanState>()
{
  return "can_msgs/msg/CanState";
}

template<>
struct has_fixed_size<can_msgs::msg::CanState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<can_msgs::msg::CanState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<can_msgs::msg::CanState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAN_MSGS__MSG__DETAIL__CAN_STATE__TRAITS_HPP_
