// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/ExternalObjectList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/external_object_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ExternalObjectList_objects
{
public:
  explicit Init_ExternalObjectList_objects(::carma_perception_msgs::msg::ExternalObjectList & msg)
  : msg_(msg)
  {}
  ::carma_perception_msgs::msg::ExternalObjectList objects(::carma_perception_msgs::msg::ExternalObjectList::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObjectList msg_;
};

class Init_ExternalObjectList_header
{
public:
  Init_ExternalObjectList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalObjectList_objects header(::carma_perception_msgs::msg::ExternalObjectList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExternalObjectList_objects(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObjectList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::ExternalObjectList>()
{
  return carma_perception_msgs::msg::builder::Init_ExternalObjectList_header();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__BUILDER_HPP_
