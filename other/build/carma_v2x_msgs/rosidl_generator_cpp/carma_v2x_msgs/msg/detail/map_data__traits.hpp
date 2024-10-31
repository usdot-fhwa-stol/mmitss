// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/map_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'layer_type'
#include "j2735_v2x_msgs/msg/detail/layer_type__traits.hpp"
// Member 'data_parameters'
#include "j2735_v2x_msgs/msg/detail/data_parameters__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::MapData>()
{
  return "carma_v2x_msgs::msg::MapData";
}

template<>
inline const char * name<carma_v2x_msgs::msg::MapData>()
{
  return "carma_v2x_msgs/msg/MapData";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::MapData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::MapData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_v2x_msgs::msg::MapData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_
