// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'vehicle'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__traits.hpp"
// Member 'crosswalk'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__traits.hpp"
// Member 'bike_lane'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__traits.hpp"
// Member 'sidewalk'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__traits.hpp"
// Member 'median'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__traits.hpp"
// Member 'striping'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__traits.hpp"
// Member 'tracked_vehicle'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__traits.hpp"
// Member 'parking'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::LaneTypeAttributes>()
{
  return "j2735_v2x_msgs::msg::LaneTypeAttributes";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::LaneTypeAttributes>()
{
  return "j2735_v2x_msgs/msg/LaneTypeAttributes";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::LaneTypeAttributes>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesBarrier>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesBike>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesCrosswalk>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesParking>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesSidewalk>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesStriping>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesTrackedVehicle>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesVehicle>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::LaneTypeAttributes>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesBarrier>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesBike>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesCrosswalk>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesParking>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesSidewalk>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesStriping>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesTrackedVehicle>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesVehicle>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::LaneTypeAttributes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__TRAITS_HPP_
