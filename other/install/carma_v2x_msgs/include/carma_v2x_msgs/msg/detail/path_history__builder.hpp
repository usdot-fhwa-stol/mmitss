// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/path_history__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PathHistory_curr_gnss_status
{
public:
  explicit Init_PathHistory_curr_gnss_status(::carma_v2x_msgs::msg::PathHistory & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::PathHistory curr_gnss_status(::carma_v2x_msgs::msg::PathHistory::_curr_gnss_status_type arg)
  {
    msg_.curr_gnss_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathHistory msg_;
};

class Init_PathHistory_initial_position
{
public:
  explicit Init_PathHistory_initial_position(::carma_v2x_msgs::msg::PathHistory & msg)
  : msg_(msg)
  {}
  Init_PathHistory_curr_gnss_status initial_position(::carma_v2x_msgs::msg::PathHistory::_initial_position_type arg)
  {
    msg_.initial_position = std::move(arg);
    return Init_PathHistory_curr_gnss_status(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathHistory msg_;
};

class Init_PathHistory_crumb_data
{
public:
  explicit Init_PathHistory_crumb_data(::carma_v2x_msgs::msg::PathHistory & msg)
  : msg_(msg)
  {}
  Init_PathHistory_initial_position crumb_data(::carma_v2x_msgs::msg::PathHistory::_crumb_data_type arg)
  {
    msg_.crumb_data = std::move(arg);
    return Init_PathHistory_initial_position(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathHistory msg_;
};

class Init_PathHistory_presence_vector
{
public:
  Init_PathHistory_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathHistory_crumb_data presence_vector(::carma_v2x_msgs::msg::PathHistory::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_PathHistory_crumb_data(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathHistory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::PathHistory>()
{
  return carma_v2x_msgs::msg::builder::Init_PathHistory_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_
