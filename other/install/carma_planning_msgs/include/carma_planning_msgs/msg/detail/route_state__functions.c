// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/RouteState.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/route_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `route_id`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_planning_msgs__msg__RouteState__init(carma_planning_msgs__msg__RouteState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_planning_msgs__msg__RouteState__fini(msg);
    return false;
  }
  // route_id
  if (!rosidl_runtime_c__String__init(&msg->route_id)) {
    carma_planning_msgs__msg__RouteState__fini(msg);
    return false;
  }
  // state
  // cross_track
  // down_track
  // lanelet_downtrack
  // lanelet_id
  // speed_limit
  return true;
}

void
carma_planning_msgs__msg__RouteState__fini(carma_planning_msgs__msg__RouteState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // route_id
  rosidl_runtime_c__String__fini(&msg->route_id);
  // state
  // cross_track
  // down_track
  // lanelet_downtrack
  // lanelet_id
  // speed_limit
}

bool
carma_planning_msgs__msg__RouteState__are_equal(const carma_planning_msgs__msg__RouteState * lhs, const carma_planning_msgs__msg__RouteState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // route_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->route_id), &(rhs->route_id)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // cross_track
  if (lhs->cross_track != rhs->cross_track) {
    return false;
  }
  // down_track
  if (lhs->down_track != rhs->down_track) {
    return false;
  }
  // lanelet_downtrack
  if (lhs->lanelet_downtrack != rhs->lanelet_downtrack) {
    return false;
  }
  // lanelet_id
  if (lhs->lanelet_id != rhs->lanelet_id) {
    return false;
  }
  // speed_limit
  if (lhs->speed_limit != rhs->speed_limit) {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__RouteState__copy(
  const carma_planning_msgs__msg__RouteState * input,
  carma_planning_msgs__msg__RouteState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // route_id
  if (!rosidl_runtime_c__String__copy(
      &(input->route_id), &(output->route_id)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // cross_track
  output->cross_track = input->cross_track;
  // down_track
  output->down_track = input->down_track;
  // lanelet_downtrack
  output->lanelet_downtrack = input->lanelet_downtrack;
  // lanelet_id
  output->lanelet_id = input->lanelet_id;
  // speed_limit
  output->speed_limit = input->speed_limit;
  return true;
}

carma_planning_msgs__msg__RouteState *
carma_planning_msgs__msg__RouteState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__RouteState * msg = (carma_planning_msgs__msg__RouteState *)allocator.allocate(sizeof(carma_planning_msgs__msg__RouteState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__RouteState));
  bool success = carma_planning_msgs__msg__RouteState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__RouteState__destroy(carma_planning_msgs__msg__RouteState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__RouteState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__RouteState__Sequence__init(carma_planning_msgs__msg__RouteState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__RouteState * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__RouteState *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__RouteState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__RouteState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__RouteState__fini(&data[i - 1]);
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
carma_planning_msgs__msg__RouteState__Sequence__fini(carma_planning_msgs__msg__RouteState__Sequence * array)
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
      carma_planning_msgs__msg__RouteState__fini(&array->data[i]);
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

carma_planning_msgs__msg__RouteState__Sequence *
carma_planning_msgs__msg__RouteState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__RouteState__Sequence * array = (carma_planning_msgs__msg__RouteState__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__RouteState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__RouteState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__RouteState__Sequence__destroy(carma_planning_msgs__msg__RouteState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__RouteState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__RouteState__Sequence__are_equal(const carma_planning_msgs__msg__RouteState__Sequence * lhs, const carma_planning_msgs__msg__RouteState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__RouteState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__RouteState__Sequence__copy(
  const carma_planning_msgs__msg__RouteState__Sequence * input,
  carma_planning_msgs__msg__RouteState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__RouteState);
    carma_planning_msgs__msg__RouteState * data =
      (carma_planning_msgs__msg__RouteState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__RouteState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__RouteState__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__RouteState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
