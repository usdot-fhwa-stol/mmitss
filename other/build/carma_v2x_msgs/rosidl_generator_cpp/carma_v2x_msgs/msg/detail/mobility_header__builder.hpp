// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/MobilityHeader.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/mobility_header__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityHeader_timestamp
{
public:
  explicit Init_MobilityHeader_timestamp(::carma_v2x_msgs::msg::MobilityHeader & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::MobilityHeader timestamp(::carma_v2x_msgs::msg::MobilityHeader::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityHeader msg_;
};

class Init_MobilityHeader_plan_id
{
public:
  explicit Init_MobilityHeader_plan_id(::carma_v2x_msgs::msg::MobilityHeader & msg)
  : msg_(msg)
  {}
  Init_MobilityHeader_timestamp plan_id(::carma_v2x_msgs::msg::MobilityHeader::_plan_id_type arg)
  {
    msg_.plan_id = std::move(arg);
    return Init_MobilityHeader_timestamp(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityHeader msg_;
};

class Init_MobilityHeader_sender_bsm_id
{
public:
  explicit Init_MobilityHeader_sender_bsm_id(::carma_v2x_msgs::msg::MobilityHeader & msg)
  : msg_(msg)
  {}
  Init_MobilityHeader_plan_id sender_bsm_id(::carma_v2x_msgs::msg::MobilityHeader::_sender_bsm_id_type arg)
  {
    msg_.sender_bsm_id = std::move(arg);
    return Init_MobilityHeader_plan_id(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityHeader msg_;
};

class Init_MobilityHeader_recipient_id
{
public:
  explicit Init_MobilityHeader_recipient_id(::carma_v2x_msgs::msg::MobilityHeader & msg)
  : msg_(msg)
  {}
  Init_MobilityHeader_sender_bsm_id recipient_id(::carma_v2x_msgs::msg::MobilityHeader::_recipient_id_type arg)
  {
    msg_.recipient_id = std::move(arg);
    return Init_MobilityHeader_sender_bsm_id(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityHeader msg_;
};

class Init_MobilityHeader_sender_id
{
public:
  Init_MobilityHeader_sender_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityHeader_recipient_id sender_id(::carma_v2x_msgs::msg::MobilityHeader::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_MobilityHeader_recipient_id(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MobilityHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::MobilityHeader>()
{
  return carma_v2x_msgs::msg::builder::Init_MobilityHeader_sender_id();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__BUILDER_HPP_
