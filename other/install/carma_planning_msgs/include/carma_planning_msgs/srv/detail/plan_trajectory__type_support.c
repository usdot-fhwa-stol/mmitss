// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_planning_msgs:srv/PlanTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_planning_msgs/srv/detail/plan_trajectory__rosidl_typesupport_introspection_c.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_planning_msgs/srv/detail/plan_trajectory__functions.h"
#include "carma_planning_msgs/srv/detail/plan_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `vehicle_state`
#include "carma_planning_msgs/msg/vehicle_state.h"
// Member `vehicle_state`
#include "carma_planning_msgs/msg/detail/vehicle_state__rosidl_typesupport_introspection_c.h"
// Member `maneuver_plan`
#include "carma_planning_msgs/msg/maneuver_plan.h"
// Member `maneuver_plan`
#include "carma_planning_msgs/msg/detail/maneuver_plan__rosidl_typesupport_introspection_c.h"
// Member `initial_trajectory_plan`
#include "carma_planning_msgs/msg/trajectory_plan.h"
// Member `initial_trajectory_plan`
#include "carma_planning_msgs/msg/detail/trajectory_plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__PlanTrajectory_Request__init(message_memory);
}

void PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__PlanTrajectory_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PlanTrajectory_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PlanTrajectory_Request, vehicle_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PlanTrajectory_Request, maneuver_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_trajectory_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PlanTrajectory_Request, initial_trajectory_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_index_to_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PlanTrajectory_Request, maneuver_index_to_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "PlanTrajectory_Request",  // message name
  5,  // number of fields
  sizeof(carma_planning_msgs__srv__PlanTrajectory_Request),
  PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_member_array,  // message members
  PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_type_support_handle = {
  0,
  &PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PlanTrajectory_Request)() {
  PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, VehicleState)();
  PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, ManeuverPlan)();
  PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, TrajectoryPlan)();
  if (!PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlanTrajectory_Request__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_planning_msgs/srv/detail/plan_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plan_trajectory__functions.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plan_trajectory__struct.h"


// Include directives for member types
// Member `trajectory_plan`
// already included above
// #include "carma_planning_msgs/msg/trajectory_plan.h"
// Member `trajectory_plan`
// already included above
// #include "carma_planning_msgs/msg/detail/trajectory_plan__rosidl_typesupport_introspection_c.h"
// Member `related_maneuvers`
// Member `maneuver_status`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_planning_msgs__srv__PlanTrajectory_Response__init(message_memory);
}

void PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_fini_function(void * message_memory)
{
  carma_planning_msgs__srv__PlanTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_member_array[3] = {
  {
    "trajectory_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PlanTrajectory_Response, trajectory_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "related_maneuvers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PlanTrajectory_Response, related_maneuvers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_planning_msgs__srv__PlanTrajectory_Response, maneuver_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_members = {
  "carma_planning_msgs__srv",  // message namespace
  "PlanTrajectory_Response",  // message name
  3,  // number of fields
  sizeof(carma_planning_msgs__srv__PlanTrajectory_Response),
  PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_member_array,  // message members
  PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_type_support_handle = {
  0,
  &PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PlanTrajectory_Response)() {
  PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, msg, TrajectoryPlan)();
  if (!PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlanTrajectory_Response__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plan_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_service_members = {
  "carma_planning_msgs__srv",  // service namespace
  "PlanTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_service_type_support_handle = {
  0,
  &carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PlanTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PlanTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PlanTrajectory)() {
  if (!carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_service_type_support_handle.typesupport_identifier) {
    carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PlanTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_planning_msgs, srv, PlanTrajectory_Response)()->data;
  }

  return &carma_planning_msgs__srv__detail__plan_trajectory__rosidl_typesupport_introspection_c__PlanTrajectory_service_type_support_handle;
}
