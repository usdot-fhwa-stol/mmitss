// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlRequest.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlRequest_tcr_v01
{
public:
  explicit Init_TrafficControlRequest_tcr_v01(::carma_v2x_msgs::msg::TrafficControlRequest & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TrafficControlRequest tcr_v01(::carma_v2x_msgs::msg::TrafficControlRequest::_tcr_v01_type arg)
  {
    msg_.tcr_v01 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlRequest msg_;
};

class Init_TrafficControlRequest_choice
{
public:
  Init_TrafficControlRequest_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlRequest_tcr_v01 choice(::carma_v2x_msgs::msg::TrafficControlRequest::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_TrafficControlRequest_tcr_v01(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrafficControlRequest>()
{
  return carma_v2x_msgs::msg::builder::Init_TrafficControlRequest_choice();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__BUILDER_HPP_
