// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedObstacleData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/detected_obstacle_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObstacleData_obst_size_confidence
{
public:
  explicit Init_DetectedObstacleData_obst_size_confidence(::j3224_v2x_msgs::msg::DetectedObstacleData & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::DetectedObstacleData obst_size_confidence(::j3224_v2x_msgs::msg::DetectedObstacleData::_obst_size_confidence_type arg)
  {
    msg_.obst_size_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObstacleData msg_;
};

class Init_DetectedObstacleData_obst_size
{
public:
  Init_DetectedObstacleData_obst_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObstacleData_obst_size_confidence obst_size(::j3224_v2x_msgs::msg::DetectedObstacleData::_obst_size_type arg)
  {
    msg_.obst_size = std::move(arg);
    return Init_DetectedObstacleData_obst_size_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObstacleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::DetectedObstacleData>()
{
  return j3224_v2x_msgs::msg::builder::Init_DetectedObstacleData_obst_size();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__BUILDER_HPP_
