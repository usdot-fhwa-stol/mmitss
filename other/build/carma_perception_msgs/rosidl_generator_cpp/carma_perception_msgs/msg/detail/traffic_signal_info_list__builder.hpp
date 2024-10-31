// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/TrafficSignalInfoList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/traffic_signal_info_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignalInfoList_traffic_signal_info_list
{
public:
  Init_TrafficSignalInfoList_traffic_signal_info_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_perception_msgs::msg::TrafficSignalInfoList traffic_signal_info_list(::carma_perception_msgs::msg::TrafficSignalInfoList::_traffic_signal_info_list_type arg)
  {
    msg_.traffic_signal_info_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::TrafficSignalInfoList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::TrafficSignalInfoList>()
{
  return carma_perception_msgs::msg::builder::Init_TrafficSignalInfoList_traffic_signal_info_list();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__BUILDER_HPP_
