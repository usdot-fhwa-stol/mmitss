// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_detail__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlDetail_minplatoonhdwy
{
public:
  explicit Init_TrafficControlDetail_minplatoonhdwy(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TrafficControlDetail minplatoonhdwy(::carma_v2x_msgs::msg::TrafficControlDetail::_minplatoonhdwy_type arg)
  {
    msg_.minplatoonhdwy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_maxplatoonsize
{
public:
  explicit Init_TrafficControlDetail_maxplatoonsize(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_minplatoonhdwy maxplatoonsize(::carma_v2x_msgs::msg::TrafficControlDetail::_maxplatoonsize_type arg)
  {
    msg_.maxplatoonsize = std::move(arg);
    return Init_TrafficControlDetail_minplatoonhdwy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_minvehocc
{
public:
  explicit Init_TrafficControlDetail_minvehocc(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_maxplatoonsize minvehocc(::carma_v2x_msgs::msg::TrafficControlDetail::_minvehocc_type arg)
  {
    msg_.minvehocc = std::move(arg);
    return Init_TrafficControlDetail_maxplatoonsize(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_maxvehaxles
{
public:
  explicit Init_TrafficControlDetail_maxvehaxles(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_minvehocc maxvehaxles(::carma_v2x_msgs::msg::TrafficControlDetail::_maxvehaxles_type arg)
  {
    msg_.maxvehaxles = std::move(arg);
    return Init_TrafficControlDetail_minvehocc(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_maxvehlength
{
public:
  explicit Init_TrafficControlDetail_maxvehlength(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_maxvehaxles maxvehlength(::carma_v2x_msgs::msg::TrafficControlDetail::_maxvehlength_type arg)
  {
    msg_.maxvehlength = std::move(arg);
    return Init_TrafficControlDetail_maxvehaxles(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_maxvehwidth
{
public:
  explicit Init_TrafficControlDetail_maxvehwidth(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_maxvehlength maxvehwidth(::carma_v2x_msgs::msg::TrafficControlDetail::_maxvehwidth_type arg)
  {
    msg_.maxvehwidth = std::move(arg);
    return Init_TrafficControlDetail_maxvehlength(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_maxvehheight
{
public:
  explicit Init_TrafficControlDetail_maxvehheight(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_maxvehwidth maxvehheight(::carma_v2x_msgs::msg::TrafficControlDetail::_maxvehheight_type arg)
  {
    msg_.maxvehheight = std::move(arg);
    return Init_TrafficControlDetail_maxvehwidth(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_maxvehmass
{
public:
  explicit Init_TrafficControlDetail_maxvehmass(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_maxvehheight maxvehmass(::carma_v2x_msgs::msg::TrafficControlDetail::_maxvehmass_type arg)
  {
    msg_.maxvehmass = std::move(arg);
    return Init_TrafficControlDetail_maxvehheight(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_minhdwy
{
public:
  explicit Init_TrafficControlDetail_minhdwy(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_maxvehmass minhdwy(::carma_v2x_msgs::msg::TrafficControlDetail::_minhdwy_type arg)
  {
    msg_.minhdwy = std::move(arg);
    return Init_TrafficControlDetail_maxvehmass(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_maxspeed
{
public:
  explicit Init_TrafficControlDetail_maxspeed(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_minhdwy maxspeed(::carma_v2x_msgs::msg::TrafficControlDetail::_maxspeed_type arg)
  {
    msg_.maxspeed = std::move(arg);
    return Init_TrafficControlDetail_minhdwy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_minspeed
{
public:
  explicit Init_TrafficControlDetail_minspeed(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_maxspeed minspeed(::carma_v2x_msgs::msg::TrafficControlDetail::_minspeed_type arg)
  {
    msg_.minspeed = std::move(arg);
    return Init_TrafficControlDetail_maxspeed(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_parking
{
public:
  explicit Init_TrafficControlDetail_parking(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_minspeed parking(::carma_v2x_msgs::msg::TrafficControlDetail::_parking_type arg)
  {
    msg_.parking = std::move(arg);
    return Init_TrafficControlDetail_minspeed(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_latperm
{
public:
  explicit Init_TrafficControlDetail_latperm(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_parking latperm(::carma_v2x_msgs::msg::TrafficControlDetail::_latperm_type arg)
  {
    msg_.latperm = std::move(arg);
    return Init_TrafficControlDetail_parking(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_lataffinity
{
public:
  explicit Init_TrafficControlDetail_lataffinity(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_latperm lataffinity(::carma_v2x_msgs::msg::TrafficControlDetail::_lataffinity_type arg)
  {
    msg_.lataffinity = std::move(arg);
    return Init_TrafficControlDetail_latperm(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_direction
{
public:
  explicit Init_TrafficControlDetail_direction(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_lataffinity direction(::carma_v2x_msgs::msg::TrafficControlDetail::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_TrafficControlDetail_lataffinity(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_chains
{
public:
  explicit Init_TrafficControlDetail_chains(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_direction chains(::carma_v2x_msgs::msg::TrafficControlDetail::_chains_type arg)
  {
    msg_.chains = std::move(arg);
    return Init_TrafficControlDetail_direction(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_closed
{
public:
  explicit Init_TrafficControlDetail_closed(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_chains closed(::carma_v2x_msgs::msg::TrafficControlDetail::_closed_type arg)
  {
    msg_.closed = std::move(arg);
    return Init_TrafficControlDetail_chains(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_signal
{
public:
  explicit Init_TrafficControlDetail_signal(::carma_v2x_msgs::msg::TrafficControlDetail & msg)
  : msg_(msg)
  {}
  Init_TrafficControlDetail_closed signal(::carma_v2x_msgs::msg::TrafficControlDetail::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return Init_TrafficControlDetail_closed(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

class Init_TrafficControlDetail_choice
{
public:
  Init_TrafficControlDetail_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlDetail_signal choice(::carma_v2x_msgs::msg::TrafficControlDetail::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_TrafficControlDetail_signal(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrafficControlDetail msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrafficControlDetail>()
{
  return carma_v2x_msgs::msg::builder::Init_TrafficControlDetail_choice();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__BUILDER_HPP_
