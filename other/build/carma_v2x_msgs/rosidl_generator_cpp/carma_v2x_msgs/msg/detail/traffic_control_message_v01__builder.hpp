// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_message_v01__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlMessageV01_geometry_exists
{
public:
  explicit Init_TrafficControlMessageV01_geometry_exists(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 geometry_exists(::carma_v2x_msgs::msg::TrafficControlMessageV01::_geometry_exists_type arg)
  {
    msg_.geometry_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_geometry
{
public:
  explicit Init_TrafficControlMessageV01_geometry(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_geometry_exists geometry(::carma_v2x_msgs::msg::TrafficControlMessageV01::_geometry_type arg)
  {
    msg_.geometry = std::move(arg);
    return Init_TrafficControlMessageV01_geometry_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_params_exists
{
public:
  explicit Init_TrafficControlMessageV01_params_exists(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_geometry params_exists(::carma_v2x_msgs::msg::TrafficControlMessageV01::_params_exists_type arg)
  {
    msg_.params_exists = std::move(arg);
    return Init_TrafficControlMessageV01_geometry(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_params
{
public:
  explicit Init_TrafficControlMessageV01_params(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_params_exists params(::carma_v2x_msgs::msg::TrafficControlMessageV01::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_TrafficControlMessageV01_params_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_package_exists
{
public:
  explicit Init_TrafficControlMessageV01_package_exists(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_params package_exists(::carma_v2x_msgs::msg::TrafficControlMessageV01::_package_exists_type arg)
  {
    msg_.package_exists = std::move(arg);
    return Init_TrafficControlMessageV01_params(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_package
{
public:
  explicit Init_TrafficControlMessageV01_package(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_package_exists package(::carma_v2x_msgs::msg::TrafficControlMessageV01::_package_type arg)
  {
    msg_.package = std::move(arg);
    return Init_TrafficControlMessageV01_package_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_updated
{
public:
  explicit Init_TrafficControlMessageV01_updated(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_package updated(::carma_v2x_msgs::msg::TrafficControlMessageV01::_updated_type arg)
  {
    msg_.updated = std::move(arg);
    return Init_TrafficControlMessageV01_package(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_id
{
public:
  explicit Init_TrafficControlMessageV01_id(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_updated id(::carma_v2x_msgs::msg::TrafficControlMessageV01::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrafficControlMessageV01_updated(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_msgnum
{
public:
  explicit Init_TrafficControlMessageV01_msgnum(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_id msgnum(::carma_v2x_msgs::msg::TrafficControlMessageV01::_msgnum_type arg)
  {
    msg_.msgnum = std::move(arg);
    return Init_TrafficControlMessageV01_id(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_msgtot
{
public:
  explicit Init_TrafficControlMessageV01_msgtot(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_msgnum msgtot(::carma_v2x_msgs::msg::TrafficControlMessageV01::_msgtot_type arg)
  {
    msg_.msgtot = std::move(arg);
    return Init_TrafficControlMessageV01_msgnum(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_reqseq
{
public:
  explicit Init_TrafficControlMessageV01_reqseq(::carma_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_msgtot reqseq(::carma_v2x_msgs::msg::TrafficControlMessageV01::_reqseq_type arg)
  {
    msg_.reqseq = std::move(arg);
    return Init_TrafficControlMessageV01_msgtot(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_reqid
{
public:
  Init_TrafficControlMessageV01_reqid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlMessageV01_reqseq reqid(::carma_v2x_msgs::msg::TrafficControlMessageV01::_reqid_type arg)
  {
    msg_.reqid = std::move(arg);
    return Init_TrafficControlMessageV01_reqseq(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrafficControlMessageV01>()
{
  return carma_v2x_msgs::msg::builder::Init_TrafficControlMessageV01_reqid();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__BUILDER_HPP_
