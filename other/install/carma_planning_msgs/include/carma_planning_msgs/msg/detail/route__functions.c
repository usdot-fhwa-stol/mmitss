// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `route_id`
// Member `route_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `shortest_path_lanelet_ids`
// Member `route_path_lanelet_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `end_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
carma_planning_msgs__msg__Route__init(carma_planning_msgs__msg__Route * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  // route_id
  if (!rosidl_runtime_c__String__init(&msg->route_id)) {
    carma_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  // route_version
  // map_version
  // route_name
  if (!rosidl_runtime_c__String__init(&msg->route_name)) {
    carma_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  // is_rerouted
  // shortest_path_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->shortest_path_lanelet_ids, 0)) {
    carma_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  // route_path_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->route_path_lanelet_ids, 0)) {
    carma_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  // end_point
  if (!geometry_msgs__msg__Point__init(&msg->end_point)) {
    carma_planning_msgs__msg__Route__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__Route__fini(carma_planning_msgs__msg__Route * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // route_id
  rosidl_runtime_c__String__fini(&msg->route_id);
  // route_version
  // map_version
  // route_name
  rosidl_runtime_c__String__fini(&msg->route_name);
  // is_rerouted
  // shortest_path_lanelet_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->shortest_path_lanelet_ids);
  // route_path_lanelet_ids
  rosidl_runtime_c__int64__Sequence__fini(&msg->route_path_lanelet_ids);
  // end_point
  geometry_msgs__msg__Point__fini(&msg->end_point);
}

bool
carma_planning_msgs__msg__Route__are_equal(const carma_planning_msgs__msg__Route * lhs, const carma_planning_msgs__msg__Route * rhs)
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
  // route_version
  if (lhs->route_version != rhs->route_version) {
    return false;
  }
  // map_version
  if (lhs->map_version != rhs->map_version) {
    return false;
  }
  // route_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->route_name), &(rhs->route_name)))
  {
    return false;
  }
  // is_rerouted
  if (lhs->is_rerouted != rhs->is_rerouted) {
    return false;
  }
  // shortest_path_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->shortest_path_lanelet_ids), &(rhs->shortest_path_lanelet_ids)))
  {
    return false;
  }
  // route_path_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->route_path_lanelet_ids), &(rhs->route_path_lanelet_ids)))
  {
    return false;
  }
  // end_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->end_point), &(rhs->end_point)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__Route__copy(
  const carma_planning_msgs__msg__Route * input,
  carma_planning_msgs__msg__Route * output)
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
  // route_version
  output->route_version = input->route_version;
  // map_version
  output->map_version = input->map_version;
  // route_name
  if (!rosidl_runtime_c__String__copy(
      &(input->route_name), &(output->route_name)))
  {
    return false;
  }
  // is_rerouted
  output->is_rerouted = input->is_rerouted;
  // shortest_path_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->shortest_path_lanelet_ids), &(output->shortest_path_lanelet_ids)))
  {
    return false;
  }
  // route_path_lanelet_ids
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->route_path_lanelet_ids), &(output->route_path_lanelet_ids)))
  {
    return false;
  }
  // end_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->end_point), &(output->end_point)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__Route *
carma_planning_msgs__msg__Route__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Route * msg = (carma_planning_msgs__msg__Route *)allocator.allocate(sizeof(carma_planning_msgs__msg__Route), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__Route));
  bool success = carma_planning_msgs__msg__Route__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__Route__destroy(carma_planning_msgs__msg__Route * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__Route__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__Route__Sequence__init(carma_planning_msgs__msg__Route__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Route * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__Route *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__Route), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__Route__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__Route__fini(&data[i - 1]);
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
carma_planning_msgs__msg__Route__Sequence__fini(carma_planning_msgs__msg__Route__Sequence * array)
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
      carma_planning_msgs__msg__Route__fini(&array->data[i]);
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

carma_planning_msgs__msg__Route__Sequence *
carma_planning_msgs__msg__Route__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Route__Sequence * array = (carma_planning_msgs__msg__Route__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__Route__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__Route__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__Route__Sequence__destroy(carma_planning_msgs__msg__Route__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__Route__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__Route__Sequence__are_equal(const carma_planning_msgs__msg__Route__Sequence * lhs, const carma_planning_msgs__msg__Route__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__Route__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__Route__Sequence__copy(
  const carma_planning_msgs__msg__Route__Sequence * input,
  carma_planning_msgs__msg__Route__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__Route);
    carma_planning_msgs__msg__Route * data =
      (carma_planning_msgs__msg__Route *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__Route__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__Route__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__Route__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
