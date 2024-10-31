// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'human'
#include "j2735_v2x_msgs/msg/detail/human_propelled_type__traits.hpp"
// Member 'animal'
#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__traits.hpp"
// Member 'motor'
#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PropelledInformation>()
{
  return "j2735_v2x_msgs::msg::PropelledInformation";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PropelledInformation>()
{
  return "j2735_v2x_msgs/msg/PropelledInformation";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PropelledInformation>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AnimalPropelledType>::value && has_fixed_size<j2735_v2x_msgs::msg::HumanPropelledType>::value && has_fixed_size<j2735_v2x_msgs::msg::MotorizedPropelledType>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PropelledInformation>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AnimalPropelledType>::value && has_bounded_size<j2735_v2x_msgs::msg::HumanPropelledType>::value && has_bounded_size<j2735_v2x_msgs::msg::MotorizedPropelledType>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PropelledInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_
