// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/ManeuverPlan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/maneuver_plan__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/maneuver_plan__functions.h"
#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `maneuver_plan_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `planning_start_time`
// Member `planning_completion_time`
#include "builtin_interfaces/msg/time.h"
// Member `planning_start_time`
// Member `planning_completion_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `maneuvers`
#include "carma_planning_msgs/msg/maneuver.h"
// Member `maneuvers`
#include "carma_planning_msgs/msg/detail/maneuver__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__ManeuverPlan__init(message_memory);
}

void ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__ManeuverPlan__fini(message_memory);
}

size_t ManeuverPlan__rosidl_typesupport_introspection_c__size_function__Maneuver__maneuvers(
  const void * untyped_member)
{
  const carma_planning_msgs__msg__Maneuver__Sequence * member =
    (const carma_planning_msgs__msg__Maneuver__Sequence *)(untyped_member);
  return member->size;
}

const void * ManeuverPlan__rosidl_typesupport_introspection_c__get_const_function__Maneuver__maneuvers(
  const void * untyped_member, size_t index)
{
  const carma_planning_msgs__msg__Maneuver__Sequence * member =
    (const carma_planning_msgs__msg__Maneuver__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ManeuverPlan__rosidl_typesupport_introspection_c__get_function__Maneuver__maneuvers(
  void * untyped_member, size_t index)
{
  carma_planning_msgs__msg__Maneuver__Sequence * member =
    (carma_planning_msgs__msg__Maneuver__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ManeuverPlan__rosidl_typesupport_introspection_c__resize_function__Maneuver__maneuvers(
  void * untyped_member, size_t size)
{
  carma_planning_msgs__msg__Maneuver__Sequence * member =
    (carma_planning_msgs__msg__Maneuver__Sequence *)(untyped_member);
  carma_planning_msgs__msg__Maneuver__Sequence__fini(member);
  return carma_planning_msgs__msg__Maneuver__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverPlan, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_plan_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverPlan, maneuver_plan_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverPlan, planning_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_completion_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverPlan, planning_completion_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuvers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverPlan, maneuvers),  // bytes offset in struct
    NULL,  // default value
    ManeuverPlan__rosidl_typesupport_introspection_c__size_function__Maneuver__maneuvers,  // size() function pointer
    ManeuverPlan__rosidl_typesupport_introspection_c__get_const_function__Maneuver__maneuvers,  // get_const(index) function pointer
    ManeuverPlan__rosidl_typesupport_introspection_c__get_function__Maneuver__maneuvers,  // get(index) function pointer
    ManeuverPlan__rosidl_typesupport_introspection_c__resize_function__Maneuver__maneuvers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "ManeuverPlan",  // message name
  5,  // number of fields
  sizeof(carma_planning_msgs__msg__ManeuverPlan),
  ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_member_array,  // message members
  ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_type_support_handle = {
  0,
  &ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, ManeuverPlan)() {
  ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, Maneuver)();
  if (!ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_type_support_handle.typesupport_identifier) {
    ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ManeuverPlan__rosidl_typesupport_introspection_c__ManeuverPlan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
