// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/SensorDataSharingMessage.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/sensor_data_sharing_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorDataSharingMessage_ref_pos_el_conf
{
public:
  explicit Init_SensorDataSharingMessage_ref_pos_el_conf(::j3224_v2x_msgs::msg::SensorDataSharingMessage & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage ref_pos_el_conf(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_ref_pos_el_conf_type arg)
  {
    msg_.ref_pos_el_conf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

class Init_SensorDataSharingMessage_presence_vector
{
public:
  explicit Init_SensorDataSharingMessage_presence_vector(::j3224_v2x_msgs::msg::SensorDataSharingMessage & msg)
  : msg_(msg)
  {}
  Init_SensorDataSharingMessage_ref_pos_el_conf presence_vector(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_SensorDataSharingMessage_ref_pos_el_conf(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

class Init_SensorDataSharingMessage_objects
{
public:
  explicit Init_SensorDataSharingMessage_objects(::j3224_v2x_msgs::msg::SensorDataSharingMessage & msg)
  : msg_(msg)
  {}
  Init_SensorDataSharingMessage_presence_vector objects(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return Init_SensorDataSharingMessage_presence_vector(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

class Init_SensorDataSharingMessage_ref_pos_xy_conf
{
public:
  explicit Init_SensorDataSharingMessage_ref_pos_xy_conf(::j3224_v2x_msgs::msg::SensorDataSharingMessage & msg)
  : msg_(msg)
  {}
  Init_SensorDataSharingMessage_objects ref_pos_xy_conf(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_ref_pos_xy_conf_type arg)
  {
    msg_.ref_pos_xy_conf = std::move(arg);
    return Init_SensorDataSharingMessage_objects(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

class Init_SensorDataSharingMessage_ref_pos
{
public:
  explicit Init_SensorDataSharingMessage_ref_pos(::j3224_v2x_msgs::msg::SensorDataSharingMessage & msg)
  : msg_(msg)
  {}
  Init_SensorDataSharingMessage_ref_pos_xy_conf ref_pos(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_ref_pos_type arg)
  {
    msg_.ref_pos = std::move(arg);
    return Init_SensorDataSharingMessage_ref_pos_xy_conf(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

class Init_SensorDataSharingMessage_sdsm_time_stamp
{
public:
  explicit Init_SensorDataSharingMessage_sdsm_time_stamp(::j3224_v2x_msgs::msg::SensorDataSharingMessage & msg)
  : msg_(msg)
  {}
  Init_SensorDataSharingMessage_ref_pos sdsm_time_stamp(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_sdsm_time_stamp_type arg)
  {
    msg_.sdsm_time_stamp = std::move(arg);
    return Init_SensorDataSharingMessage_ref_pos(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

class Init_SensorDataSharingMessage_equipment_type
{
public:
  explicit Init_SensorDataSharingMessage_equipment_type(::j3224_v2x_msgs::msg::SensorDataSharingMessage & msg)
  : msg_(msg)
  {}
  Init_SensorDataSharingMessage_sdsm_time_stamp equipment_type(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_equipment_type_type arg)
  {
    msg_.equipment_type = std::move(arg);
    return Init_SensorDataSharingMessage_sdsm_time_stamp(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

class Init_SensorDataSharingMessage_source_id
{
public:
  explicit Init_SensorDataSharingMessage_source_id(::j3224_v2x_msgs::msg::SensorDataSharingMessage & msg)
  : msg_(msg)
  {}
  Init_SensorDataSharingMessage_equipment_type source_id(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return Init_SensorDataSharingMessage_equipment_type(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

class Init_SensorDataSharingMessage_msg_cnt
{
public:
  Init_SensorDataSharingMessage_msg_cnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorDataSharingMessage_source_id msg_cnt(::j3224_v2x_msgs::msg::SensorDataSharingMessage::_msg_cnt_type arg)
  {
    msg_.msg_cnt = std::move(arg);
    return Init_SensorDataSharingMessage_source_id(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::SensorDataSharingMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::SensorDataSharingMessage>()
{
  return j3224_v2x_msgs::msg::builder::Init_SensorDataSharingMessage_msg_cnt();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__BUILDER_HPP_
