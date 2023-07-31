// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:msg/RouteEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__TRAITS_HPP_

#include "carma_planning_msgs/msg/detail/route_event__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::msg::RouteEvent>()
{
  return "carma_planning_msgs::msg::RouteEvent";
}

template<>
inline const char * name<carma_planning_msgs::msg::RouteEvent>()
{
  return "carma_planning_msgs/msg/RouteEvent";
}

template<>
struct has_fixed_size<carma_planning_msgs::msg::RouteEvent>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<carma_planning_msgs::msg::RouteEvent>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<carma_planning_msgs::msg::RouteEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__ROUTE_EVENT__TRAITS_HPP_
