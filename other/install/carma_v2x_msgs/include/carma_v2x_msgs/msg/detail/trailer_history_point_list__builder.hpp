// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrailerHistoryPointList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/trailer_history_point_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerHistoryPointList_trailer_history_points
{
public:
  Init_TrailerHistoryPointList_trailer_history_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::TrailerHistoryPointList trailer_history_points(::carma_v2x_msgs::msg::TrailerHistoryPointList::_trailer_history_points_type arg)
  {
    msg_.trailer_history_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrailerHistoryPointList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrailerHistoryPointList>()
{
  return carma_v2x_msgs::msg::builder::Init_TrailerHistoryPointList_trailer_history_points();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__BUILDER_HPP_
