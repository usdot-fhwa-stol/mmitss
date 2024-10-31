// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_bounds__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlBounds_offsets
{
public:
  explicit Init_TrafficControlBounds_offsets(::carma_v2x_msgs::msg::TrafficControlBounds & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TrafficControlBounds offsets(::carma_v2x_msgs::msg::TrafficControlBounds::_offsets_type arg)
  {
    msg_.offsets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlBounds msg_;
};

class Init_TrafficControlBounds_reflat
{
public:
  explicit Init_TrafficControlBounds_reflat(::carma_v2x_msgs::msg::TrafficControlBounds & msg)
  : msg_(msg)
  {}
  Init_TrafficControlBounds_offsets reflat(::carma_v2x_msgs::msg::TrafficControlBounds::_reflat_type arg)
  {
    msg_.reflat = std::move(arg);
    return Init_TrafficControlBounds_offsets(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlBounds msg_;
};

class Init_TrafficControlBounds_reflon
{
public:
  explicit Init_TrafficControlBounds_reflon(::carma_v2x_msgs::msg::TrafficControlBounds & msg)
  : msg_(msg)
  {}
  Init_TrafficControlBounds_reflat reflon(::carma_v2x_msgs::msg::TrafficControlBounds::_reflon_type arg)
  {
    msg_.reflon = std::move(arg);
    return Init_TrafficControlBounds_reflat(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlBounds msg_;
};

class Init_TrafficControlBounds_oldest
{
public:
  Init_TrafficControlBounds_oldest()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlBounds_reflon oldest(::carma_v2x_msgs::msg::TrafficControlBounds::_oldest_type arg)
  {
    msg_.oldest = std::move(arg);
    return Init_TrafficControlBounds_reflon(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlBounds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrafficControlBounds>()
{
  return carma_v2x_msgs::msg::builder::Init_TrafficControlBounds_oldest();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__BUILDER_HPP_
