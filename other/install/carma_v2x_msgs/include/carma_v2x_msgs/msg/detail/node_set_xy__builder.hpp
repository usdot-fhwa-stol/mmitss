// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/node_set_xy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeSetXY_node_set_xy
{
public:
  Init_NodeSetXY_node_set_xy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::NodeSetXY node_set_xy(::carma_v2x_msgs::msg::NodeSetXY::_node_set_xy_type arg)
  {
    msg_.node_set_xy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeSetXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::NodeSetXY>()
{
  return carma_v2x_msgs::msg::builder::Init_NodeSetXY_node_set_xy();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_
