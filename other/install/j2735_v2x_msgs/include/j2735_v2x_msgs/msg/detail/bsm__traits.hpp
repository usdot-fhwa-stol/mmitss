// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/bsm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'core_data'
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BSM>()
{
  return "j2735_v2x_msgs::msg::BSM";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BSM>()
{
  return "j2735_v2x_msgs/msg/BSM";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BSM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BSM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BSM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM__TRAITS_HPP_
