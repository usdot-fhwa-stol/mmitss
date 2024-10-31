// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/vehicle_safety_extensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `events`
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__functions.h"
// Member `path_history`
#include "carma_v2x_msgs/msg/detail/path_history__functions.h"
// Member `path_prediction`
#include "carma_v2x_msgs/msg/detail/path_prediction__functions.h"
// Member `lights`
#include "j2735_v2x_msgs/msg/detail/exterior_lights__functions.h"

bool
carma_v2x_msgs__msg__VehicleSafetyExtensions__init(carma_v2x_msgs__msg__VehicleSafetyExtensions * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // events
  if (!j2735_v2x_msgs__msg__VehicleEventFlags__init(&msg->events)) {
    carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // path_history
  if (!carma_v2x_msgs__msg__PathHistory__init(&msg->path_history)) {
    carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // path_prediction
  if (!carma_v2x_msgs__msg__PathPrediction__init(&msg->path_prediction)) {
    carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__init(&msg->lights)) {
    carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(carma_v2x_msgs__msg__VehicleSafetyExtensions * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // events
  j2735_v2x_msgs__msg__VehicleEventFlags__fini(&msg->events);
  // path_history
  carma_v2x_msgs__msg__PathHistory__fini(&msg->path_history);
  // path_prediction
  carma_v2x_msgs__msg__PathPrediction__fini(&msg->path_prediction);
  // lights
  j2735_v2x_msgs__msg__ExteriorLights__fini(&msg->lights);
}

bool
carma_v2x_msgs__msg__VehicleSafetyExtensions__are_equal(const carma_v2x_msgs__msg__VehicleSafetyExtensions * lhs, const carma_v2x_msgs__msg__VehicleSafetyExtensions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // events
  if (!j2735_v2x_msgs__msg__VehicleEventFlags__are_equal(
      &(lhs->events), &(rhs->events)))
  {
    return false;
  }
  // path_history
  if (!carma_v2x_msgs__msg__PathHistory__are_equal(
      &(lhs->path_history), &(rhs->path_history)))
  {
    return false;
  }
  // path_prediction
  if (!carma_v2x_msgs__msg__PathPrediction__are_equal(
      &(lhs->path_prediction), &(rhs->path_prediction)))
  {
    return false;
  }
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__are_equal(
      &(lhs->lights), &(rhs->lights)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__VehicleSafetyExtensions__copy(
  const carma_v2x_msgs__msg__VehicleSafetyExtensions * input,
  carma_v2x_msgs__msg__VehicleSafetyExtensions * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // events
  if (!j2735_v2x_msgs__msg__VehicleEventFlags__copy(
      &(input->events), &(output->events)))
  {
    return false;
  }
  // path_history
  if (!carma_v2x_msgs__msg__PathHistory__copy(
      &(input->path_history), &(output->path_history)))
  {
    return false;
  }
  // path_prediction
  if (!carma_v2x_msgs__msg__PathPrediction__copy(
      &(input->path_prediction), &(output->path_prediction)))
  {
    return false;
  }
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__copy(
      &(input->lights), &(output->lights)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__VehicleSafetyExtensions *
carma_v2x_msgs__msg__VehicleSafetyExtensions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__VehicleSafetyExtensions * msg = (carma_v2x_msgs__msg__VehicleSafetyExtensions *)allocator.allocate(sizeof(carma_v2x_msgs__msg__VehicleSafetyExtensions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__VehicleSafetyExtensions));
  bool success = carma_v2x_msgs__msg__VehicleSafetyExtensions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__VehicleSafetyExtensions__destroy(carma_v2x_msgs__msg__VehicleSafetyExtensions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__init(carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__VehicleSafetyExtensions * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__VehicleSafetyExtensions *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__VehicleSafetyExtensions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__VehicleSafetyExtensions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__fini(carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * array)
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
      carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(&array->data[i]);
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

carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence *
carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * array = (carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__destroy(carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__are_equal(const carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * lhs, const carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__VehicleSafetyExtensions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__copy(
  const carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * input,
  carma_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__VehicleSafetyExtensions);
    carma_v2x_msgs__msg__VehicleSafetyExtensions * data =
      (carma_v2x_msgs__msg__VehicleSafetyExtensions *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__VehicleSafetyExtensions__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__VehicleSafetyExtensions__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__VehicleSafetyExtensions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
