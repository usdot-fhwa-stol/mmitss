// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/check_active_geofence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_perception_msgs__msg__CheckActiveGeofence__init(carma_perception_msgs__msg__CheckActiveGeofence * msg)
{
  if (!msg) {
    return false;
  }
  // is_on_active_geofence
  // type
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    carma_perception_msgs__msg__CheckActiveGeofence__fini(msg);
    return false;
  }
  // value
  // distance_to_next_geofence
  // minimum_gap
  // advisory_speed
  return true;
}

void
carma_perception_msgs__msg__CheckActiveGeofence__fini(carma_perception_msgs__msg__CheckActiveGeofence * msg)
{
  if (!msg) {
    return;
  }
  // is_on_active_geofence
  // type
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
  // value
  // distance_to_next_geofence
  // minimum_gap
  // advisory_speed
}

bool
carma_perception_msgs__msg__CheckActiveGeofence__are_equal(const carma_perception_msgs__msg__CheckActiveGeofence * lhs, const carma_perception_msgs__msg__CheckActiveGeofence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_on_active_geofence
  if (lhs->is_on_active_geofence != rhs->is_on_active_geofence) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // distance_to_next_geofence
  if (lhs->distance_to_next_geofence != rhs->distance_to_next_geofence) {
    return false;
  }
  // minimum_gap
  if (lhs->minimum_gap != rhs->minimum_gap) {
    return false;
  }
  // advisory_speed
  if (lhs->advisory_speed != rhs->advisory_speed) {
    return false;
  }
  return true;
}

bool
carma_perception_msgs__msg__CheckActiveGeofence__copy(
  const carma_perception_msgs__msg__CheckActiveGeofence * input,
  carma_perception_msgs__msg__CheckActiveGeofence * output)
{
  if (!input || !output) {
    return false;
  }
  // is_on_active_geofence
  output->is_on_active_geofence = input->is_on_active_geofence;
  // type
  output->type = input->type;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  // value
  output->value = input->value;
  // distance_to_next_geofence
  output->distance_to_next_geofence = input->distance_to_next_geofence;
  // minimum_gap
  output->minimum_gap = input->minimum_gap;
  // advisory_speed
  output->advisory_speed = input->advisory_speed;
  return true;
}

carma_perception_msgs__msg__CheckActiveGeofence *
carma_perception_msgs__msg__CheckActiveGeofence__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__CheckActiveGeofence * msg = (carma_perception_msgs__msg__CheckActiveGeofence *)allocator.allocate(sizeof(carma_perception_msgs__msg__CheckActiveGeofence), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_perception_msgs__msg__CheckActiveGeofence));
  bool success = carma_perception_msgs__msg__CheckActiveGeofence__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_perception_msgs__msg__CheckActiveGeofence__destroy(carma_perception_msgs__msg__CheckActiveGeofence * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_perception_msgs__msg__CheckActiveGeofence__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__init(carma_perception_msgs__msg__CheckActiveGeofence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__CheckActiveGeofence * data = NULL;

  if (size) {
    data = (carma_perception_msgs__msg__CheckActiveGeofence *)allocator.zero_allocate(size, sizeof(carma_perception_msgs__msg__CheckActiveGeofence), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_perception_msgs__msg__CheckActiveGeofence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_perception_msgs__msg__CheckActiveGeofence__fini(&data[i - 1]);
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
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__fini(carma_perception_msgs__msg__CheckActiveGeofence__Sequence * array)
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
      carma_perception_msgs__msg__CheckActiveGeofence__fini(&array->data[i]);
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

carma_perception_msgs__msg__CheckActiveGeofence__Sequence *
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__CheckActiveGeofence__Sequence * array = (carma_perception_msgs__msg__CheckActiveGeofence__Sequence *)allocator.allocate(sizeof(carma_perception_msgs__msg__CheckActiveGeofence__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_perception_msgs__msg__CheckActiveGeofence__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__destroy(carma_perception_msgs__msg__CheckActiveGeofence__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_perception_msgs__msg__CheckActiveGeofence__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__are_equal(const carma_perception_msgs__msg__CheckActiveGeofence__Sequence * lhs, const carma_perception_msgs__msg__CheckActiveGeofence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_perception_msgs__msg__CheckActiveGeofence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__copy(
  const carma_perception_msgs__msg__CheckActiveGeofence__Sequence * input,
  carma_perception_msgs__msg__CheckActiveGeofence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_perception_msgs__msg__CheckActiveGeofence);
    carma_perception_msgs__msg__CheckActiveGeofence * data =
      (carma_perception_msgs__msg__CheckActiveGeofence *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_perception_msgs__msg__CheckActiveGeofence__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_perception_msgs__msg__CheckActiveGeofence__fini(&data[i]);
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
    if (!carma_perception_msgs__msg__CheckActiveGeofence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
