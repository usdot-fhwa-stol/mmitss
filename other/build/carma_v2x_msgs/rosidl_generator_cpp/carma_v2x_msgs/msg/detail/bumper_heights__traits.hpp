// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/bumper_heights__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'front'
// Member 'rear'
#include "carma_v2x_msgs/msg/detail/bumper_height__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::BumperHeights>()
{
  return "carma_v2x_msgs::msg::BumperHeights";
}

template<>
inline const char * name<carma_v2x_msgs::msg::BumperHeights>()
{
  return "carma_v2x_msgs/msg/BumperHeights";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::BumperHeights>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::BumperHeight>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::BumperHeights>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::BumperHeight>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::BumperHeights>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_
