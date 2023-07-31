// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/map_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'layer_type'
#include "j2735_v2x_msgs/msg/detail/layer_type__traits.hpp"
// Member 'road_segments'
#include "j2735_v2x_msgs/msg/detail/road_segment_list__traits.hpp"
// Member 'data_parameters'
#include "j2735_v2x_msgs/msg/detail/data_parameters__traits.hpp"
// Member 'restriction_list'
#include "j2735_v2x_msgs/msg/detail/restriction_class_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::MapData>()
{
  return "j2735_v2x_msgs::msg::MapData";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::MapData>()
{
  return "j2735_v2x_msgs/msg/MapData";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::MapData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::MapData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::MapData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_
