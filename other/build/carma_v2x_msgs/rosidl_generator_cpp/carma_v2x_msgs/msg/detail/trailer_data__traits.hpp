// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/trailer_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'connection'
#include "carma_v2x_msgs/msg/detail/pivot_point_description__traits.hpp"
// Member 'units'
#include "carma_v2x_msgs/msg/detail/trailer_unit_description_list__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::TrailerData>()
{
  return "carma_v2x_msgs::msg::TrailerData";
}

template<>
inline const char * name<carma_v2x_msgs::msg::TrailerData>()
{
  return "carma_v2x_msgs/msg/TrailerData";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::TrailerData>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::PivotPointDescription>::value && has_fixed_size<carma_v2x_msgs::msg::TrailerUnitDescriptionList>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::TrailerData>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::PivotPointDescription>::value && has_bounded_size<carma_v2x_msgs::msg::TrailerUnitDescriptionList>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::TrailerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__TRAITS_HPP_
