// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:msg/UIInstructions.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__TRAITS_HPP_
#define CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__TRAITS_HPP_

#include "carma_msgs/msg/detail/ui_instructions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::msg::UIInstructions>()
{
  return "carma_msgs::msg::UIInstructions";
}

template<>
inline const char * name<carma_msgs::msg::UIInstructions>()
{
  return "carma_msgs/msg/UIInstructions";
}

template<>
struct has_fixed_size<carma_msgs::msg::UIInstructions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::msg::UIInstructions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::msg::UIInstructions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__TRAITS_HPP_
