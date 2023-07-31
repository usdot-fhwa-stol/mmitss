// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/MobilityOperation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/mobility_operation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityOperation_strategy_params
{
public:
  explicit Init_MobilityOperation_strategy_params(::carma_v2x_msgs::msg::MobilityOperation & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::MobilityOperation strategy_params(::carma_v2x_msgs::msg::MobilityOperation::_strategy_params_type arg)
  {
    msg_.strategy_params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityOperation msg_;
};

class Init_MobilityOperation_strategy
{
public:
  explicit Init_MobilityOperation_strategy(::carma_v2x_msgs::msg::MobilityOperation & msg)
  : msg_(msg)
  {}
  Init_MobilityOperation_strategy_params strategy(::carma_v2x_msgs::msg::MobilityOperation::_strategy_type arg)
  {
    msg_.strategy = std::move(arg);
    return Init_MobilityOperation_strategy_params(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityOperation msg_;
};

class Init_MobilityOperation_m_header
{
public:
  Init_MobilityOperation_m_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityOperation_strategy m_header(::carma_v2x_msgs::msg::MobilityOperation::_m_header_type arg)
  {
    msg_.m_header = std::move(arg);
    return Init_MobilityOperation_strategy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityOperation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::MobilityOperation>()
{
  return carma_v2x_msgs::msg::builder::Init_MobilityOperation_m_header();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_OPERATION__BUILDER_HPP_
