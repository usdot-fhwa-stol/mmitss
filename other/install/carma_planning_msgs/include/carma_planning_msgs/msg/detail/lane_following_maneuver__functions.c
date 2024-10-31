// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/LaneFollowingManeuver.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `parameters`
#include "carma_planning_msgs/msg/detail/maneuver_parameters__functions.h"
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `lane_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_planning_msgs__msg__LaneFollowingManeuver__init(carma_planning_msgs__msg__LaneFollowingManeuver * msg)
{
  if (!msg) {
    return false;
  }
  // parameters
  if (!carma_planning_msgs__msg__ManeuverParameters__init(&msg->parameters)) {
    carma_planning_msgs__msg__LaneFollowingManeuver__fini(msg);
    return false;
  }
  // start_dist
  // start_speed
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    carma_planning_msgs__msg__LaneFollowingManeuver__fini(msg);
    return false;
  }
  // end_dist
  // end_speed
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    carma_planning_msgs__msg__LaneFollowingManeuver__fini(msg);
    return false;
  }
  // lane_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->lane_ids, 0)) {
    carma_planning_msgs__msg__LaneFollowingManeuver__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__LaneFollowingManeuver__fini(carma_planning_msgs__msg__LaneFollowingManeuver * msg)
{
  if (!msg) {
    return;
  }
  // parameters
  carma_planning_msgs__msg__ManeuverParameters__fini(&msg->parameters);
  // start_dist
  // start_speed
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // end_dist
  // end_speed
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // lane_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->lane_ids);
}

bool
carma_planning_msgs__msg__LaneFollowingManeuver__are_equal(const carma_planning_msgs__msg__LaneFollowingManeuver * lhs, const carma_planning_msgs__msg__LaneFollowingManeuver * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parameters
  if (!carma_planning_msgs__msg__ManeuverParameters__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  // start_dist
  if (lhs->start_dist != rhs->start_dist) {
    return false;
  }
  // start_speed
  if (lhs->start_speed != rhs->start_speed) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // end_dist
  if (lhs->end_dist != rhs->end_dist) {
    return false;
  }
  // end_speed
  if (lhs->end_speed != rhs->end_speed) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end_time), &(rhs->end_time)))
  {
    return false;
  }
  // lane_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->lane_ids), &(rhs->lane_ids)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__LaneFollowingManeuver__copy(
  const carma_planning_msgs__msg__LaneFollowingManeuver * input,
  carma_planning_msgs__msg__LaneFollowingManeuver * output)
{
  if (!input || !output) {
    return false;
  }
  // parameters
  if (!carma_planning_msgs__msg__ManeuverParameters__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  // start_dist
  output->start_dist = input->start_dist;
  // start_speed
  output->start_speed = input->start_speed;
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // end_dist
  output->end_dist = input->end_dist;
  // end_speed
  output->end_speed = input->end_speed;
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // lane_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->lane_ids), &(output->lane_ids)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__LaneFollowingManeuver *
carma_planning_msgs__msg__LaneFollowingManeuver__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__LaneFollowingManeuver * msg = (carma_planning_msgs__msg__LaneFollowingManeuver *)allocator.allocate(sizeof(carma_planning_msgs__msg__LaneFollowingManeuver), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__LaneFollowingManeuver));
  bool success = carma_planning_msgs__msg__LaneFollowingManeuver__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__LaneFollowingManeuver__destroy(carma_planning_msgs__msg__LaneFollowingManeuver * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__LaneFollowingManeuver__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__init(carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__LaneFollowingManeuver * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__LaneFollowingManeuver *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__LaneFollowingManeuver), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__LaneFollowingManeuver__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__LaneFollowingManeuver__fini(&data[i - 1]);
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
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__fini(carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * array)
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
      carma_planning_msgs__msg__LaneFollowingManeuver__fini(&array->data[i]);
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

carma_planning_msgs__msg__LaneFollowingManeuver__Sequence *
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * array = (carma_planning_msgs__msg__LaneFollowingManeuver__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__LaneFollowingManeuver__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__destroy(carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__are_equal(const carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * lhs, const carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__LaneFollowingManeuver__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__copy(
  const carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * input,
  carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__LaneFollowingManeuver);
    carma_planning_msgs__msg__LaneFollowingManeuver * data =
      (carma_planning_msgs__msg__LaneFollowingManeuver *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__LaneFollowingManeuver__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__LaneFollowingManeuver__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__LaneFollowingManeuver__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
