// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_perception_msgs:msg/ConnectedVehicleType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__TRAITS_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__TRAITS_HPP_

#include "carma_perception_msgs/msg/detail/connected_vehicle_type__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_perception_msgs::msg::ConnectedVehicleType>()
{
  return "carma_perception_msgs::msg::ConnectedVehicleType";
}

template<>
inline const char * name<carma_perception_msgs::msg::ConnectedVehicleType>()
{
  return "carma_perception_msgs/msg/ConnectedVehicleType";
}

template<>
struct has_fixed_size<carma_perception_msgs::msg::ConnectedVehicleType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_perception_msgs::msg::ConnectedVehicleType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_perception_msgs::msg::ConnectedVehicleType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__TRAITS_HPP_
