// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/detected_object_optional_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectOptionalData_det_obst
{
public:
  explicit Init_DetectedObjectOptionalData_det_obst(::j3224_v2x_msgs::msg::DetectedObjectOptionalData & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::DetectedObjectOptionalData det_obst(::j3224_v2x_msgs::msg::DetectedObjectOptionalData::_det_obst_type arg)
  {
    msg_.det_obst = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectOptionalData msg_;
};

class Init_DetectedObjectOptionalData_det_vru
{
public:
  explicit Init_DetectedObjectOptionalData_det_vru(::j3224_v2x_msgs::msg::DetectedObjectOptionalData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectOptionalData_det_obst det_vru(::j3224_v2x_msgs::msg::DetectedObjectOptionalData::_det_vru_type arg)
  {
    msg_.det_vru = std::move(arg);
    return Init_DetectedObjectOptionalData_det_obst(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectOptionalData msg_;
};

class Init_DetectedObjectOptionalData_det_veh
{
public:
  explicit Init_DetectedObjectOptionalData_det_veh(::j3224_v2x_msgs::msg::DetectedObjectOptionalData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectOptionalData_det_vru det_veh(::j3224_v2x_msgs::msg::DetectedObjectOptionalData::_det_veh_type arg)
  {
    msg_.det_veh = std::move(arg);
    return Init_DetectedObjectOptionalData_det_vru(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectOptionalData msg_;
};

class Init_DetectedObjectOptionalData_choice
{
public:
  Init_DetectedObjectOptionalData_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectOptionalData_det_veh choice(::j3224_v2x_msgs::msg::DetectedObjectOptionalData::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_DetectedObjectOptionalData_det_veh(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectOptionalData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::DetectedObjectOptionalData>()
{
  return j3224_v2x_msgs::msg::builder::Init_DetectedObjectOptionalData_choice();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__BUILDER_HPP_
