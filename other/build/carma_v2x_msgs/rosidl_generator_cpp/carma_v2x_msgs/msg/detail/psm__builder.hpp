// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PSM__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PSM__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/psm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PSM_animal_type
{
public:
  explicit Init_PSM_animal_type(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::PSM animal_type(::carma_v2x_msgs::msg::PSM::_animal_type_type arg)
  {
    msg_.animal_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_attachment_radius
{
public:
  explicit Init_PSM_attachment_radius(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_animal_type attachment_radius(::carma_v2x_msgs::msg::PSM::_attachment_radius_type arg)
  {
    msg_.attachment_radius = std::move(arg);
    return Init_PSM_animal_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_attachment
{
public:
  explicit Init_PSM_attachment(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_attachment_radius attachment(::carma_v2x_msgs::msg::PSM::_attachment_type arg)
  {
    msg_.attachment = std::move(arg);
    return Init_PSM_attachment_radius(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_sizing
{
public:
  explicit Init_PSM_sizing(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_attachment sizing(::carma_v2x_msgs::msg::PSM::_sizing_type arg)
  {
    msg_.sizing = std::move(arg);
    return Init_PSM_attachment(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_assist_type
{
public:
  explicit Init_PSM_assist_type(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_sizing assist_type(::carma_v2x_msgs::msg::PSM::_assist_type_type arg)
  {
    msg_.assist_type = std::move(arg);
    return Init_PSM_sizing(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_activity_sub_type
{
public:
  explicit Init_PSM_activity_sub_type(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_assist_type activity_sub_type(::carma_v2x_msgs::msg::PSM::_activity_sub_type_type arg)
  {
    msg_.activity_sub_type = std::move(arg);
    return Init_PSM_assist_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_activity_type
{
public:
  explicit Init_PSM_activity_type(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_activity_sub_type activity_type(::carma_v2x_msgs::msg::PSM::_activity_type_type arg)
  {
    msg_.activity_type = std::move(arg);
    return Init_PSM_activity_sub_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_event_responder_type
{
public:
  explicit Init_PSM_event_responder_type(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_activity_type event_responder_type(::carma_v2x_msgs::msg::PSM::_event_responder_type_type arg)
  {
    msg_.event_responder_type = std::move(arg);
    return Init_PSM_activity_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_cluster_radius
{
public:
  explicit Init_PSM_cluster_radius(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_event_responder_type cluster_radius(::carma_v2x_msgs::msg::PSM::_cluster_radius_type arg)
  {
    msg_.cluster_radius = std::move(arg);
    return Init_PSM_event_responder_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_cluster_size
{
public:
  explicit Init_PSM_cluster_size(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_cluster_radius cluster_size(::carma_v2x_msgs::msg::PSM::_cluster_size_type arg)
  {
    msg_.cluster_size = std::move(arg);
    return Init_PSM_cluster_radius(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_cross_state
{
public:
  explicit Init_PSM_cross_state(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_cluster_size cross_state(::carma_v2x_msgs::msg::PSM::_cross_state_type arg)
  {
    msg_.cross_state = std::move(arg);
    return Init_PSM_cluster_size(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_cross_request
{
public:
  explicit Init_PSM_cross_request(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_cross_state cross_request(::carma_v2x_msgs::msg::PSM::_cross_request_type arg)
  {
    msg_.cross_request = std::move(arg);
    return Init_PSM_cross_state(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_use_state
{
public:
  explicit Init_PSM_use_state(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_cross_request use_state(::carma_v2x_msgs::msg::PSM::_use_state_type arg)
  {
    msg_.use_state = std::move(arg);
    return Init_PSM_cross_request(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_propulsion
{
public:
  explicit Init_PSM_propulsion(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_use_state propulsion(::carma_v2x_msgs::msg::PSM::_propulsion_type arg)
  {
    msg_.propulsion = std::move(arg);
    return Init_PSM_use_state(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_path_prediction
{
public:
  explicit Init_PSM_path_prediction(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_propulsion path_prediction(::carma_v2x_msgs::msg::PSM::_path_prediction_type arg)
  {
    msg_.path_prediction = std::move(arg);
    return Init_PSM_propulsion(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_path_history
{
public:
  explicit Init_PSM_path_history(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_path_prediction path_history(::carma_v2x_msgs::msg::PSM::_path_history_type arg)
  {
    msg_.path_history = std::move(arg);
    return Init_PSM_path_prediction(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_accel_set
{
public:
  explicit Init_PSM_accel_set(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_path_history accel_set(::carma_v2x_msgs::msg::PSM::_accel_set_type arg)
  {
    msg_.accel_set = std::move(arg);
    return Init_PSM_path_history(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_heading
{
public:
  explicit Init_PSM_heading(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_accel_set heading(::carma_v2x_msgs::msg::PSM::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_PSM_accel_set(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_speed
{
public:
  explicit Init_PSM_speed(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_heading speed(::carma_v2x_msgs::msg::PSM::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_PSM_heading(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_accuracy
{
public:
  explicit Init_PSM_accuracy(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_speed accuracy(::carma_v2x_msgs::msg::PSM::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_PSM_speed(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_position
{
public:
  explicit Init_PSM_position(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_accuracy position(::carma_v2x_msgs::msg::PSM::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PSM_accuracy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_id
{
public:
  explicit Init_PSM_id(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_position id(::carma_v2x_msgs::msg::PSM::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PSM_position(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_msg_cnt
{
public:
  explicit Init_PSM_msg_cnt(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_id msg_cnt(::carma_v2x_msgs::msg::PSM::_msg_cnt_type arg)
  {
    msg_.msg_cnt = std::move(arg);
    return Init_PSM_id(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_sec_mark
{
public:
  explicit Init_PSM_sec_mark(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_msg_cnt sec_mark(::carma_v2x_msgs::msg::PSM::_sec_mark_type arg)
  {
    msg_.sec_mark = std::move(arg);
    return Init_PSM_msg_cnt(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_basic_type
{
public:
  explicit Init_PSM_basic_type(::carma_v2x_msgs::msg::PSM & msg)
  : msg_(msg)
  {}
  Init_PSM_sec_mark basic_type(::carma_v2x_msgs::msg::PSM::_basic_type_type arg)
  {
    msg_.basic_type = std::move(arg);
    return Init_PSM_sec_mark(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

class Init_PSM_presence_vector
{
public:
  Init_PSM_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PSM_basic_type presence_vector(::carma_v2x_msgs::msg::PSM::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_PSM_basic_type(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PSM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::PSM>()
{
  return carma_v2x_msgs::msg::builder::Init_PSM_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PSM__BUILDER_HPP_
