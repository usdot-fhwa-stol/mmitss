// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/PredictedState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/predicted_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PredictedState_predicted_velocity_confidence
{
public:
  explicit Init_PredictedState_predicted_velocity_confidence(::carma_perception_msgs::msg::PredictedState & msg)
  : msg_(msg)
  {}
  ::carma_perception_msgs::msg::PredictedState predicted_velocity_confidence(::carma_perception_msgs::msg::PredictedState::_predicted_velocity_confidence_type arg)
  {
    msg_.predicted_velocity_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::PredictedState msg_;
};

class Init_PredictedState_predicted_velocity
{
public:
  explicit Init_PredictedState_predicted_velocity(::carma_perception_msgs::msg::PredictedState & msg)
  : msg_(msg)
  {}
  Init_PredictedState_predicted_velocity_confidence predicted_velocity(::carma_perception_msgs::msg::PredictedState::_predicted_velocity_type arg)
  {
    msg_.predicted_velocity = std::move(arg);
    return Init_PredictedState_predicted_velocity_confidence(msg_);
  }

private:
  ::carma_perception_msgs::msg::PredictedState msg_;
};

class Init_PredictedState_predicted_position_confidence
{
public:
  explicit Init_PredictedState_predicted_position_confidence(::carma_perception_msgs::msg::PredictedState & msg)
  : msg_(msg)
  {}
  Init_PredictedState_predicted_velocity predicted_position_confidence(::carma_perception_msgs::msg::PredictedState::_predicted_position_confidence_type arg)
  {
    msg_.predicted_position_confidence = std::move(arg);
    return Init_PredictedState_predicted_velocity(msg_);
  }

private:
  ::carma_perception_msgs::msg::PredictedState msg_;
};

class Init_PredictedState_predicted_position
{
public:
  explicit Init_PredictedState_predicted_position(::carma_perception_msgs::msg::PredictedState & msg)
  : msg_(msg)
  {}
  Init_PredictedState_predicted_position_confidence predicted_position(::carma_perception_msgs::msg::PredictedState::_predicted_position_type arg)
  {
    msg_.predicted_position = std::move(arg);
    return Init_PredictedState_predicted_position_confidence(msg_);
  }

private:
  ::carma_perception_msgs::msg::PredictedState msg_;
};

class Init_PredictedState_header
{
public:
  Init_PredictedState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictedState_predicted_position header(::carma_perception_msgs::msg::PredictedState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PredictedState_predicted_position(msg_);
  }

private:
  ::carma_perception_msgs::msg::PredictedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::PredictedState>()
{
  return carma_perception_msgs::msg::builder::Init_PredictedState_header();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__BUILDER_HPP_
