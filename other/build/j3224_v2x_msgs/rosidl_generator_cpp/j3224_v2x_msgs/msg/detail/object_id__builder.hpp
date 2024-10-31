// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/ObjectID.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/object_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectID_object_id
{
public:
  Init_ObjectID_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::ObjectID object_id(::j3224_v2x_msgs::msg::ObjectID::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::ObjectID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::ObjectID>()
{
  return j3224_v2x_msgs::msg::builder::Init_ObjectID_object_id();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_ID__BUILDER_HPP_
