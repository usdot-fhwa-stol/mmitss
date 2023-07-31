// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/OffsetB11.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B11__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B11__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/offset_b11__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::OffsetB11>()
{
  return "carma_v2x_msgs::msg::OffsetB11";
}

template<>
inline const char * name<carma_v2x_msgs::msg::OffsetB11>()
{
  return "carma_v2x_msgs/msg/OffsetB11";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::OffsetB11>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::OffsetB11>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_v2x_msgs::msg::OffsetB11>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_B11__TRAITS_HPP_
