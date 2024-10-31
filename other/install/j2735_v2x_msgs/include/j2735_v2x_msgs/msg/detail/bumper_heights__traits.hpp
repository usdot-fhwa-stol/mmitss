// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/bumper_heights__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'front'
// Member 'rear'
#include "j2735_v2x_msgs/msg/detail/bumper_height__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BumperHeights>()
{
  return "j2735_v2x_msgs::msg::BumperHeights";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BumperHeights>()
{
  return "j2735_v2x_msgs/msg/BumperHeights";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BumperHeights>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::BumperHeight>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BumperHeights>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::BumperHeight>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BumperHeights>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_
