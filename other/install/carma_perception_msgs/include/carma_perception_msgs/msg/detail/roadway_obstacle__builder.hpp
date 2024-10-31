// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/roadway_obstacle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadwayObstacle_predicted_down_track_confidences
{
public:
  explicit Init_RoadwayObstacle_predicted_down_track_confidences(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  ::carma_perception_msgs::msg::RoadwayObstacle predicted_down_track_confidences(::carma_perception_msgs::msg::RoadwayObstacle::_predicted_down_track_confidences_type arg)
  {
    msg_.predicted_down_track_confidences = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_predicted_down_tracks
{
public:
  explicit Init_RoadwayObstacle_predicted_down_tracks(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_predicted_down_track_confidences predicted_down_tracks(::carma_perception_msgs::msg::RoadwayObstacle::_predicted_down_tracks_type arg)
  {
    msg_.predicted_down_tracks = std::move(arg);
    return Init_RoadwayObstacle_predicted_down_track_confidences(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_predicted_cross_track_confidences
{
public:
  explicit Init_RoadwayObstacle_predicted_cross_track_confidences(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_predicted_down_tracks predicted_cross_track_confidences(::carma_perception_msgs::msg::RoadwayObstacle::_predicted_cross_track_confidences_type arg)
  {
    msg_.predicted_cross_track_confidences = std::move(arg);
    return Init_RoadwayObstacle_predicted_down_tracks(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_predicted_cross_tracks
{
public:
  explicit Init_RoadwayObstacle_predicted_cross_tracks(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_predicted_cross_track_confidences predicted_cross_tracks(::carma_perception_msgs::msg::RoadwayObstacle::_predicted_cross_tracks_type arg)
  {
    msg_.predicted_cross_tracks = std::move(arg);
    return Init_RoadwayObstacle_predicted_cross_track_confidences(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_predicted_lanelet_id_confidences
{
public:
  explicit Init_RoadwayObstacle_predicted_lanelet_id_confidences(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_predicted_cross_tracks predicted_lanelet_id_confidences(::carma_perception_msgs::msg::RoadwayObstacle::_predicted_lanelet_id_confidences_type arg)
  {
    msg_.predicted_lanelet_id_confidences = std::move(arg);
    return Init_RoadwayObstacle_predicted_cross_tracks(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_predicted_lanelet_ids
{
public:
  explicit Init_RoadwayObstacle_predicted_lanelet_ids(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_predicted_lanelet_id_confidences predicted_lanelet_ids(::carma_perception_msgs::msg::RoadwayObstacle::_predicted_lanelet_ids_type arg)
  {
    msg_.predicted_lanelet_ids = std::move(arg);
    return Init_RoadwayObstacle_predicted_lanelet_id_confidences(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_down_track
{
public:
  explicit Init_RoadwayObstacle_down_track(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_predicted_lanelet_ids down_track(::carma_perception_msgs::msg::RoadwayObstacle::_down_track_type arg)
  {
    msg_.down_track = std::move(arg);
    return Init_RoadwayObstacle_predicted_lanelet_ids(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_cross_track
{
public:
  explicit Init_RoadwayObstacle_cross_track(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_down_track cross_track(::carma_perception_msgs::msg::RoadwayObstacle::_cross_track_type arg)
  {
    msg_.cross_track = std::move(arg);
    return Init_RoadwayObstacle_down_track(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_lanelet_id
{
public:
  explicit Init_RoadwayObstacle_lanelet_id(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_cross_track lanelet_id(::carma_perception_msgs::msg::RoadwayObstacle::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return Init_RoadwayObstacle_cross_track(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_connected_vehicle_type
{
public:
  explicit Init_RoadwayObstacle_connected_vehicle_type(::carma_perception_msgs::msg::RoadwayObstacle & msg)
  : msg_(msg)
  {}
  Init_RoadwayObstacle_lanelet_id connected_vehicle_type(::carma_perception_msgs::msg::RoadwayObstacle::_connected_vehicle_type_type arg)
  {
    msg_.connected_vehicle_type = std::move(arg);
    return Init_RoadwayObstacle_lanelet_id(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

class Init_RoadwayObstacle_object
{
public:
  Init_RoadwayObstacle_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadwayObstacle_connected_vehicle_type object(::carma_perception_msgs::msg::RoadwayObstacle::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_RoadwayObstacle_connected_vehicle_type(msg_);
  }

private:
  ::carma_perception_msgs::msg::RoadwayObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::RoadwayObstacle>()
{
  return carma_perception_msgs::msg::builder::Init_RoadwayObstacle_object();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__BUILDER_HPP_
