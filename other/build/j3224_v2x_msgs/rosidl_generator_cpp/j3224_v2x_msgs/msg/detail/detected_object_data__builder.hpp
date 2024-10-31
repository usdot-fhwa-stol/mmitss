// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedObjectData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/detected_object_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectData_detected_object_optional_data
{
public:
  explicit Init_DetectedObjectData_detected_object_optional_data(::j3224_v2x_msgs::msg::DetectedObjectData & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::DetectedObjectData detected_object_optional_data(::j3224_v2x_msgs::msg::DetectedObjectData::_detected_object_optional_data_type arg)
  {
    msg_.detected_object_optional_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectData msg_;
};

class Init_DetectedObjectData_presence_vector
{
public:
  explicit Init_DetectedObjectData_presence_vector(::j3224_v2x_msgs::msg::DetectedObjectData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectData_detected_object_optional_data presence_vector(::j3224_v2x_msgs::msg::DetectedObjectData::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_DetectedObjectData_detected_object_optional_data(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectData msg_;
};

class Init_DetectedObjectData_detected_object_common_data
{
public:
  Init_DetectedObjectData_detected_object_common_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectData_presence_vector detected_object_common_data(::j3224_v2x_msgs::msg::DetectedObjectData::_detected_object_common_data_type arg)
  {
    msg_.detected_object_common_data = std::move(arg);
    return Init_DetectedObjectData_presence_vector(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::DetectedObjectData>()
{
  return j3224_v2x_msgs::msg::builder::Init_DetectedObjectData_detected_object_common_data();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__BUILDER_HPP_
