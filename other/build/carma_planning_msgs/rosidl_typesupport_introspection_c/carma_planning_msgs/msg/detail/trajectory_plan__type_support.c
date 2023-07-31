// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/trajectory_plan__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/trajectory_plan__functions.h"
#include "carma_planning_msgs/msg/detail/trajectory_plan__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `trajectory_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory_points`
#include "carma_planning_msgs/msg/trajectory_plan_point.h"
// Member `trajectory_points`
#include "carma_planning_msgs/msg/detail/trajectory_plan_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__TrajectoryPlan__init(message_memory);
}

void TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__TrajectoryPlan__fini(message_memory);
}

size_t TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanPoint__trajectory_points(
  const void * untyped_member)
{
  const carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * member =
    (const carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanPoint__trajectory_points(
  const void * untyped_member, size_t index)
{
  const carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * member =
    (const carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanPoint__trajectory_points(
  void * untyped_member, size_t index)
{
  carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * member =
    (carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanPoint__trajectory_points(
  void * untyped_member, size_t size)
{
  carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence * member =
    (carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence *)(untyped_member);
  carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__fini(member);
  return carma_planning_msgs__msg__TrajectoryPlanPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlan, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlan, trajectory_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_longitudinal_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlan, initial_longitudinal_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__TrajectoryPlan, trajectory_points),  // bytes offset in struct
    NULL,  // default value
    TrajectoryPlan__rosidl_typesupport_introspection_c__size_function__TrajectoryPlanPoint__trajectory_points,  // size() function pointer
    TrajectoryPlan__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPlanPoint__trajectory_points,  // get_const(index) function pointer
    TrajectoryPlan__rosidl_typesupport_introspection_c__get_function__TrajectoryPlanPoint__trajectory_points,  // get(index) function pointer
    TrajectoryPlan__rosidl_typesupport_introspection_c__resize_function__TrajectoryPlanPoint__trajectory_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "TrajectoryPlan",  // message name
  4,  // number of fields
  sizeof(carma_planning_msgs__msg__TrajectoryPlan),
  TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_member_array,  // message members
  TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_type_support_handle = {
  0,
  &TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, TrajectoryPlan)() {
  TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, TrajectoryPlanPoint)();
  if (!TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_type_support_handle.typesupport_identifier) {
    TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryPlan__rosidl_typesupport_introspection_c__TrajectoryPlan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
