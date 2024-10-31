// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/intersection_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"
// Member `status`
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__functions.h"
// Member `lane_id_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `movement_list`
#include "carma_v2x_msgs/msg/detail/movement_state__functions.h"
// Member `connection_maneuver_assist_list`
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"

bool
carma_v2x_msgs__msg__IntersectionState__init(carma_v2x_msgs__msg__IntersectionState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    carma_v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // name_exists
  // id
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__init(&msg->id)) {
    carma_v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // revision
  // status
  if (!j2735_v2x_msgs__msg__IntersectionStatusObject__init(&msg->status)) {
    carma_v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // moy
  // moy_exists
  // time_stamp
  // time_stamp_exists
  // lane_id_list
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->lane_id_list, 0)) {
    carma_v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // enabled_lanes_exists
  // movement_list
  if (!carma_v2x_msgs__msg__MovementState__Sequence__init(&msg->movement_list, 0)) {
    carma_v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // connection_maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(&msg->connection_maneuver_assist_list, 0)) {
    carma_v2x_msgs__msg__IntersectionState__fini(msg);
    return false;
  }
  // maneuever_assist_list_exists
  return true;
}

void
carma_v2x_msgs__msg__IntersectionState__fini(carma_v2x_msgs__msg__IntersectionState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // name_exists
  // id
  j2735_v2x_msgs__msg__IntersectionReferenceID__fini(&msg->id);
  // revision
  // status
  j2735_v2x_msgs__msg__IntersectionStatusObject__fini(&msg->status);
  // moy
  // moy_exists
  // time_stamp
  // time_stamp_exists
  // lane_id_list
  rosidl_runtime_c__uint16__Sequence__fini(&msg->lane_id_list);
  // enabled_lanes_exists
  // movement_list
  carma_v2x_msgs__msg__MovementState__Sequence__fini(&msg->movement_list);
  // connection_maneuver_assist_list
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__fini(&msg->connection_maneuver_assist_list);
  // maneuever_assist_list_exists
}

bool
carma_v2x_msgs__msg__IntersectionState__are_equal(const carma_v2x_msgs__msg__IntersectionState * lhs, const carma_v2x_msgs__msg__IntersectionState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // name_exists
  if (lhs->name_exists != rhs->name_exists) {
    return false;
  }
  // id
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  // status
  if (!j2735_v2x_msgs__msg__IntersectionStatusObject__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // moy
  if (lhs->moy != rhs->moy) {
    return false;
  }
  // moy_exists
  if (lhs->moy_exists != rhs->moy_exists) {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // time_stamp_exists
  if (lhs->time_stamp_exists != rhs->time_stamp_exists) {
    return false;
  }
  // lane_id_list
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->lane_id_list), &(rhs->lane_id_list)))
  {
    return false;
  }
  // enabled_lanes_exists
  if (lhs->enabled_lanes_exists != rhs->enabled_lanes_exists) {
    return false;
  }
  // movement_list
  if (!carma_v2x_msgs__msg__MovementState__Sequence__are_equal(
      &(lhs->movement_list), &(rhs->movement_list)))
  {
    return false;
  }
  // connection_maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__are_equal(
      &(lhs->connection_maneuver_assist_list), &(rhs->connection_maneuver_assist_list)))
  {
    return false;
  }
  // maneuever_assist_list_exists
  if (lhs->maneuever_assist_list_exists != rhs->maneuever_assist_list_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__IntersectionState__copy(
  const carma_v2x_msgs__msg__IntersectionState * input,
  carma_v2x_msgs__msg__IntersectionState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // name_exists
  output->name_exists = input->name_exists;
  // id
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // revision
  output->revision = input->revision;
  // status
  if (!j2735_v2x_msgs__msg__IntersectionStatusObject__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // moy
  output->moy = input->moy;
  // moy_exists
  output->moy_exists = input->moy_exists;
  // time_stamp
  output->time_stamp = input->time_stamp;
  // time_stamp_exists
  output->time_stamp_exists = input->time_stamp_exists;
  // lane_id_list
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->lane_id_list), &(output->lane_id_list)))
  {
    return false;
  }
  // enabled_lanes_exists
  output->enabled_lanes_exists = input->enabled_lanes_exists;
  // movement_list
  if (!carma_v2x_msgs__msg__MovementState__Sequence__copy(
      &(input->movement_list), &(output->movement_list)))
  {
    return false;
  }
  // connection_maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__copy(
      &(input->connection_maneuver_assist_list), &(output->connection_maneuver_assist_list)))
  {
    return false;
  }
  // maneuever_assist_list_exists
  output->maneuever_assist_list_exists = input->maneuever_assist_list_exists;
  return true;
}

carma_v2x_msgs__msg__IntersectionState *
carma_v2x_msgs__msg__IntersectionState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__IntersectionState * msg = (carma_v2x_msgs__msg__IntersectionState *)allocator.allocate(sizeof(carma_v2x_msgs__msg__IntersectionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__IntersectionState));
  bool success = carma_v2x_msgs__msg__IntersectionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__IntersectionState__destroy(carma_v2x_msgs__msg__IntersectionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__IntersectionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__IntersectionState__Sequence__init(carma_v2x_msgs__msg__IntersectionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__IntersectionState * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__IntersectionState *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__IntersectionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__IntersectionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__IntersectionState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
carma_v2x_msgs__msg__IntersectionState__Sequence__fini(carma_v2x_msgs__msg__IntersectionState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carma_v2x_msgs__msg__IntersectionState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

carma_v2x_msgs__msg__IntersectionState__Sequence *
carma_v2x_msgs__msg__IntersectionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__IntersectionState__Sequence * array = (carma_v2x_msgs__msg__IntersectionState__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__IntersectionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__IntersectionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__IntersectionState__Sequence__destroy(carma_v2x_msgs__msg__IntersectionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__IntersectionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__IntersectionState__Sequence__are_equal(const carma_v2x_msgs__msg__IntersectionState__Sequence * lhs, const carma_v2x_msgs__msg__IntersectionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__IntersectionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__IntersectionState__Sequence__copy(
  const carma_v2x_msgs__msg__IntersectionState__Sequence * input,
  carma_v2x_msgs__msg__IntersectionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__IntersectionState);
    carma_v2x_msgs__msg__IntersectionState * data =
      (carma_v2x_msgs__msg__IntersectionState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__IntersectionState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__IntersectionState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_v2x_msgs__msg__IntersectionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
