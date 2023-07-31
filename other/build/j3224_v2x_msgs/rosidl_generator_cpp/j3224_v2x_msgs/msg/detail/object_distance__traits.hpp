// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/object_distance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::ObjectDistance>()
{
  return "j3224_v2x_msgs::msg::ObjectDistance";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::ObjectDistance>()
{
  return "j3224_v2x_msgs/msg/ObjectDistance";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::ObjectDistance>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::ObjectDistance>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j3224_v2x_msgs::msg::ObjectDistance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__TRAITS_HPP_
