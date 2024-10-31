// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/MobilityRequest.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/mobility_request__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityRequest_expiration
{
public:
  explicit Init_MobilityRequest_expiration(::carma_v2x_msgs::msg::MobilityRequest & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::MobilityRequest expiration(::carma_v2x_msgs::msg::MobilityRequest::_expiration_type arg)
  {
    msg_.expiration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRequest msg_;
};

class Init_MobilityRequest_trajectory
{
public:
  explicit Init_MobilityRequest_trajectory(::carma_v2x_msgs::msg::MobilityRequest & msg)
  : msg_(msg)
  {}
  Init_MobilityRequest_expiration trajectory(::carma_v2x_msgs::msg::MobilityRequest::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_MobilityRequest_expiration(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRequest msg_;
};

class Init_MobilityRequest_strategy_params
{
public:
  explicit Init_MobilityRequest_strategy_params(::carma_v2x_msgs::msg::MobilityRequest & msg)
  : msg_(msg)
  {}
  Init_MobilityRequest_trajectory strategy_params(::carma_v2x_msgs::msg::MobilityRequest::_strategy_params_type arg)
  {
    msg_.strategy_params = std::move(arg);
    return Init_MobilityRequest_trajectory(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRequest msg_;
};

class Init_MobilityRequest_location
{
public:
  explicit Init_MobilityRequest_location(::carma_v2x_msgs::msg::MobilityRequest & msg)
  : msg_(msg)
  {}
  Init_MobilityRequest_strategy_params location(::carma_v2x_msgs::msg::MobilityRequest::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_MobilityRequest_strategy_params(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRequest msg_;
};

class Init_MobilityRequest_urgency
{
public:
  explicit Init_MobilityRequest_urgency(::carma_v2x_msgs::msg::MobilityRequest & msg)
  : msg_(msg)
  {}
  Init_MobilityRequest_location urgency(::carma_v2x_msgs::msg::MobilityRequest::_urgency_type arg)
  {
    msg_.urgency = std::move(arg);
    return Init_MobilityRequest_location(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRequest msg_;
};

class Init_MobilityRequest_plan_type
{
public:
  explicit Init_MobilityRequest_plan_type(::carma_v2x_msgs::msg::MobilityRequest & msg)
  : msg_(msg)
  {}
  Init_MobilityRequest_urgency plan_type(::carma_v2x_msgs::msg::MobilityRequest::_plan_type_type arg)
  {
    msg_.plan_type = std::move(arg);
    return Init_MobilityRequest_urgency(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRequest msg_;
};

class Init_MobilityRequest_strategy
{
public:
  explicit Init_MobilityRequest_strategy(::carma_v2x_msgs::msg::MobilityRequest & msg)
  : msg_(msg)
  {}
  Init_MobilityRequest_plan_type strategy(::carma_v2x_msgs::msg::MobilityRequest::_strategy_type arg)
  {
    msg_.strategy = std::move(arg);
    return Init_MobilityRequest_plan_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRequest msg_;
};

class Init_MobilityRequest_m_header
{
public:
  Init_MobilityRequest_m_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityRequest_strategy m_header(::carma_v2x_msgs::msg::MobilityRequest::_m_header_type arg)
  {
    msg_.m_header = std::move(arg);
    return Init_MobilityRequest_strategy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::MobilityRequest>()
{
  return carma_v2x_msgs::msg::builder::Init_MobilityRequest_m_header();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_REQUEST__BUILDER_HPP_
