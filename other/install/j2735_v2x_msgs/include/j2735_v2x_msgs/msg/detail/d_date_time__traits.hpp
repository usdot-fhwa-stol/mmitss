// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'year'
#include "j2735_v2x_msgs/msg/detail/d_year__traits.hpp"
// Member 'month'
#include "j2735_v2x_msgs/msg/detail/d_month__traits.hpp"
// Member 'day'
#include "j2735_v2x_msgs/msg/detail/d_day__traits.hpp"
// Member 'hour'
#include "j2735_v2x_msgs/msg/detail/d_hour__traits.hpp"
// Member 'minute'
#include "j2735_v2x_msgs/msg/detail/d_minute__traits.hpp"
// Member 'second'
#include "j2735_v2x_msgs/msg/detail/d_second__traits.hpp"
// Member 'offset'
#include "j2735_v2x_msgs/msg/detail/d_offset__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::DDateTime>()
{
  return "j2735_v2x_msgs::msg::DDateTime";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::DDateTime>()
{
  return "j2735_v2x_msgs/msg/DDateTime";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::DDateTime>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::DDay>::value && has_fixed_size<j2735_v2x_msgs::msg::DHour>::value && has_fixed_size<j2735_v2x_msgs::msg::DMinute>::value && has_fixed_size<j2735_v2x_msgs::msg::DMonth>::value && has_fixed_size<j2735_v2x_msgs::msg::DOffset>::value && has_fixed_size<j2735_v2x_msgs::msg::DSecond>::value && has_fixed_size<j2735_v2x_msgs::msg::DYear>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::DDateTime>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::DDay>::value && has_bounded_size<j2735_v2x_msgs::msg::DHour>::value && has_bounded_size<j2735_v2x_msgs::msg::DMinute>::value && has_bounded_size<j2735_v2x_msgs::msg::DMonth>::value && has_bounded_size<j2735_v2x_msgs::msg::DOffset>::value && has_bounded_size<j2735_v2x_msgs::msg::DSecond>::value && has_bounded_size<j2735_v2x_msgs::msg::DYear>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::DDateTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__TRAITS_HPP_
