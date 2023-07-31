// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j3224_v2x_msgs:msg/ObstacleSizeConfidence.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `width_confidence`
// Member `length_confidence`
// Member `height_confidence`
#include "j3224_v2x_msgs/msg/detail/size_value_confidence__functions.h"

bool
j3224_v2x_msgs__msg__ObstacleSizeConfidence__init(j3224_v2x_msgs__msg__ObstacleSizeConfidence * msg)
{
  if (!msg) {
    return false;
  }
  // width_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__init(&msg->width_confidence)) {
    j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(msg);
    return false;
  }
  // length_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__init(&msg->length_confidence)) {
    j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(msg);
    return false;
  }
  // presence_vector
  // height_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__init(&msg->height_confidence)) {
    j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(msg);
    return false;
  }
  return true;
}

void
j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(j3224_v2x_msgs__msg__ObstacleSizeConfidence * msg)
{
  if (!msg) {
    return;
  }
  // width_confidence
  j3224_v2x_msgs__msg__SizeValueConfidence__fini(&msg->width_confidence);
  // length_confidence
  j3224_v2x_msgs__msg__SizeValueConfidence__fini(&msg->length_confidence);
  // presence_vector
  // height_confidence
  j3224_v2x_msgs__msg__SizeValueConfidence__fini(&msg->height_confidence);
}

bool
j3224_v2x_msgs__msg__ObstacleSizeConfidence__are_equal(const j3224_v2x_msgs__msg__ObstacleSizeConfidence * lhs, const j3224_v2x_msgs__msg__ObstacleSizeConfidence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__are_equal(
      &(lhs->width_confidence), &(rhs->width_confidence)))
  {
    return false;
  }
  // length_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__are_equal(
      &(lhs->length_confidence), &(rhs->length_confidence)))
  {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // height_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__are_equal(
      &(lhs->height_confidence), &(rhs->height_confidence)))
  {
    return false;
  }
  return true;
}

bool
j3224_v2x_msgs__msg__ObstacleSizeConfidence__copy(
  const j3224_v2x_msgs__msg__ObstacleSizeConfidence * input,
  j3224_v2x_msgs__msg__ObstacleSizeConfidence * output)
{
  if (!input || !output) {
    return false;
  }
  // width_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__copy(
      &(input->width_confidence), &(output->width_confidence)))
  {
    return false;
  }
  // length_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__copy(
      &(input->length_confidence), &(output->length_confidence)))
  {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // height_confidence
  if (!j3224_v2x_msgs__msg__SizeValueConfidence__copy(
      &(input->height_confidence), &(output->height_confidence)))
  {
    return false;
  }
  return true;
}

j3224_v2x_msgs__msg__ObstacleSizeConfidence *
j3224_v2x_msgs__msg__ObstacleSizeConfidence__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__ObstacleSizeConfidence * msg = (j3224_v2x_msgs__msg__ObstacleSizeConfidence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__ObstacleSizeConfidence), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j3224_v2x_msgs__msg__ObstacleSizeConfidence));
  bool success = j3224_v2x_msgs__msg__ObstacleSizeConfidence__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j3224_v2x_msgs__msg__ObstacleSizeConfidence__destroy(j3224_v2x_msgs__msg__ObstacleSizeConfidence * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence__init(j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__ObstacleSizeConfidence * data = NULL;

  if (size) {
    data = (j3224_v2x_msgs__msg__ObstacleSizeConfidence *)allocator.zero_allocate(size, sizeof(j3224_v2x_msgs__msg__ObstacleSizeConfidence), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j3224_v2x_msgs__msg__ObstacleSizeConfidence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(&data[i - 1]);
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
j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence__fini(j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence * array)
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
      j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(&array->data[i]);
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

j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence *
j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence * array = (j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence__destroy(j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence__are_equal(const j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence * lhs, const j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j3224_v2x_msgs__msg__ObstacleSizeConfidence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence__copy(
  const j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence * input,
  j3224_v2x_msgs__msg__ObstacleSizeConfidence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j3224_v2x_msgs__msg__ObstacleSizeConfidence);
    j3224_v2x_msgs__msg__ObstacleSizeConfidence * data =
      (j3224_v2x_msgs__msg__ObstacleSizeConfidence *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j3224_v2x_msgs__msg__ObstacleSizeConfidence__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j3224_v2x_msgs__msg__ObstacleSizeConfidence__fini(&data[i]);
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
    if (!j3224_v2x_msgs__msg__ObstacleSizeConfidence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
