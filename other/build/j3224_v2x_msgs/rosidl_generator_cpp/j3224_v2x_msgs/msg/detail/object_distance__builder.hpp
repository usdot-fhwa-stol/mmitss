// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/object_distance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectDistance_object_distance
{
public:
  Init_ObjectDistance_object_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::ObjectDistance object_distance(::j3224_v2x_msgs::msg::ObjectDistance::_object_distance_type arg)
  {
    msg_.object_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::ObjectDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::ObjectDistance>()
{
  return j3224_v2x_msgs::msg::builder::Init_ObjectDistance_object_distance();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__OBJECT_DISTANCE__BUILDER_HPP_
