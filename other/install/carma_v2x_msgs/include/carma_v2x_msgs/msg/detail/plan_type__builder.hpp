// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/PlanType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/plan_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanType_type
{
public:
  Init_PlanType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_v2x_msgs::msg::PlanType type(::carma_v2x_msgs::msg::PlanType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PlanType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::PlanType>()
{
  return carma_v2x_msgs::msg::builder::Init_PlanType_type();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PLAN_TYPE__BUILDER_HPP_
