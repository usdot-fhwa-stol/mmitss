// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_request_v01__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlRequestV01_bounds
{
public:
  explicit Init_TrafficControlRequestV01_bounds(::carma_v2x_msgs::msg::TrafficControlRequestV01 & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TrafficControlRequestV01 bounds(::carma_v2x_msgs::msg::TrafficControlRequestV01::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlRequestV01 msg_;
};

class Init_TrafficControlRequestV01_reqseq
{
public:
  explicit Init_TrafficControlRequestV01_reqseq(::carma_v2x_msgs::msg::TrafficControlRequestV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlRequestV01_bounds reqseq(::carma_v2x_msgs::msg::TrafficControlRequestV01::_reqseq_type arg)
  {
    msg_.reqseq = std::move(arg);
    return Init_TrafficControlRequestV01_bounds(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlRequestV01 msg_;
};

class Init_TrafficControlRequestV01_reqid
{
public:
  Init_TrafficControlRequestV01_reqid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlRequestV01_reqseq reqid(::carma_v2x_msgs::msg::TrafficControlRequestV01::_reqid_type arg)
  {
    msg_.reqid = std::move(arg);
    return Init_TrafficControlRequestV01_reqseq(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlRequestV01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrafficControlRequestV01>()
{
  return carma_v2x_msgs::msg::builder::Init_TrafficControlRequestV01_reqid();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__BUILDER_HPP_
