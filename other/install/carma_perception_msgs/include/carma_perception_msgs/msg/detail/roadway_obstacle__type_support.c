// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_perception_msgs/msg/detail/roadway_obstacle__rosidl_typesupport_introspection_c.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle__functions.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle__struct.h"


// Include directives for member types
// Member `object`
#include "carma_perception_msgs/msg/external_object.h"
// Member `object`
#include "carma_perception_msgs/msg/detail/external_object__rosidl_typesupport_introspection_c.h"
// Member `connected_vehicle_type`
#include "carma_perception_msgs/msg/connected_vehicle_type.h"
// Member `connected_vehicle_type`
#include "carma_perception_msgs/msg/detail/connected_vehicle_type__rosidl_typesupport_introspection_c.h"
// Member `predicted_lanelet_ids`
// Member `predicted_lanelet_id_confidences`
// Member `predicted_cross_tracks`
// Member `predicted_cross_track_confidences`
// Member `predicted_down_tracks`
// Member `predicted_down_track_confidences`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_perception_msgs__msg__RoadwayObstacle__init(message_memory);
}

void RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_fini_function(void * message_memory)
{
  carma_perception_msgs__msg__RoadwayObstacle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_member_array[11] = {
  {
    "object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connected_vehicle_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, connected_vehicle_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanelet_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, lanelet_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cross_track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, cross_track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "down_track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, down_track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_lanelet_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, predicted_lanelet_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_lanelet_id_confidences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, predicted_lanelet_id_confidences),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_cross_tracks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, predicted_cross_tracks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_cross_track_confidences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, predicted_cross_track_confidences),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_down_tracks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, predicted_down_tracks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_down_track_confidences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacle, predicted_down_track_confidences),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_members = {
  "carma_perception_msgs__msg",  // message namespace
  "RoadwayObstacle",  // message name
  11,  // number of fields
  sizeof(carma_perception_msgs__msg__RoadwayObstacle),
  RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_member_array,  // message members
  RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_type_support_handle = {
  0,
  &RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, RoadwayObstacle)() {
  RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, ExternalObject)();
  RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, ConnectedVehicleType)();
  if (!RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_type_support_handle.typesupport_identifier) {
    RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RoadwayObstacle__rosidl_typesupport_introspection_c__RoadwayObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
