// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/MobilityResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/mobility_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityResponse_repeat
{
public:
  explicit Init_MobilityResponse_repeat(::carma_v2x_msgs::msg::MobilityResponse & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::MobilityResponse repeat(::carma_v2x_msgs::msg::MobilityResponse::_repeat_type arg)
  {
    msg_.repeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityResponse msg_;
};

class Init_MobilityResponse_reason
{
public:
  explicit Init_MobilityResponse_reason(::carma_v2x_msgs::msg::MobilityResponse & msg)
  : msg_(msg)
  {}
  Init_MobilityResponse_repeat reason(::carma_v2x_msgs::msg::MobilityResponse::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_MobilityResponse_repeat(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityResponse msg_;
};

class Init_MobilityResponse_plan_type
{
public:
  explicit Init_MobilityResponse_plan_type(::carma_v2x_msgs::msg::MobilityResponse & msg)
  : msg_(msg)
  {}
  Init_MobilityResponse_reason plan_type(::carma_v2x_msgs::msg::MobilityResponse::_plan_type_type arg)
  {
    msg_.plan_type = std::move(arg);
    return Init_MobilityResponse_reason(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityResponse msg_;
};

class Init_MobilityResponse_is_accepted
{
public:
  explicit Init_MobilityResponse_is_accepted(::carma_v2x_msgs::msg::MobilityResponse & msg)
  : msg_(msg)
  {}
  Init_MobilityResponse_plan_type is_accepted(::carma_v2x_msgs::msg::MobilityResponse::_is_accepted_type arg)
  {
    msg_.is_accepted = std::move(arg);
    return Init_MobilityResponse_plan_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityResponse msg_;
};

class Init_MobilityResponse_urgency
{
public:
  explicit Init_MobilityResponse_urgency(::carma_v2x_msgs::msg::MobilityResponse & msg)
  : msg_(msg)
  {}
  Init_MobilityResponse_is_accepted urgency(::carma_v2x_msgs::msg::MobilityResponse::_urgency_type arg)
  {
    msg_.urgency = std::move(arg);
    return Init_MobilityResponse_is_accepted(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityResponse msg_;
};

class Init_MobilityResponse_m_header
{
public:
  Init_MobilityResponse_m_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityResponse_urgency m_header(::carma_v2x_msgs::msg::MobilityResponse::_m_header_type arg)
  {
    msg_.m_header = std::move(arg);
    return Init_MobilityResponse_urgency(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::MobilityResponse>()
{
  return carma_v2x_msgs::msg::builder::Init_MobilityResponse_m_header();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_RESPONSE__BUILDER_HPP_
