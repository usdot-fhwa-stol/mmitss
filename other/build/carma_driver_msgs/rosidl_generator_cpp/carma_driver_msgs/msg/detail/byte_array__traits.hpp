// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_

#include "carma_driver_msgs/msg/detail/byte_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::msg::ByteArray>()
{
  return "carma_driver_msgs::msg::ByteArray";
}

template<>
inline const char * name<carma_driver_msgs::msg::ByteArray>()
{
  return "carma_driver_msgs/msg/ByteArray";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::ByteArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::ByteArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_driver_msgs::msg::ByteArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__BYTE_ARRAY__TRAITS_HPP_
