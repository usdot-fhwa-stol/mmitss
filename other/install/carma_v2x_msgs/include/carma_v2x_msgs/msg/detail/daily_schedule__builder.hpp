// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/DailySchedule.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/daily_schedule__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DailySchedule_duration
{
public:
  explicit Init_DailySchedule_duration(::carma_v2x_msgs::msg::DailySchedule & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::DailySchedule duration(::carma_v2x_msgs::msg::DailySchedule::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DailySchedule msg_;
};

class Init_DailySchedule_begin
{
public:
  Init_DailySchedule_begin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DailySchedule_duration begin(::carma_v2x_msgs::msg::DailySchedule::_begin_type arg)
  {
    msg_.begin = std::move(arg);
    return Init_DailySchedule_duration(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DailySchedule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::DailySchedule>()
{
  return carma_v2x_msgs::msg::builder::Init_DailySchedule_begin();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__BUILDER_HPP_
