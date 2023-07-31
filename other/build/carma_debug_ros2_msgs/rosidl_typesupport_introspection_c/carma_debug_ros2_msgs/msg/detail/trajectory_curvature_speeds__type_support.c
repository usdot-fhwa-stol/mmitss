// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__rosidl_typesupport_introspection_c.h"
#include "carma_debug_ros2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__functions.h"
#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__struct.h"


// Include directives for member types
// Member `trajectory_plan`
#include "carma_planning_msgs/msg/trajectory_plan.h"
// Member `trajectory_plan`
#include "carma_planning_msgs/msg/detail/trajectory_plan__rosidl_typesupport_introspection_c.h"
// Member `curvatures`
// Member `speed_limits`
// Member `velocity_profile`
// Member `tangent_headings`
// Member `relative_downtrack`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `starting_state`
#include "carma_planning_msgs/msg/vehicle_state.h"
// Member `starting_state`
#include "carma_planning_msgs/msg/detail/vehicle_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__init(message_memory);
}

void TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_fini_function(void * message_memory)
{
  carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_member_array[9] = {
  {
    "trajectory_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, trajectory_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curvatures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, curvatures),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, speed_limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_profile",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, velocity_profile),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tangent_headings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, tangent_headings),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_downtrack",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, relative_downtrack),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat_accel_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, lat_accel_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon_accel_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, lon_accel_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "starting_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds, starting_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_members = {
  "carma_debug_ros2_msgs__msg",  // message namespace
  "TrajectoryCurvatureSpeeds",  // message name
  9,  // number of fields
  sizeof(carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds),
  TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_member_array,  // message members
  TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_type_support_handle = {
  0,
  &TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_debug_ros2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_debug_ros2_msgs, msg, TrajectoryCurvatureSpeeds)() {
  TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, TrajectoryPlan)();
  TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, VehicleState)();
  if (!TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_type_support_handle.typesupport_identifier) {
    TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryCurvatureSpeeds__rosidl_typesupport_introspection_c__TrajectoryCurvatureSpeeds_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
