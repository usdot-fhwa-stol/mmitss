// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedObjectData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/detected_object_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'detected_object_common_data'
#include "j3224_v2x_msgs/msg/detail/detected_object_common_data__traits.hpp"
// Member 'detected_object_optional_data'
#include "j3224_v2x_msgs/msg/detail/detected_object_optional_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::DetectedObjectData>()
{
  return "j3224_v2x_msgs::msg::DetectedObjectData";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::DetectedObjectData>()
{
  return "j3224_v2x_msgs/msg/DetectedObjectData";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::DetectedObjectData>
  : std::integral_constant<bool, has_fixed_size<j3224_v2x_msgs::msg::DetectedObjectCommonData>::value && has_fixed_size<j3224_v2x_msgs::msg::DetectedObjectOptionalData>::value> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::DetectedObjectData>
  : std::integral_constant<bool, has_bounded_size<j3224_v2x_msgs::msg::DetectedObjectCommonData>::value && has_bounded_size<j3224_v2x_msgs::msg::DetectedObjectOptionalData>::value> {};

template<>
struct is_message<j3224_v2x_msgs::msg::DetectedObjectData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__TRAITS_HPP_
