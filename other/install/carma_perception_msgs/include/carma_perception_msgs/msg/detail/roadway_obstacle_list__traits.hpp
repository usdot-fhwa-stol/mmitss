// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacleList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__TRAITS_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__TRAITS_HPP_

#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_perception_msgs::msg::RoadwayObstacleList>()
{
  return "carma_perception_msgs::msg::RoadwayObstacleList";
}

template<>
inline const char * name<carma_perception_msgs::msg::RoadwayObstacleList>()
{
  return "carma_perception_msgs/msg/RoadwayObstacleList";
}

template<>
struct has_fixed_size<carma_perception_msgs::msg::RoadwayObstacleList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_perception_msgs::msg::RoadwayObstacleList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_perception_msgs::msg::RoadwayObstacleList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__TRAITS_HPP_
