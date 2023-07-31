// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_localization_msgs:msg/LocalizationStatusReport.idl
// generated code does not contain a copyright notice

#ifndef CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__TRAITS_HPP_
#define CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__TRAITS_HPP_

#include "carma_localization_msgs/msg/detail/localization_status_report__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_localization_msgs::msg::LocalizationStatusReport>()
{
  return "carma_localization_msgs::msg::LocalizationStatusReport";
}

template<>
inline const char * name<carma_localization_msgs::msg::LocalizationStatusReport>()
{
  return "carma_localization_msgs/msg/LocalizationStatusReport";
}

template<>
struct has_fixed_size<carma_localization_msgs::msg::LocalizationStatusReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<carma_localization_msgs::msg::LocalizationStatusReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<carma_localization_msgs::msg::LocalizationStatusReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__TRAITS_HPP_
