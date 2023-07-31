// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacleList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadwayObstacleList_roadway_obstacles
{
public:
  Init_RoadwayObstacleList_roadway_obstacles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_perception_msgs::msg::RoadwayObstacleList roadway_obstacles(::carma_perception_msgs::msg::RoadwayObstacleList::_roadway_obstacles_type arg)
  {
    msg_.roadway_obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::RoadwayObstacleList>()
{
  return carma_perception_msgs::msg::builder::Init_RoadwayObstacleList_roadway_obstacles();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__BUILDER_HPP_
