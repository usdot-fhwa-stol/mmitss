// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/ClassificationConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/classification_confidence__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::ClassificationConfidence>()
{
  return "j3224_v2x_msgs::msg::ClassificationConfidence";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::ClassificationConfidence>()
{
  return "j3224_v2x_msgs/msg/ClassificationConfidence";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::ClassificationConfidence>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::ClassificationConfidence>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j3224_v2x_msgs::msg::ClassificationConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__CLASSIFICATION_CONFIDENCE__TRAITS_HPP_
