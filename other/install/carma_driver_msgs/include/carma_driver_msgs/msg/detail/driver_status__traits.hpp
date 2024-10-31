// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__TRAITS_HPP_

#include "carma_driver_msgs/msg/detail/driver_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::msg::DriverStatus>()
{
  return "carma_driver_msgs::msg::DriverStatus";
}

template<>
inline const char * name<carma_driver_msgs::msg::DriverStatus>()
{
  return "carma_driver_msgs/msg/DriverStatus";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::DriverStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::DriverStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_driver_msgs::msg::DriverStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__TRAITS_HPP_
