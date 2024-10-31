// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RoadwayObstacle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_perception_msgs::msg::RoadwayObstacle(_init);
}

void RoadwayObstacle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_perception_msgs::msg::RoadwayObstacle *>(message_memory);
  typed_message->~RoadwayObstacle();
}

size_t size_function__RoadwayObstacle__predicted_lanelet_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoadwayObstacle__predicted_lanelet_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RoadwayObstacle__predicted_lanelet_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__RoadwayObstacle__predicted_lanelet_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RoadwayObstacle__predicted_lanelet_id_confidences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoadwayObstacle__predicted_lanelet_id_confidences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RoadwayObstacle__predicted_lanelet_id_confidences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__RoadwayObstacle__predicted_lanelet_id_confidences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RoadwayObstacle__predicted_cross_tracks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoadwayObstacle__predicted_cross_tracks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RoadwayObstacle__predicted_cross_tracks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__RoadwayObstacle__predicted_cross_tracks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RoadwayObstacle__predicted_cross_track_confidences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoadwayObstacle__predicted_cross_track_confidences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RoadwayObstacle__predicted_cross_track_confidences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__RoadwayObstacle__predicted_cross_track_confidences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RoadwayObstacle__predicted_down_tracks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoadwayObstacle__predicted_down_tracks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RoadwayObstacle__predicted_down_tracks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__RoadwayObstacle__predicted_down_tracks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RoadwayObstacle__predicted_down_track_confidences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RoadwayObstacle__predicted_down_track_confidences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__RoadwayObstacle__predicted_down_track_confidences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__RoadwayObstacle__predicted_down_track_confidences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RoadwayObstacle_message_member_array[11] = {
  {
    "object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_perception_msgs::msg::ExternalObject>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, object),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "connected_vehicle_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_perception_msgs::msg::ConnectedVehicleType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, connected_vehicle_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lanelet_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, lanelet_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cross_track",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, cross_track),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "down_track",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, down_track),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "predicted_lanelet_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, predicted_lanelet_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoadwayObstacle__predicted_lanelet_ids,  // size() function pointer
    get_const_function__RoadwayObstacle__predicted_lanelet_ids,  // get_const(index) function pointer
    get_function__RoadwayObstacle__predicted_lanelet_ids,  // get(index) function pointer
    resize_function__RoadwayObstacle__predicted_lanelet_ids  // resize(index) function pointer
  },
  {
    "predicted_lanelet_id_confidences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, predicted_lanelet_id_confidences),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoadwayObstacle__predicted_lanelet_id_confidences,  // size() function pointer
    get_const_function__RoadwayObstacle__predicted_lanelet_id_confidences,  // get_const(index) function pointer
    get_function__RoadwayObstacle__predicted_lanelet_id_confidences,  // get(index) function pointer
    resize_function__RoadwayObstacle__predicted_lanelet_id_confidences  // resize(index) function pointer
  },
  {
    "predicted_cross_tracks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, predicted_cross_tracks),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoadwayObstacle__predicted_cross_tracks,  // size() function pointer
    get_const_function__RoadwayObstacle__predicted_cross_tracks,  // get_const(index) function pointer
    get_function__RoadwayObstacle__predicted_cross_tracks,  // get(index) function pointer
    resize_function__RoadwayObstacle__predicted_cross_tracks  // resize(index) function pointer
  },
  {
    "predicted_cross_track_confidences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, predicted_cross_track_confidences),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoadwayObstacle__predicted_cross_track_confidences,  // size() function pointer
    get_const_function__RoadwayObstacle__predicted_cross_track_confidences,  // get_const(index) function pointer
    get_function__RoadwayObstacle__predicted_cross_track_confidences,  // get(index) function pointer
    resize_function__RoadwayObstacle__predicted_cross_track_confidences  // resize(index) function pointer
  },
  {
    "predicted_down_tracks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, predicted_down_tracks),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoadwayObstacle__predicted_down_tracks,  // size() function pointer
    get_const_function__RoadwayObstacle__predicted_down_tracks,  // get_const(index) function pointer
    get_function__RoadwayObstacle__predicted_down_tracks,  // get(index) function pointer
    resize_function__RoadwayObstacle__predicted_down_tracks  // resize(index) function pointer
  },
  {
    "predicted_down_track_confidences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs::msg::RoadwayObstacle, predicted_down_track_confidences),  // bytes offset in struct
    nullptr,  // default value
    size_function__RoadwayObstacle__predicted_down_track_confidences,  // size() function pointer
    get_const_function__RoadwayObstacle__predicted_down_track_confidences,  // get_const(index) function pointer
    get_function__RoadwayObstacle__predicted_down_track_confidences,  // get(index) function pointer
    resize_function__RoadwayObstacle__predicted_down_track_confidences  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RoadwayObstacle_message_members = {
  "carma_perception_msgs::msg",  // message namespace
  "RoadwayObstacle",  // message name
  11,  // number of fields
  sizeof(carma_perception_msgs::msg::RoadwayObstacle),
  RoadwayObstacle_message_member_array,  // message members
  RoadwayObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  RoadwayObstacle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RoadwayObstacle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RoadwayObstacle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_perception_msgs::msg::RoadwayObstacle>()
{
  return &::carma_perception_msgs::msg::rosidl_typesupport_introspection_cpp::RoadwayObstacle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_perception_msgs, msg, RoadwayObstacle)() {
  return &::carma_perception_msgs::msg::rosidl_typesupport_introspection_cpp::RoadwayObstacle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
