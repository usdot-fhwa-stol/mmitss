// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrajectoryCurvatureSpeeds_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds(_init);
}

void TrajectoryCurvatureSpeeds_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds *>(message_memory);
  typed_message->~TrajectoryCurvatureSpeeds();
}

size_t size_function__TrajectoryCurvatureSpeeds__curvatures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryCurvatureSpeeds__curvatures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryCurvatureSpeeds__curvatures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__TrajectoryCurvatureSpeeds__curvatures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryCurvatureSpeeds__speed_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryCurvatureSpeeds__speed_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryCurvatureSpeeds__speed_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__TrajectoryCurvatureSpeeds__speed_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryCurvatureSpeeds__velocity_profile(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryCurvatureSpeeds__velocity_profile(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryCurvatureSpeeds__velocity_profile(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__TrajectoryCurvatureSpeeds__velocity_profile(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryCurvatureSpeeds__tangent_headings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryCurvatureSpeeds__tangent_headings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryCurvatureSpeeds__tangent_headings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__TrajectoryCurvatureSpeeds__tangent_headings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TrajectoryCurvatureSpeeds__relative_downtrack(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrajectoryCurvatureSpeeds__relative_downtrack(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TrajectoryCurvatureSpeeds__relative_downtrack(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__TrajectoryCurvatureSpeeds__relative_downtrack(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrajectoryCurvatureSpeeds_message_member_array[9] = {
  {
    "trajectory_plan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_planning_msgs::msg::TrajectoryPlan>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, trajectory_plan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "curvatures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, curvatures),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryCurvatureSpeeds__curvatures,  // size() function pointer
    get_const_function__TrajectoryCurvatureSpeeds__curvatures,  // get_const(index) function pointer
    get_function__TrajectoryCurvatureSpeeds__curvatures,  // get(index) function pointer
    resize_function__TrajectoryCurvatureSpeeds__curvatures  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, speed_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryCurvatureSpeeds__speed_limits,  // size() function pointer
    get_const_function__TrajectoryCurvatureSpeeds__speed_limits,  // get_const(index) function pointer
    get_function__TrajectoryCurvatureSpeeds__speed_limits,  // get(index) function pointer
    resize_function__TrajectoryCurvatureSpeeds__speed_limits  // resize(index) function pointer
  },
  {
    "velocity_profile",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, velocity_profile),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryCurvatureSpeeds__velocity_profile,  // size() function pointer
    get_const_function__TrajectoryCurvatureSpeeds__velocity_profile,  // get_const(index) function pointer
    get_function__TrajectoryCurvatureSpeeds__velocity_profile,  // get(index) function pointer
    resize_function__TrajectoryCurvatureSpeeds__velocity_profile  // resize(index) function pointer
  },
  {
    "tangent_headings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, tangent_headings),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryCurvatureSpeeds__tangent_headings,  // size() function pointer
    get_const_function__TrajectoryCurvatureSpeeds__tangent_headings,  // get_const(index) function pointer
    get_function__TrajectoryCurvatureSpeeds__tangent_headings,  // get(index) function pointer
    resize_function__TrajectoryCurvatureSpeeds__tangent_headings  // resize(index) function pointer
  },
  {
    "relative_downtrack",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, relative_downtrack),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrajectoryCurvatureSpeeds__relative_downtrack,  // size() function pointer
    get_const_function__TrajectoryCurvatureSpeeds__relative_downtrack,  // get_const(index) function pointer
    get_function__TrajectoryCurvatureSpeeds__relative_downtrack,  // get(index) function pointer
    resize_function__TrajectoryCurvatureSpeeds__relative_downtrack  // resize(index) function pointer
  },
  {
    "lat_accel_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, lat_accel_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lon_accel_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, lon_accel_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "starting_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_planning_msgs::msg::VehicleState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds, starting_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrajectoryCurvatureSpeeds_message_members = {
  "carma_debug_ros2_msgs::msg",  // message namespace
  "TrajectoryCurvatureSpeeds",  // message name
  9,  // number of fields
  sizeof(carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds),
  TrajectoryCurvatureSpeeds_message_member_array,  // message members
  TrajectoryCurvatureSpeeds_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryCurvatureSpeeds_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrajectoryCurvatureSpeeds_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrajectoryCurvatureSpeeds_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_debug_ros2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds>()
{
  return &::carma_debug_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectoryCurvatureSpeeds_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_debug_ros2_msgs, msg, TrajectoryCurvatureSpeeds)() {
  return &::carma_debug_ros2_msgs::msg::rosidl_typesupport_introspection_cpp::TrajectoryCurvatureSpeeds_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
