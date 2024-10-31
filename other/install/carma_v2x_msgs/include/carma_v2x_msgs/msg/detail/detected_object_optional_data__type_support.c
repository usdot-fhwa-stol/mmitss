// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__functions.h"
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__struct.h"


// Include directives for member types
// Member `det_veh`
#include "carma_v2x_msgs/msg/detected_vehicle_data.h"
// Member `det_veh`
#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__rosidl_typesupport_introspection_c.h"
// Member `det_vru`
#include "carma_v2x_msgs/msg/detected_vru_data.h"
// Member `det_vru`
#include "carma_v2x_msgs/msg/detail/detected_vru_data__rosidl_typesupport_introspection_c.h"
// Member `det_obst`
#include "carma_v2x_msgs/msg/detected_obstacle_data.h"
// Member `det_obst`
#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__DetectedObjectOptionalData__init(message_memory);
}

void DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__DetectedObjectOptionalData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_member_array[4] = {
  {
    "choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectOptionalData, choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "det_veh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectOptionalData, det_veh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "det_vru",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectOptionalData, det_vru),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "det_obst",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__DetectedObjectOptionalData, det_obst),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "DetectedObjectOptionalData",  // message name
  4,  // number of fields
  sizeof(carma_v2x_msgs__msg__DetectedObjectOptionalData),
  DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_member_array,  // message members
  DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_type_support_handle = {
  0,
  &DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedObjectOptionalData)() {
  DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedVehicleData)();
  DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedVRUData)();
  DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, DetectedObstacleData)();
  if (!DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_type_support_handle.typesupport_identifier) {
    DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectedObjectOptionalData__rosidl_typesupport_introspection_c__DetectedObjectOptionalData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
