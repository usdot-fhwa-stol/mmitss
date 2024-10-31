// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/connection__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'connecting_lane'
#include "j2735_v2x_msgs/msg/detail/connecting_lane__traits.hpp"
// Member 'remote_intersection'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::Connection>()
{
  return "j2735_v2x_msgs::msg::Connection";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::Connection>()
{
  return "j2735_v2x_msgs/msg/Connection";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::Connection>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ConnectingLane>::value && has_fixed_size<j2735_v2x_msgs::msg::IntersectionReferenceID>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::Connection>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ConnectingLane>::value && has_bounded_size<j2735_v2x_msgs::msg::IntersectionReferenceID>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::Connection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
