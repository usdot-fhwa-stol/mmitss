// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedObjectList.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/detected_object_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::DetectedObjectList>()
{
  return "j3224_v2x_msgs::msg::DetectedObjectList";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::DetectedObjectList>()
{
  return "j3224_v2x_msgs/msg/DetectedObjectList";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::DetectedObjectList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::DetectedObjectList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j3224_v2x_msgs::msg::DetectedObjectList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__TRAITS_HPP_
