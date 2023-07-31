// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j3224_v2x_msgs:msg/DetectedObstacleData.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/detected_obstacle_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obst_size`
#include "j3224_v2x_msgs/msg/detail/obstacle_size__functions.h"
// Member `obst_size_confidence`
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__functions.h"

bool
j3224_v2x_msgs__msg__DetectedObstacleData__init(j3224_v2x_msgs__msg__DetectedObstacleData * msg)
{
  if (!msg) {
    return false;
  }
  // obst_size
  if (!j3224_v2x_msgs__msg__ObstacleSize__init(&msg->obst_size)) {
    j3224_v2x_msgs__msg__DetectedObstacleData__fini(msg);
    return false;
  }
  // obst_size_confidence
  if (!j3224_v2x_msgs__msg__ObstacleSizeConfidence__init(&msg->obst_size_confidence)) {
    j3224_v2x_msgs__msg__DetectedObstacleData__fini(msg);
    return false;
  }
  return true;
}

void
j3224_v2x_msgs__msg__DetectedObstacleData__fini(j3224_v2x_msgs__msg__DetectedObstacleData * msg)
{
  if (!msg) {
    return;
  }
  // obst_size
  j3224_v2x_msgs__msg__ObstacleSize__fini(&msg->obst_size);
  // obst_size_confidence
  j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(&msg->obst_size_confidence);
}

bool
j3224_v2x_msgs__msg__DetectedObstacleData__are_equal(const j3224_v2x_msgs__msg__DetectedObstacleData * lhs, const j3224_v2x_msgs__msg__DetectedObstacleData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obst_size
  if (!j3224_v2x_msgs__msg__ObstacleSize__are_equal(
      &(lhs->obst_size), &(rhs->obst_size)))
  {
    return false;
  }
  // obst_size_confidence
  if (!j3224_v2x_msgs__msg__ObstacleSizeConfidence__are_equal(
      &(lhs->obst_size_confidence), &(rhs->obst_size_confidence)))
  {
    return false;
  }
  return true;
}

bool
j3224_v2x_msgs__msg__DetectedObstacleData__copy(
  const j3224_v2x_msgs__msg__DetectedObstacleData * input,
  j3224_v2x_msgs__msg__DetectedObstacleData * output)
{
  if (!input || !output) {
    return false;
  }
  // obst_size
  if (!j3224_v2x_msgs__msg__ObstacleSize__copy(
      &(input->obst_size), &(output->obst_size)))
  {
    return false;
  }
  // obst_size_confidence
  if (!j3224_v2x_msgs__msg__ObstacleSizeConfidence__copy(
      &(input->obst_size_confidence), &(output->obst_size_confidence)))
  {
    return false;
  }
  return true;
}

j3224_v2x_msgs__msg__DetectedObstacleData *
j3224_v2x_msgs__msg__DetectedObstacleData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedObstacleData * msg = (j3224_v2x_msgs__msg__DetectedObstacleData *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__DetectedObstacleData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j3224_v2x_msgs__msg__DetectedObstacleData));
  bool success = j3224_v2x_msgs__msg__DetectedObstacleData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j3224_v2x_msgs__msg__DetectedObstacleData__destroy(j3224_v2x_msgs__msg__DetectedObstacleData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j3224_v2x_msgs__msg__DetectedObstacleData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j3224_v2x_msgs__msg__DetectedObstacleData__Sequence__init(j3224_v2x_msgs__msg__DetectedObstacleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedObstacleData * data = NULL;

  if (size) {
    data = (j3224_v2x_msgs__msg__DetectedObstacleData *)allocator.zero_allocate(size, sizeof(j3224_v2x_msgs__msg__DetectedObstacleData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j3224_v2x_msgs__msg__DetectedObstacleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j3224_v2x_msgs__msg__DetectedObstacleData__fini(&data[i - 1]);
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
j3224_v2x_msgs__msg__DetectedObstacleData__Sequence__fini(j3224_v2x_msgs__msg__DetectedObstacleData__Sequence * array)
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
      j3224_v2x_msgs__msg__DetectedObstacleData__fini(&array->data[i]);
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

j3224_v2x_msgs__msg__DetectedObstacleData__Sequence *
j3224_v2x_msgs__msg__DetectedObstacleData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedObstacleData__Sequence * array = (j3224_v2x_msgs__msg__DetectedObstacleData__Sequence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__DetectedObstacleData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j3224_v2x_msgs__msg__DetectedObstacleData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j3224_v2x_msgs__msg__DetectedObstacleData__Sequence__destroy(j3224_v2x_msgs__msg__DetectedObstacleData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j3224_v2x_msgs__msg__DetectedObstacleData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j3224_v2x_msgs__msg__DetectedObstacleData__Sequence__are_equal(const j3224_v2x_msgs__msg__DetectedObstacleData__Sequence * lhs, const j3224_v2x_msgs__msg__DetectedObstacleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j3224_v2x_msgs__msg__DetectedObstacleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j3224_v2x_msgs__msg__DetectedObstacleData__Sequence__copy(
  const j3224_v2x_msgs__msg__DetectedObstacleData__Sequence * input,
  j3224_v2x_msgs__msg__DetectedObstacleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j3224_v2x_msgs__msg__DetectedObstacleData);
    j3224_v2x_msgs__msg__DetectedObstacleData * data =
      (j3224_v2x_msgs__msg__DetectedObstacleData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j3224_v2x_msgs__msg__DetectedObstacleData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j3224_v2x_msgs__msg__DetectedObstacleData__fini(&data[i]);
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
    if (!j3224_v2x_msgs__msg__DetectedObstacleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
