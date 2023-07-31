// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/bsm_core_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BSMCoreData_size
{
public:
  explicit Init_BSMCoreData_size(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::BSMCoreData size(::carma_v2x_msgs::msg::BSMCoreData::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_brakes
{
public:
  explicit Init_BSMCoreData_brakes(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_size brakes(::carma_v2x_msgs::msg::BSMCoreData::_brakes_type arg)
  {
    msg_.brakes = std::move(arg);
    return Init_BSMCoreData_size(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_accel_set
{
public:
  explicit Init_BSMCoreData_accel_set(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_brakes accel_set(::carma_v2x_msgs::msg::BSMCoreData::_accel_set_type arg)
  {
    msg_.accel_set = std::move(arg);
    return Init_BSMCoreData_brakes(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_angle
{
public:
  explicit Init_BSMCoreData_angle(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_accel_set angle(::carma_v2x_msgs::msg::BSMCoreData::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_BSMCoreData_accel_set(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_heading
{
public:
  explicit Init_BSMCoreData_heading(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_angle heading(::carma_v2x_msgs::msg::BSMCoreData::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_BSMCoreData_angle(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_speed
{
public:
  explicit Init_BSMCoreData_speed(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_heading speed(::carma_v2x_msgs::msg::BSMCoreData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_BSMCoreData_heading(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_transmission
{
public:
  explicit Init_BSMCoreData_transmission(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_speed transmission(::carma_v2x_msgs::msg::BSMCoreData::_transmission_type arg)
  {
    msg_.transmission = std::move(arg);
    return Init_BSMCoreData_speed(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_accuracy
{
public:
  explicit Init_BSMCoreData_accuracy(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_transmission accuracy(::carma_v2x_msgs::msg::BSMCoreData::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_BSMCoreData_transmission(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_elev
{
public:
  explicit Init_BSMCoreData_elev(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_accuracy elev(::carma_v2x_msgs::msg::BSMCoreData::_elev_type arg)
  {
    msg_.elev = std::move(arg);
    return Init_BSMCoreData_accuracy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_longitude
{
public:
  explicit Init_BSMCoreData_longitude(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_elev longitude(::carma_v2x_msgs::msg::BSMCoreData::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_BSMCoreData_elev(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_latitude
{
public:
  explicit Init_BSMCoreData_latitude(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_longitude latitude(::carma_v2x_msgs::msg::BSMCoreData::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_BSMCoreData_longitude(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_sec_mark
{
public:
  explicit Init_BSMCoreData_sec_mark(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_latitude sec_mark(::carma_v2x_msgs::msg::BSMCoreData::_sec_mark_type arg)
  {
    msg_.sec_mark = std::move(arg);
    return Init_BSMCoreData_latitude(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_presence_vector
{
public:
  explicit Init_BSMCoreData_presence_vector(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_sec_mark presence_vector(::carma_v2x_msgs::msg::BSMCoreData::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_BSMCoreData_sec_mark(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_id
{
public:
  explicit Init_BSMCoreData_id(::carma_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_presence_vector id(::carma_v2x_msgs::msg::BSMCoreData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BSMCoreData_presence_vector(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_msg_count
{
public:
  Init_BSMCoreData_msg_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSMCoreData_id msg_count(::carma_v2x_msgs::msg::BSMCoreData::_msg_count_type arg)
  {
    msg_.msg_count = std::move(arg);
    return Init_BSMCoreData_id(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMCoreData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::BSMCoreData>()
{
  return carma_v2x_msgs::msg::builder::Init_BSMCoreData_msg_count();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_
