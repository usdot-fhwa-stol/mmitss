// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/path_history__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'crumb_data'
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__traits.hpp"
// Member 'initial_position'
#include "j2735_v2x_msgs/msg/detail/full_position_vector__traits.hpp"
// Member 'curr_gnss_status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PathHistory>()
{
  return "j2735_v2x_msgs::msg::PathHistory";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PathHistory>()
{
  return "j2735_v2x_msgs/msg/PathHistory";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PathHistory>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::FullPositionVector>::value && has_fixed_size<j2735_v2x_msgs::msg::GNSSStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::PathHistoryPointList>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PathHistory>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::FullPositionVector>::value && has_bounded_size<j2735_v2x_msgs::msg::GNSSStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::PathHistoryPointList>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PathHistory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_
