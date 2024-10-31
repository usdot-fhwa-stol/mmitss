// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_perception_msgs:msg/RoadwayObstacleList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__rosidl_typesupport_introspection_c.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__functions.h"
#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__struct.h"


// Include directives for member types
// Member `roadway_obstacles`
#include "carma_perception_msgs/msg/roadway_obstacle.h"
// Member `roadway_obstacles`
#include "carma_perception_msgs/msg/detail/roadway_obstacle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_perception_msgs__msg__RoadwayObstacleList__init(message_memory);
}

void RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_fini_function(void * message_memory)
{
  carma_perception_msgs__msg__RoadwayObstacleList__fini(message_memory);
}

size_t RoadwayObstacleList__rosidl_typesupport_introspection_c__size_function__RoadwayObstacle__roadway_obstacles(
  const void * untyped_member)
{
  const carma_perception_msgs__msg__RoadwayObstacle__Sequence * member =
    (const carma_perception_msgs__msg__RoadwayObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * RoadwayObstacleList__rosidl_typesupport_introspection_c__get_const_function__RoadwayObstacle__roadway_obstacles(
  const void * untyped_member, size_t index)
{
  const carma_perception_msgs__msg__RoadwayObstacle__Sequence * member =
    (const carma_perception_msgs__msg__RoadwayObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RoadwayObstacleList__rosidl_typesupport_introspection_c__get_function__RoadwayObstacle__roadway_obstacles(
  void * untyped_member, size_t index)
{
  carma_perception_msgs__msg__RoadwayObstacle__Sequence * member =
    (carma_perception_msgs__msg__RoadwayObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RoadwayObstacleList__rosidl_typesupport_introspection_c__resize_function__RoadwayObstacle__roadway_obstacles(
  void * untyped_member, size_t size)
{
  carma_perception_msgs__msg__RoadwayObstacle__Sequence * member =
    (carma_perception_msgs__msg__RoadwayObstacle__Sequence *)(untyped_member);
  carma_perception_msgs__msg__RoadwayObstacle__Sequence__fini(member);
  return carma_perception_msgs__msg__RoadwayObstacle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_member_array[1] = {
  {
    "roadway_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__RoadwayObstacleList, roadway_obstacles),  // bytes offset in struct
    NULL,  // default value
    RoadwayObstacleList__rosidl_typesupport_introspection_c__size_function__RoadwayObstacle__roadway_obstacles,  // size() function pointer
    RoadwayObstacleList__rosidl_typesupport_introspection_c__get_const_function__RoadwayObstacle__roadway_obstacles,  // get_const(index) function pointer
    RoadwayObstacleList__rosidl_typesupport_introspection_c__get_function__RoadwayObstacle__roadway_obstacles,  // get(index) function pointer
    RoadwayObstacleList__rosidl_typesupport_introspection_c__resize_function__RoadwayObstacle__roadway_obstacles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_members = {
  "carma_perception_msgs__msg",  // message namespace
  "RoadwayObstacleList",  // message name
  1,  // number of fields
  sizeof(carma_perception_msgs__msg__RoadwayObstacleList),
  RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_member_array,  // message members
  RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_init_function,  // function to initialize message memory (memory has to be allocated)
  RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_type_support_handle = {
  0,
  &RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, RoadwayObstacleList)() {
  RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, RoadwayObstacle)();
  if (!RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_type_support_handle.typesupport_identifier) {
    RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RoadwayObstacleList__rosidl_typesupport_introspection_c__RoadwayObstacleList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
