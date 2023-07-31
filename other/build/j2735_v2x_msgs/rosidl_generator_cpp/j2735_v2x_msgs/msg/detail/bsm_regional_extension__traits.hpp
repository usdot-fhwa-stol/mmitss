// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BSMRegionalExtension.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BSMRegionalExtension>()
{
  return "j2735_v2x_msgs::msg::BSMRegionalExtension";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BSMRegionalExtension>()
{
  return "j2735_v2x_msgs/msg/BSMRegionalExtension";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BSMRegionalExtension>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BSMRegionalExtension>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BSMRegionalExtension>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__TRAITS_HPP_
