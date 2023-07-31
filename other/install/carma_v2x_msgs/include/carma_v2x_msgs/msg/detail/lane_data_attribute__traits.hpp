// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/lane_data_attribute__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::LaneDataAttribute>()
{
  return "carma_v2x_msgs::msg::LaneDataAttribute";
}

template<>
inline const char * name<carma_v2x_msgs::msg::LaneDataAttribute>()
{
  return "carma_v2x_msgs/msg/LaneDataAttribute";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::LaneDataAttribute>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::LaneDataAttribute>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_v2x_msgs::msg::LaneDataAttribute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_
