// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedObjectCommonData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/detected_object_common_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectCommonData_acc_cfd_yaw
{
public:
  explicit Init_DetectedObjectCommonData_acc_cfd_yaw(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData acc_cfd_yaw(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_acc_cfd_yaw_type arg)
  {
    msg_.acc_cfd_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_acc_cfd_z
{
public:
  explicit Init_DetectedObjectCommonData_acc_cfd_z(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_acc_cfd_yaw acc_cfd_z(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_acc_cfd_z_type arg)
  {
    msg_.acc_cfd_z = std::move(arg);
    return Init_DetectedObjectCommonData_acc_cfd_yaw(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_acc_cfd_y
{
public:
  explicit Init_DetectedObjectCommonData_acc_cfd_y(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_acc_cfd_z acc_cfd_y(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_acc_cfd_y_type arg)
  {
    msg_.acc_cfd_y = std::move(arg);
    return Init_DetectedObjectCommonData_acc_cfd_z(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_acc_cfd_x
{
public:
  explicit Init_DetectedObjectCommonData_acc_cfd_x(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_acc_cfd_y acc_cfd_x(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_acc_cfd_x_type arg)
  {
    msg_.acc_cfd_x = std::move(arg);
    return Init_DetectedObjectCommonData_acc_cfd_y(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_accel_4_way
{
public:
  explicit Init_DetectedObjectCommonData_accel_4_way(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_acc_cfd_x accel_4_way(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_accel_4_way_type arg)
  {
    msg_.accel_4_way = std::move(arg);
    return Init_DetectedObjectCommonData_acc_cfd_x(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_speed_confidence_z
{
public:
  explicit Init_DetectedObjectCommonData_speed_confidence_z(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_accel_4_way speed_confidence_z(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_speed_confidence_z_type arg)
  {
    msg_.speed_confidence_z = std::move(arg);
    return Init_DetectedObjectCommonData_accel_4_way(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_speed_z
{
public:
  explicit Init_DetectedObjectCommonData_speed_z(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_speed_confidence_z speed_z(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_speed_z_type arg)
  {
    msg_.speed_z = std::move(arg);
    return Init_DetectedObjectCommonData_speed_confidence_z(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_presence_vector
{
public:
  explicit Init_DetectedObjectCommonData_presence_vector(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_speed_z presence_vector(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_DetectedObjectCommonData_speed_z(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_heading_conf
{
public:
  explicit Init_DetectedObjectCommonData_heading_conf(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_presence_vector heading_conf(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_heading_conf_type arg)
  {
    msg_.heading_conf = std::move(arg);
    return Init_DetectedObjectCommonData_presence_vector(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_heading
{
public:
  explicit Init_DetectedObjectCommonData_heading(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_heading_conf heading(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_DetectedObjectCommonData_heading_conf(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_speed_confidence
{
public:
  explicit Init_DetectedObjectCommonData_speed_confidence(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_heading speed_confidence(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_speed_confidence_type arg)
  {
    msg_.speed_confidence = std::move(arg);
    return Init_DetectedObjectCommonData_heading(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_speed
{
public:
  explicit Init_DetectedObjectCommonData_speed(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_speed_confidence speed(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_DetectedObjectCommonData_speed_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_pos_confidence
{
public:
  explicit Init_DetectedObjectCommonData_pos_confidence(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_speed pos_confidence(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_pos_confidence_type arg)
  {
    msg_.pos_confidence = std::move(arg);
    return Init_DetectedObjectCommonData_speed(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_pos
{
public:
  explicit Init_DetectedObjectCommonData_pos(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_pos_confidence pos(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_DetectedObjectCommonData_pos_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_time_confidence
{
public:
  explicit Init_DetectedObjectCommonData_time_confidence(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_pos time_confidence(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_time_confidence_type arg)
  {
    msg_.time_confidence = std::move(arg);
    return Init_DetectedObjectCommonData_pos(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_measurement_time
{
public:
  explicit Init_DetectedObjectCommonData_measurement_time(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_time_confidence measurement_time(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_measurement_time_type arg)
  {
    msg_.measurement_time = std::move(arg);
    return Init_DetectedObjectCommonData_time_confidence(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_detected_id
{
public:
  explicit Init_DetectedObjectCommonData_detected_id(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_measurement_time detected_id(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_detected_id_type arg)
  {
    msg_.detected_id = std::move(arg);
    return Init_DetectedObjectCommonData_measurement_time(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_obj_type_cfd
{
public:
  explicit Init_DetectedObjectCommonData_obj_type_cfd(::j3224_v2x_msgs::msg::DetectedObjectCommonData & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectCommonData_detected_id obj_type_cfd(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_obj_type_cfd_type arg)
  {
    msg_.obj_type_cfd = std::move(arg);
    return Init_DetectedObjectCommonData_detected_id(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

class Init_DetectedObjectCommonData_obj_type
{
public:
  Init_DetectedObjectCommonData_obj_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectCommonData_obj_type_cfd obj_type(::j3224_v2x_msgs::msg::DetectedObjectCommonData::_obj_type_type arg)
  {
    msg_.obj_type = std::move(arg);
    return Init_DetectedObjectCommonData_obj_type_cfd(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::DetectedObjectCommonData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::DetectedObjectCommonData>()
{
  return j3224_v2x_msgs::msg::builder::Init_DetectedObjectCommonData_obj_type();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__BUILDER_HPP_
