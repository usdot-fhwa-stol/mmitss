// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j3224_v2x_msgs:msg/DetectedVehicleData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j3224_v2x_msgs/msg/detail/detected_vehicle_data__rosidl_typesupport_introspection_c.h"
#include "j3224_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j3224_v2x_msgs/msg/detail/detected_vehicle_data__functions.h"
#include "j3224_v2x_msgs/msg/detail/detected_vehicle_data__struct.h"


// Include directives for member types
// Member `lights`
#include "j2735_v2x_msgs/msg/exterior_lights.h"
// Member `lights`
#include "j2735_v2x_msgs/msg/detail/exterior_lights__rosidl_typesupport_introspection_c.h"
// Member `veh_attitude`
#include "j3224_v2x_msgs/msg/attitude.h"
// Member `veh_attitude`
#include "j3224_v2x_msgs/msg/detail/attitude__rosidl_typesupport_introspection_c.h"
// Member `veh_attitude_confidence`
#include "j3224_v2x_msgs/msg/attitude_confidence.h"
// Member `veh_attitude_confidence`
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__rosidl_typesupport_introspection_c.h"
// Member `veh_ang_vel`
#include "j3224_v2x_msgs/msg/angular_velocity.h"
// Member `veh_ang_vel`
#include "j3224_v2x_msgs/msg/detail/angular_velocity__rosidl_typesupport_introspection_c.h"
// Member `veh_ang_vel_confidence`
#include "j3224_v2x_msgs/msg/angular_velocity_confidence.h"
// Member `veh_ang_vel_confidence`
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__rosidl_typesupport_introspection_c.h"
// Member `size`
#include "j2735_v2x_msgs/msg/vehicle_size.h"
// Member `size`
#include "j2735_v2x_msgs/msg/detail/vehicle_size__rosidl_typesupport_introspection_c.h"
// Member `height`
#include "j2735_v2x_msgs/msg/vehicle_height.h"
// Member `height`
#include "j2735_v2x_msgs/msg/detail/vehicle_height__rosidl_typesupport_introspection_c.h"
// Member `vehicle_size_confidence`
#include "j3224_v2x_msgs/msg/vehicle_size_confidence.h"
// Member `vehicle_size_confidence`
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__rosidl_typesupport_introspection_c.h"
// Member `vehicle_class`
#include "j2735_v2x_msgs/msg/basic_vehicle_class.h"
// Member `vehicle_class`
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__rosidl_typesupport_introspection_c.h"
// Member `class_conf`
#include "j3224_v2x_msgs/msg/classification_confidence.h"
// Member `class_conf`
#include "j3224_v2x_msgs/msg/detail/classification_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j3224_v2x_msgs__msg__DetectedVehicleData__init(message_memory);
}

void DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_fini_function(void * message_memory)
{
  j3224_v2x_msgs__msg__DetectedVehicleData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[11] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, lights),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_attitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, veh_attitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_attitude_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, veh_attitude_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_ang_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, veh_ang_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "veh_ang_vel_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, veh_ang_vel_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_size_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, vehicle_size_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, vehicle_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_conf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j3224_v2x_msgs__msg__DetectedVehicleData, class_conf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_members = {
  "j3224_v2x_msgs__msg",  // message namespace
  "DetectedVehicleData",  // message name
  11,  // number of fields
  sizeof(j3224_v2x_msgs__msg__DetectedVehicleData),
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array,  // message members
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_type_support_handle = {
  0,
  &DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j3224_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, DetectedVehicleData)() {
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ExteriorLights)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, Attitude)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, AttitudeConfidence)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, AngularVelocity)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, AngularVelocityConfidence)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleSize)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, VehicleHeight)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, VehicleSizeConfidence)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, BasicVehicleClass)();
  DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j3224_v2x_msgs, msg, ClassificationConfidence)();
  if (!DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_type_support_handle.typesupport_identifier) {
    DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectedVehicleData__rosidl_typesupport_introspection_c__DetectedVehicleData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
