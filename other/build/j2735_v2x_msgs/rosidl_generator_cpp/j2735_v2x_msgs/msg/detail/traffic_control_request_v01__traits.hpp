// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/traffic_control_request_v01__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'reqid'
#include "j2735_v2x_msgs/msg/detail/id64b__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlRequestV01>()
{
  return "j2735_v2x_msgs::msg::TrafficControlRequestV01";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlRequestV01>()
{
  return "j2735_v2x_msgs/msg/TrafficControlRequestV01";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlRequestV01>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlRequestV01>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlRequestV01>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__TRAITS_HPP_
