// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AccelerationSet4Way_yaw_rate
{
public:
  explicit Init_AccelerationSet4Way_yaw_rate(::carma_v2x_msgs::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::AccelerationSet4Way yaw_rate(::carma_v2x_msgs::msg::AccelerationSet4Way::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_vert
{
public:
  explicit Init_AccelerationSet4Way_vert(::carma_v2x_msgs::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  Init_AccelerationSet4Way_yaw_rate vert(::carma_v2x_msgs::msg::AccelerationSet4Way::_vert_type arg)
  {
    msg_.vert = std::move(arg);
    return Init_AccelerationSet4Way_yaw_rate(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_lateral
{
public:
  explicit Init_AccelerationSet4Way_lateral(::carma_v2x_msgs::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  Init_AccelerationSet4Way_vert lateral(::carma_v2x_msgs::msg::AccelerationSet4Way::_lateral_type arg)
  {
    msg_.lateral = std::move(arg);
    return Init_AccelerationSet4Way_vert(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_longitudinal
{
public:
  explicit Init_AccelerationSet4Way_longitudinal(::carma_v2x_msgs::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  Init_AccelerationSet4Way_lateral longitudinal(::carma_v2x_msgs::msg::AccelerationSet4Way::_longitudinal_type arg)
  {
    msg_.longitudinal = std::move(arg);
    return Init_AccelerationSet4Way_lateral(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_presence_vector
{
public:
  Init_AccelerationSet4Way_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelerationSet4Way_longitudinal presence_vector(::carma_v2x_msgs::msg::AccelerationSet4Way::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_AccelerationSet4Way_longitudinal(msg_);
  }

private:
  ::carma_v2x_msgs::msg::AccelerationSet4Way msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::AccelerationSet4Way>()
{
  return carma_v2x_msgs::msg::builder::Init_AccelerationSet4Way_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_
