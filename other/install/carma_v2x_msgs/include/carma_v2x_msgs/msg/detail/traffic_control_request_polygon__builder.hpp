// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlRequestPolygon.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_request_polygon__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlRequestPolygon_polygon_list
{
public:
  Init_TrafficControlRequestPolygon_polygon_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::TrafficControlRequestPolygon polygon_list(::carma_v2x_msgs::msg::TrafficControlRequestPolygon::_polygon_list_type arg)
  {
    msg_.polygon_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlRequestPolygon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrafficControlRequestPolygon>()
{
  return carma_v2x_msgs::msg::builder::Init_TrafficControlRequestPolygon_polygon_list();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__BUILDER_HPP_
