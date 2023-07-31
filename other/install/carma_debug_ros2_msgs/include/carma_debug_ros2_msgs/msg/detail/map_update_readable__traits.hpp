// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__TRAITS_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__TRAITS_HPP_

#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_debug_ros2_msgs::msg::MapUpdateReadable>()
{
  return "carma_debug_ros2_msgs::msg::MapUpdateReadable";
}

template<>
inline const char * name<carma_debug_ros2_msgs::msg::MapUpdateReadable>()
{
  return "carma_debug_ros2_msgs/msg/MapUpdateReadable";
}

template<>
struct has_fixed_size<carma_debug_ros2_msgs::msg::MapUpdateReadable>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_debug_ros2_msgs::msg::MapUpdateReadable>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_debug_ros2_msgs::msg::MapUpdateReadable>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__TRAITS_HPP_
