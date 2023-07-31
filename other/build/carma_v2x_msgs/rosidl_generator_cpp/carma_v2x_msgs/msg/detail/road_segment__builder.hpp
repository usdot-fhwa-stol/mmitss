// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/road_segment__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadSegment_road_lane_set_list
{
public:
  explicit Init_RoadSegment_road_lane_set_list(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::RoadSegment road_lane_set_list(::carma_v2x_msgs::msg::RoadSegment::_road_lane_set_list_type arg)
  {
    msg_.road_lane_set_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_speed_limits_exists
{
public:
  explicit Init_RoadSegment_speed_limits_exists(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_road_lane_set_list speed_limits_exists(::carma_v2x_msgs::msg::RoadSegment::_speed_limits_exists_type arg)
  {
    msg_.speed_limits_exists = std::move(arg);
    return Init_RoadSegment_road_lane_set_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_speed_limits
{
public:
  explicit Init_RoadSegment_speed_limits(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_speed_limits_exists speed_limits(::carma_v2x_msgs::msg::RoadSegment::_speed_limits_type arg)
  {
    msg_.speed_limits = std::move(arg);
    return Init_RoadSegment_speed_limits_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_lane_width_exists
{
public:
  explicit Init_RoadSegment_lane_width_exists(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_speed_limits lane_width_exists(::carma_v2x_msgs::msg::RoadSegment::_lane_width_exists_type arg)
  {
    msg_.lane_width_exists = std::move(arg);
    return Init_RoadSegment_speed_limits(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_lane_width
{
public:
  explicit Init_RoadSegment_lane_width(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_lane_width_exists lane_width(::carma_v2x_msgs::msg::RoadSegment::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_RoadSegment_lane_width_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_ref_point
{
public:
  explicit Init_RoadSegment_ref_point(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_lane_width ref_point(::carma_v2x_msgs::msg::RoadSegment::_ref_point_type arg)
  {
    msg_.ref_point = std::move(arg);
    return Init_RoadSegment_lane_width(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_revision
{
public:
  explicit Init_RoadSegment_revision(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_ref_point revision(::carma_v2x_msgs::msg::RoadSegment::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_RoadSegment_ref_point(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_id
{
public:
  explicit Init_RoadSegment_id(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_revision id(::carma_v2x_msgs::msg::RoadSegment::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RoadSegment_revision(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_name_exists
{
public:
  explicit Init_RoadSegment_name_exists(::carma_v2x_msgs::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_id name_exists(::carma_v2x_msgs::msg::RoadSegment::_name_exists_type arg)
  {
    msg_.name_exists = std::move(arg);
    return Init_RoadSegment_id(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

class Init_RoadSegment_name
{
public:
  Init_RoadSegment_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadSegment_name_exists name(::carma_v2x_msgs::msg::RoadSegment::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RoadSegment_name_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::RoadSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::RoadSegment>()
{
  return carma_v2x_msgs::msg::builder::Init_RoadSegment_name();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__BUILDER_HPP_
