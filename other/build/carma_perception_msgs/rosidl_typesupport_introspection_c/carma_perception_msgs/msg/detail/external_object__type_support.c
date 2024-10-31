// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_perception_msgs:msg/ExternalObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_perception_msgs/msg/detail/external_object__rosidl_typesupport_introspection_c.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_perception_msgs/msg/detail/external_object__functions.h"
#include "carma_perception_msgs/msg/detail/external_object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bsm_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `velocity`
// Member `velocity_inst`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `velocity`
// Member `velocity_inst`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `size`
#include "geometry_msgs/msg/vector3.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `predictions`
#include "carma_perception_msgs/msg/predicted_state.h"
// Member `predictions`
#include "carma_perception_msgs/msg/detail/predicted_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_perception_msgs__msg__ExternalObject__init(message_memory);
}

void ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_fini_function(void * message_memory)
{
  carma_perception_msgs__msg__ExternalObject__fini(message_memory);
}

size_t ExternalObject__rosidl_typesupport_introspection_c__size_function__PredictedState__predictions(
  const void * untyped_member)
{
  const carma_perception_msgs__msg__PredictedState__Sequence * member =
    (const carma_perception_msgs__msg__PredictedState__Sequence *)(untyped_member);
  return member->size;
}

const void * ExternalObject__rosidl_typesupport_introspection_c__get_const_function__PredictedState__predictions(
  const void * untyped_member, size_t index)
{
  const carma_perception_msgs__msg__PredictedState__Sequence * member =
    (const carma_perception_msgs__msg__PredictedState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ExternalObject__rosidl_typesupport_introspection_c__get_function__PredictedState__predictions(
  void * untyped_member, size_t index)
{
  carma_perception_msgs__msg__PredictedState__Sequence * member =
    (carma_perception_msgs__msg__PredictedState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ExternalObject__rosidl_typesupport_introspection_c__resize_function__PredictedState__predictions(
  void * untyped_member, size_t size)
{
  carma_perception_msgs__msg__PredictedState__Sequence * member =
    (carma_perception_msgs__msg__PredictedState__Sequence *)(untyped_member);
  carma_perception_msgs__msg__PredictedState__Sequence__fini(member);
  return carma_perception_msgs__msg__PredictedState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, header),  // bytes offset in struct
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
    offsetof(carma_perception_msgs__msg__ExternalObject, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bsm_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, bsm_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_inst",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, velocity_inst),  // bytes offset in struct
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
    offsetof(carma_perception_msgs__msg__ExternalObject, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, object_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dynamic_obj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, dynamic_obj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predictions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObject, predictions),  // bytes offset in struct
    NULL,  // default value
    ExternalObject__rosidl_typesupport_introspection_c__size_function__PredictedState__predictions,  // size() function pointer
    ExternalObject__rosidl_typesupport_introspection_c__get_const_function__PredictedState__predictions,  // get_const(index) function pointer
    ExternalObject__rosidl_typesupport_introspection_c__get_function__PredictedState__predictions,  // get(index) function pointer
    ExternalObject__rosidl_typesupport_introspection_c__resize_function__PredictedState__predictions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_members = {
  "carma_perception_msgs__msg",  // message namespace
  "ExternalObject",  // message name
  12,  // number of fields
  sizeof(carma_perception_msgs__msg__ExternalObject),
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_member_array,  // message members
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_init_function,  // function to initialize message memory (memory has to be allocated)
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_type_support_handle = {
  0,
  &ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, ExternalObject)() {
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, PredictedState)();
  if (!ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_type_support_handle.typesupport_identifier) {
    ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExternalObject__rosidl_typesupport_introspection_c__ExternalObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
