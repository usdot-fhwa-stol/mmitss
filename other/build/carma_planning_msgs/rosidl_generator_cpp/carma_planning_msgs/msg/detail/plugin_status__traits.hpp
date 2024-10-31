// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:msg/PluginStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__TRAITS_HPP_

#include "carma_planning_msgs/msg/detail/plugin_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::msg::PluginStatus>()
{
  return "carma_planning_msgs::msg::PluginStatus";
}

template<>
inline const char * name<carma_planning_msgs::msg::PluginStatus>()
{
  return "carma_planning_msgs/msg/PluginStatus";
}

template<>
struct has_fixed_size<carma_planning_msgs::msg::PluginStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_planning_msgs::msg::PluginStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_planning_msgs::msg::PluginStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLUGIN_STATUS__TRAITS_HPP_
