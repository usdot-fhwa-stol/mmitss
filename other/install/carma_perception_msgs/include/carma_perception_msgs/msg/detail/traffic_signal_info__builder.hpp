// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/traffic_signal_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignalInfo_remaining_distance
{
public:
  explicit Init_TrafficSignalInfo_remaining_distance(::carma_perception_msgs::msg::TrafficSignalInfo & msg)
  : msg_(msg)
  {}
  ::carma_perception_msgs::msg::TrafficSignalInfo remaining_distance(::carma_perception_msgs::msg::TrafficSignalInfo::_remaining_distance_type arg)
  {
    msg_.remaining_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::TrafficSignalInfo msg_;
};

class Init_TrafficSignalInfo_lane_id
{
public:
  explicit Init_TrafficSignalInfo_lane_id(::carma_perception_msgs::msg::TrafficSignalInfo & msg)
  : msg_(msg)
  {}
  Init_TrafficSignalInfo_remaining_distance lane_id(::carma_perception_msgs::msg::TrafficSignalInfo::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_TrafficSignalInfo_remaining_distance(msg_);
  }

private:
  ::carma_perception_msgs::msg::TrafficSignalInfo msg_;
};

class Init_TrafficSignalInfo_remaining_time
{
public:
  explicit Init_TrafficSignalInfo_remaining_time(::carma_perception_msgs::msg::TrafficSignalInfo & msg)
  : msg_(msg)
  {}
  Init_TrafficSignalInfo_lane_id remaining_time(::carma_perception_msgs::msg::TrafficSignalInfo::_remaining_time_type arg)
  {
    msg_.remaining_time = std::move(arg);
    return Init_TrafficSignalInfo_lane_id(msg_);
  }

private:
  ::carma_perception_msgs::msg::TrafficSignalInfo msg_;
};

class Init_TrafficSignalInfo_state
{
public:
  explicit Init_TrafficSignalInfo_state(::carma_perception_msgs::msg::TrafficSignalInfo & msg)
  : msg_(msg)
  {}
  Init_TrafficSignalInfo_remaining_time state(::carma_perception_msgs::msg::TrafficSignalInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_TrafficSignalInfo_remaining_time(msg_);
  }

private:
  ::carma_perception_msgs::msg::TrafficSignalInfo msg_;
};

class Init_TrafficSignalInfo_intersection_id
{
public:
  Init_TrafficSignalInfo_intersection_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignalInfo_state intersection_id(::carma_perception_msgs::msg::TrafficSignalInfo::_intersection_id_type arg)
  {
    msg_.intersection_id = std::move(arg);
    return Init_TrafficSignalInfo_state(msg_);
  }

private:
  ::carma_perception_msgs::msg::TrafficSignalInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::TrafficSignalInfo>()
{
  return carma_perception_msgs::msg::builder::Init_TrafficSignalInfo_intersection_id();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__BUILDER_HPP_
