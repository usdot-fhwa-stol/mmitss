// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/NodeXY24b.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/node_xy24b__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeXY24b_y
{
public:
  explicit Init_NodeXY24b_y(::carma_v2x_msgs::msg::NodeXY24b & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::NodeXY24b y(::carma_v2x_msgs::msg::NodeXY24b::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeXY24b msg_;
};

class Init_NodeXY24b_x
{
public:
  Init_NodeXY24b_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeXY24b_y x(::carma_v2x_msgs::msg::NodeXY24b::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NodeXY24b_y(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeXY24b msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::NodeXY24b>()
{
  return carma_v2x_msgs::msg::builder::Init_NodeXY24b_x();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_XY24B__BUILDER_HPP_
