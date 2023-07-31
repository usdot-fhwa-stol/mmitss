// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j3224_v2x_msgs:msg/MeasurementTimeOffset.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__TRAITS_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__TRAITS_HPP_

#include "j3224_v2x_msgs/msg/detail/measurement_time_offset__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j3224_v2x_msgs::msg::MeasurementTimeOffset>()
{
  return "j3224_v2x_msgs::msg::MeasurementTimeOffset";
}

template<>
inline const char * name<j3224_v2x_msgs::msg::MeasurementTimeOffset>()
{
  return "j3224_v2x_msgs/msg/MeasurementTimeOffset";
}

template<>
struct has_fixed_size<j3224_v2x_msgs::msg::MeasurementTimeOffset>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j3224_v2x_msgs::msg::MeasurementTimeOffset>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j3224_v2x_msgs::msg::MeasurementTimeOffset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__TRAITS_HPP_
