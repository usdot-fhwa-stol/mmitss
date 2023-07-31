// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/time_change_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeChangeDetails_next_time_exists
{
public:
  explicit Init_TimeChangeDetails_next_time_exists(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TimeChangeDetails next_time_exists(::carma_v2x_msgs::msg::TimeChangeDetails::_next_time_exists_type arg)
  {
    msg_.next_time_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_next_time
{
public:
  explicit Init_TimeChangeDetails_next_time(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_next_time_exists next_time(::carma_v2x_msgs::msg::TimeChangeDetails::_next_time_type arg)
  {
    msg_.next_time = std::move(arg);
    return Init_TimeChangeDetails_next_time_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_confidence_exists
{
public:
  explicit Init_TimeChangeDetails_confidence_exists(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_next_time confidence_exists(::carma_v2x_msgs::msg::TimeChangeDetails::_confidence_exists_type arg)
  {
    msg_.confidence_exists = std::move(arg);
    return Init_TimeChangeDetails_next_time(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_confidence
{
public:
  explicit Init_TimeChangeDetails_confidence(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_confidence_exists confidence(::carma_v2x_msgs::msg::TimeChangeDetails::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_TimeChangeDetails_confidence_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_likely_time_exists
{
public:
  explicit Init_TimeChangeDetails_likely_time_exists(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_confidence likely_time_exists(::carma_v2x_msgs::msg::TimeChangeDetails::_likely_time_exists_type arg)
  {
    msg_.likely_time_exists = std::move(arg);
    return Init_TimeChangeDetails_confidence(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_likely_time
{
public:
  explicit Init_TimeChangeDetails_likely_time(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_likely_time_exists likely_time(::carma_v2x_msgs::msg::TimeChangeDetails::_likely_time_type arg)
  {
    msg_.likely_time = std::move(arg);
    return Init_TimeChangeDetails_likely_time_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_max_end_time_exists
{
public:
  explicit Init_TimeChangeDetails_max_end_time_exists(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_likely_time max_end_time_exists(::carma_v2x_msgs::msg::TimeChangeDetails::_max_end_time_exists_type arg)
  {
    msg_.max_end_time_exists = std::move(arg);
    return Init_TimeChangeDetails_likely_time(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_max_end_time
{
public:
  explicit Init_TimeChangeDetails_max_end_time(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_max_end_time_exists max_end_time(::carma_v2x_msgs::msg::TimeChangeDetails::_max_end_time_type arg)
  {
    msg_.max_end_time = std::move(arg);
    return Init_TimeChangeDetails_max_end_time_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_min_end_time
{
public:
  explicit Init_TimeChangeDetails_min_end_time(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_max_end_time min_end_time(::carma_v2x_msgs::msg::TimeChangeDetails::_min_end_time_type arg)
  {
    msg_.min_end_time = std::move(arg);
    return Init_TimeChangeDetails_max_end_time(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_start_time_exists
{
public:
  explicit Init_TimeChangeDetails_start_time_exists(::carma_v2x_msgs::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_min_end_time start_time_exists(::carma_v2x_msgs::msg::TimeChangeDetails::_start_time_exists_type arg)
  {
    msg_.start_time_exists = std::move(arg);
    return Init_TimeChangeDetails_min_end_time(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_start_time
{
public:
  Init_TimeChangeDetails_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeChangeDetails_start_time_exists start_time(::carma_v2x_msgs::msg::TimeChangeDetails::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_TimeChangeDetails_start_time_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TimeChangeDetails msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TimeChangeDetails>()
{
  return carma_v2x_msgs::msg::builder::Init_TimeChangeDetails_start_time();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__BUILDER_HPP_
