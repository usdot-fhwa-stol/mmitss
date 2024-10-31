// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/EventDescription.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/event_description__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'type_event'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__traits.hpp"
// Member 'priority'
#include "j2735_v2x_msgs/msg/detail/priority__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading_slice__traits.hpp"
// Member 'extent'
#include "j2735_v2x_msgs/msg/detail/extent__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::EventDescription>()
{
  return "j2735_v2x_msgs::msg::EventDescription";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::EventDescription>()
{
  return "j2735_v2x_msgs/msg/EventDescription";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::EventDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::EventDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::EventDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__TRAITS_HPP_
