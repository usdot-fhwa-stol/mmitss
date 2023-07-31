// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/traffic_control_schedule__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_schedule__struct.h"


// Include directives for member types
// Member `start`
// Member `end`
#include "builtin_interfaces/msg/time.h"
// Member `start`
// Member `end`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `dow`
#include "j2735_v2x_msgs/msg/day_of_week.h"
// Member `dow`
#include "j2735_v2x_msgs/msg/detail/day_of_week__rosidl_typesupport_introspection_c.h"
// Member `between`
#include "carma_v2x_msgs/msg/daily_schedule.h"
// Member `between`
#include "carma_v2x_msgs/msg/detail/daily_schedule__rosidl_typesupport_introspection_c.h"
// Member `repeat`
#include "carma_v2x_msgs/msg/repeat_params.h"
// Member `repeat`
#include "carma_v2x_msgs/msg/detail/repeat_params__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__TrafficControlSchedule__init(message_memory);
}

void TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__TrafficControlSchedule__fini(message_memory);
}

size_t TrafficControlSchedule__rosidl_typesupport_introspection_c__size_function__DailySchedule__between(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__DailySchedule__Sequence * member =
    (const carma_v2x_msgs__msg__DailySchedule__Sequence *)(untyped_member);
  return member->size;
}

const void * TrafficControlSchedule__rosidl_typesupport_introspection_c__get_const_function__DailySchedule__between(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__DailySchedule__Sequence * member =
    (const carma_v2x_msgs__msg__DailySchedule__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrafficControlSchedule__rosidl_typesupport_introspection_c__get_function__DailySchedule__between(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__DailySchedule__Sequence * member =
    (carma_v2x_msgs__msg__DailySchedule__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrafficControlSchedule__rosidl_typesupport_introspection_c__resize_function__DailySchedule__between(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__DailySchedule__Sequence * member =
    (carma_v2x_msgs__msg__DailySchedule__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__DailySchedule__Sequence__fini(member);
  return carma_v2x_msgs__msg__DailySchedule__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_member_array[9] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, end_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, dow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dow_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, dow_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "between",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, between),  // bytes offset in struct
    NULL,  // default value
    TrafficControlSchedule__rosidl_typesupport_introspection_c__size_function__DailySchedule__between,  // size() function pointer
    TrafficControlSchedule__rosidl_typesupport_introspection_c__get_const_function__DailySchedule__between,  // get_const(index) function pointer
    TrafficControlSchedule__rosidl_typesupport_introspection_c__get_function__DailySchedule__between,  // get(index) function pointer
    TrafficControlSchedule__rosidl_typesupport_introspection_c__resize_function__DailySchedule__between  // resize(index) function pointer
  },
  {
    "between_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, between_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repeat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, repeat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repeat_exists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__TrafficControlSchedule, repeat_exists),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "TrafficControlSchedule",  // message name
  9,  // number of fields
  sizeof(carma_v2x_msgs__msg__TrafficControlSchedule),
  TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_member_array,  // message members
  TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_type_support_handle = {
  0,
  &TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, TrafficControlSchedule)() {
  TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DayOfWeek)();
  TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DailySchedule)();
  TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, RepeatParams)();
  if (!TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_type_support_handle.typesupport_identifier) {
    TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficControlSchedule__rosidl_typesupport_introspection_c__TrafficControlSchedule_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
