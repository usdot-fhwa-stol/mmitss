// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_planning_msgs/msg/detail/trajectory_plan__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_planning_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryPlan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_planning_msgs::msg::TrajectoryPlan(_init);
}

void TrajectoryPlan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_planning_msgs::msg::TrajectoryPlan *>(message_memory);
  typed_message->~TrajectoryPlan();
}

size_t size_function__TrajectoryPlan__trajectory_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_planning_msgs::msg::TrajectoryPlanPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryPlan__trajectory_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_planning_msgs::msg::TrajectoryPlanPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryPlan__trajectory_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_planning_msgs::msg::TrajectoryPlanPoint> *>(untyped_member);
  return &member[index];
}

void resize_function__TrajectoryPlan__trajectory_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_planning_msgs::msg::TrajectoryPlanPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryPlan_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs::msg::TrajectoryPlan, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs::msg::TrajectoryPlan, trajectory_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "initial_longitudinal_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs::msg::TrajectoryPlan, initial_longitudinal_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_planning_msgs::msg::TrajectoryPlanPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs::msg::TrajectoryPlan, trajectory_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryPlan__trajectory_points,  // size() function pointer
    get_const_function__TrajectoryPlan__trajectory_points,  // get_const(index) function pointer
    get_function__TrajectoryPlan__trajectory_points,  // get(index) function pointer
    resize_function__TrajectoryPlan__trajectory_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryPlan_message_members = {
  "carma_planning_msgs::msg",  // message namespace
  "TrajectoryPlan",  // message name
  4,  // number of fields
  sizeof(carma_planning_msgs::msg::TrajectoryPlan),
  TrajectoryPlan_message_member_array,  // message members
  TrajectoryPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryPlan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryPlan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryPlan_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::msg::TrajectoryPlan>()
{
  return &::carma_planning_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectoryPlan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_planning_msgs, msg, TrajectoryPlan)() {
  return &::carma_planning_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectoryPlan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
