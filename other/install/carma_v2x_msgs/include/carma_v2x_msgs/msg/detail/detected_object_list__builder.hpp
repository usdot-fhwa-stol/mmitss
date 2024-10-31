// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/DetectedObjectList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/detected_object_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectList_detected_object_data
{
public:
  Init_DetectedObjectList_detected_object_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::DetectedObjectList detected_object_data(::carma_v2x_msgs::msg::DetectedObjectList::_detected_object_data_type arg)
  {
    msg_.detected_object_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::DetectedObjectList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::DetectedObjectList>()
{
  return carma_v2x_msgs::msg::builder::Init_DetectedObjectList_detected_object_data();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__BUILDER_HPP_
