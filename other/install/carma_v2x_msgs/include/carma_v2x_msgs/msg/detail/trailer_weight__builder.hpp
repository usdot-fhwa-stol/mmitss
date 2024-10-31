// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrailerWeight.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/trailer_weight__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerWeight_trailer_weight
{
public:
  Init_TrailerWeight_trailer_weight()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::TrailerWeight trailer_weight(::carma_v2x_msgs::msg::TrailerWeight::_trailer_weight_type arg)
  {
    msg_.trailer_weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrailerWeight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrailerWeight>()
{
  return carma_v2x_msgs::msg::builder::Init_TrailerWeight_trailer_weight();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__BUILDER_HPP_
