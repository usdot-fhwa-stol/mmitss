// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:msg/ManeuverParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/msg/detail/maneuver_parameters__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/msg/detail/maneuver_parameters__functions.h"
#include "carma_planning_msgs/msg/detail/maneuver_parameters__struct.h"


// Include directives for member types
// Member `maneuver_id`
// Member `planning_strategic_plugin`
// Member `planning_tactical_plugin`
// Member `string_valued_meta_data`
#include "rosidl_runtime_c/string_functions.h"
// Member `bool_valued_meta_data`
// Member `int_valued_meta_data`
// Member `float_valued_meta_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_valued_meta_data`
#include "builtin_interfaces/msg/time.h"
// Member `time_valued_meta_data`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__msg__ManeuverParameters__init(message_memory);
}

void ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_fini_function(void * message_memory)
{
  carma_planning_msgs__msg__ManeuverParameters__fini(message_memory);
}

size_t ManeuverParameters__rosidl_typesupport_introspection_c__size_function__Time__time_valued_meta_data(
  const void * untyped_member)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return member->size;
}

const void * ManeuverParameters__rosidl_typesupport_introspection_c__get_const_function__Time__time_valued_meta_data(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Time__Sequence * member =
    (const builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ManeuverParameters__rosidl_typesupport_introspection_c__get_function__Time__time_valued_meta_data(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ManeuverParameters__rosidl_typesupport_introspection_c__resize_function__Time__time_valued_meta_data(
  void * untyped_member, size_t size)
{
  builtin_interfaces__msg__Time__Sequence * member =
    (builtin_interfaces__msg__Time__Sequence *)(untyped_member);
  builtin_interfaces__msg__Time__Sequence__fini(member);
  return builtin_interfaces__msg__Time__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_member_array[10] = {
  {
    "maneuver_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, maneuver_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "negotiation_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, negotiation_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_strategic_plugin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, planning_strategic_plugin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_tactical_plugin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, planning_tactical_plugin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bool_valued_meta_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, bool_valued_meta_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_valued_meta_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, int_valued_meta_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_valued_meta_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, float_valued_meta_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_valued_meta_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, string_valued_meta_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_valued_meta_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__msg__ManeuverParameters, time_valued_meta_data),  // bytes offset in struct
    NULL,  // default value
    ManeuverParameters__rosidl_typesupport_introspection_c__size_function__Time__time_valued_meta_data,  // size() function pointer
    ManeuverParameters__rosidl_typesupport_introspection_c__get_const_function__Time__time_valued_meta_data,  // get_const(index) function pointer
    ManeuverParameters__rosidl_typesupport_introspection_c__get_function__Time__time_valued_meta_data,  // get(index) function pointer
    ManeuverParameters__rosidl_typesupport_introspection_c__resize_function__Time__time_valued_meta_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_members = {
  "carma_planning_msgs__msg",  // message namespace
  "ManeuverParameters",  // message name
  10,  // number of fields
  sizeof(carma_planning_msgs__msg__ManeuverParameters),
  ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_member_array,  // message members
  ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_type_support_handle = {
  0,
  &ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, ManeuverParameters)() {
  ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_type_support_handle.typesupport_identifier) {
    ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ManeuverParameters__rosidl_typesupport_introspection_c__ManeuverParameters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
