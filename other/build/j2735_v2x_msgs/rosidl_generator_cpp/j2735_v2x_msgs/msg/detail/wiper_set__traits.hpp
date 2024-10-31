// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/wiper_set__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'status_front'
// Member 'status_rear'
#include "j2735_v2x_msgs/msg/detail/wiper_status__traits.hpp"
// Member 'rate_front'
// Member 'rate_rear'
#include "j2735_v2x_msgs/msg/detail/wiper_rate__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::WiperSet>()
{
  return "j2735_v2x_msgs::msg::WiperSet";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::WiperSet>()
{
  return "j2735_v2x_msgs/msg/WiperSet";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::WiperSet>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::WiperRate>::value && has_fixed_size<j2735_v2x_msgs::msg::WiperStatus>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::WiperSet>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::WiperRate>::value && has_bounded_size<j2735_v2x_msgs::msg::WiperStatus>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::WiperSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__TRAITS_HPP_
