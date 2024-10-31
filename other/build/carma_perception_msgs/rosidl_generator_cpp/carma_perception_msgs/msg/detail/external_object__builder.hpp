// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/ExternalObject.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/external_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ExternalObject_predictions
{
public:
  explicit Init_ExternalObject_predictions(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  ::carma_perception_msgs::msg::ExternalObject predictions(::carma_perception_msgs::msg::ExternalObject::_predictions_type arg)
  {
    msg_.predictions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_dynamic_obj
{
public:
  explicit Init_ExternalObject_dynamic_obj(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_predictions dynamic_obj(::carma_perception_msgs::msg::ExternalObject::_dynamic_obj_type arg)
  {
    msg_.dynamic_obj = std::move(arg);
    return Init_ExternalObject_predictions(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_object_type
{
public:
  explicit Init_ExternalObject_object_type(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_dynamic_obj object_type(::carma_perception_msgs::msg::ExternalObject::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_ExternalObject_dynamic_obj(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_confidence
{
public:
  explicit Init_ExternalObject_confidence(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_object_type confidence(::carma_perception_msgs::msg::ExternalObject::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_ExternalObject_object_type(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_size
{
public:
  explicit Init_ExternalObject_size(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_confidence size(::carma_perception_msgs::msg::ExternalObject::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_ExternalObject_confidence(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_velocity_inst
{
public:
  explicit Init_ExternalObject_velocity_inst(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_size velocity_inst(::carma_perception_msgs::msg::ExternalObject::_velocity_inst_type arg)
  {
    msg_.velocity_inst = std::move(arg);
    return Init_ExternalObject_size(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_velocity
{
public:
  explicit Init_ExternalObject_velocity(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_velocity_inst velocity(::carma_perception_msgs::msg::ExternalObject::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ExternalObject_velocity_inst(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_pose
{
public:
  explicit Init_ExternalObject_pose(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_velocity pose(::carma_perception_msgs::msg::ExternalObject::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ExternalObject_velocity(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_bsm_id
{
public:
  explicit Init_ExternalObject_bsm_id(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_pose bsm_id(::carma_perception_msgs::msg::ExternalObject::_bsm_id_type arg)
  {
    msg_.bsm_id = std::move(arg);
    return Init_ExternalObject_pose(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_id
{
public:
  explicit Init_ExternalObject_id(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_bsm_id id(::carma_perception_msgs::msg::ExternalObject::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ExternalObject_bsm_id(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_presence_vector
{
public:
  explicit Init_ExternalObject_presence_vector(::carma_perception_msgs::msg::ExternalObject & msg)
  : msg_(msg)
  {}
  Init_ExternalObject_id presence_vector(::carma_perception_msgs::msg::ExternalObject::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_ExternalObject_id(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

class Init_ExternalObject_header
{
public:
  Init_ExternalObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalObject_presence_vector header(::carma_perception_msgs::msg::ExternalObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExternalObject_presence_vector(msg_);
  }

private:
  ::carma_perception_msgs::msg::ExternalObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::ExternalObject>()
{
  return carma_perception_msgs::msg::builder::Init_ExternalObject_header();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__BUILDER_HPP_
