// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/traffic_signal_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_perception_msgs__msg__TrafficSignalInfo__init(carma_perception_msgs__msg__TrafficSignalInfo * msg)
{
  if (!msg) {
    return false;
  }
  // intersection_id
  // state
  // remaining_time
  // lane_id
  // remaining_distance
  return true;
}

void
carma_perception_msgs__msg__TrafficSignalInfo__fini(carma_perception_msgs__msg__TrafficSignalInfo * msg)
{
  if (!msg) {
    return;
  }
  // intersection_id
  // state
  // remaining_time
  // lane_id
  // remaining_distance
}

bool
carma_perception_msgs__msg__TrafficSignalInfo__are_equal(const carma_perception_msgs__msg__TrafficSignalInfo * lhs, const carma_perception_msgs__msg__TrafficSignalInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // intersection_id
  if (lhs->intersection_id != rhs->intersection_id) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // remaining_time
  if (lhs->remaining_time != rhs->remaining_time) {
    return false;
  }
  // lane_id
  if (lhs->lane_id != rhs->lane_id) {
    return false;
  }
  // remaining_distance
  if (lhs->remaining_distance != rhs->remaining_distance) {
    return false;
  }
  return true;
}

bool
carma_perception_msgs__msg__TrafficSignalInfo__copy(
  const carma_perception_msgs__msg__TrafficSignalInfo * input,
  carma_perception_msgs__msg__TrafficSignalInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // intersection_id
  output->intersection_id = input->intersection_id;
  // state
  output->state = input->state;
  // remaining_time
  output->remaining_time = input->remaining_time;
  // lane_id
  output->lane_id = input->lane_id;
  // remaining_distance
  output->remaining_distance = input->remaining_distance;
  return true;
}

carma_perception_msgs__msg__TrafficSignalInfo *
carma_perception_msgs__msg__TrafficSignalInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__TrafficSignalInfo * msg = (carma_perception_msgs__msg__TrafficSignalInfo *)allocator.allocate(sizeof(carma_perception_msgs__msg__TrafficSignalInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_perception_msgs__msg__TrafficSignalInfo));
  bool success = carma_perception_msgs__msg__TrafficSignalInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_perception_msgs__msg__TrafficSignalInfo__destroy(carma_perception_msgs__msg__TrafficSignalInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_perception_msgs__msg__TrafficSignalInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_perception_msgs__msg__TrafficSignalInfo__Sequence__init(carma_perception_msgs__msg__TrafficSignalInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__TrafficSignalInfo * data = NULL;

  if (size) {
    data = (carma_perception_msgs__msg__TrafficSignalInfo *)allocator.zero_allocate(size, sizeof(carma_perception_msgs__msg__TrafficSignalInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_perception_msgs__msg__TrafficSignalInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_perception_msgs__msg__TrafficSignalInfo__fini(&data[i - 1]);
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
carma_perception_msgs__msg__TrafficSignalInfo__Sequence__fini(carma_perception_msgs__msg__TrafficSignalInfo__Sequence * array)
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
      carma_perception_msgs__msg__TrafficSignalInfo__fini(&array->data[i]);
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

carma_perception_msgs__msg__TrafficSignalInfo__Sequence *
carma_perception_msgs__msg__TrafficSignalInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__TrafficSignalInfo__Sequence * array = (carma_perception_msgs__msg__TrafficSignalInfo__Sequence *)allocator.allocate(sizeof(carma_perception_msgs__msg__TrafficSignalInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_perception_msgs__msg__TrafficSignalInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_perception_msgs__msg__TrafficSignalInfo__Sequence__destroy(carma_perception_msgs__msg__TrafficSignalInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_perception_msgs__msg__TrafficSignalInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_perception_msgs__msg__TrafficSignalInfo__Sequence__are_equal(const carma_perception_msgs__msg__TrafficSignalInfo__Sequence * lhs, const carma_perception_msgs__msg__TrafficSignalInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_perception_msgs__msg__TrafficSignalInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_perception_msgs__msg__TrafficSignalInfo__Sequence__copy(
  const carma_perception_msgs__msg__TrafficSignalInfo__Sequence * input,
  carma_perception_msgs__msg__TrafficSignalInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_perception_msgs__msg__TrafficSignalInfo);
    carma_perception_msgs__msg__TrafficSignalInfo * data =
      (carma_perception_msgs__msg__TrafficSignalInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_perception_msgs__msg__TrafficSignalInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_perception_msgs__msg__TrafficSignalInfo__fini(&data[i]);
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
    if (!carma_perception_msgs__msg__TrafficSignalInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
