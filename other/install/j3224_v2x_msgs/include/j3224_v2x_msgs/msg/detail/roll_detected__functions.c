// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j3224_v2x_msgs:msg/RollDetected.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/roll_detected__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j3224_v2x_msgs__msg__RollDetected__init(j3224_v2x_msgs__msg__RollDetected * msg)
{
  if (!msg) {
    return false;
  }
  // roll_detected
  return true;
}

void
j3224_v2x_msgs__msg__RollDetected__fini(j3224_v2x_msgs__msg__RollDetected * msg)
{
  if (!msg) {
    return;
  }
  // roll_detected
}

bool
j3224_v2x_msgs__msg__RollDetected__are_equal(const j3224_v2x_msgs__msg__RollDetected * lhs, const j3224_v2x_msgs__msg__RollDetected * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll_detected
  if (lhs->roll_detected != rhs->roll_detected) {
    return false;
  }
  return true;
}

bool
j3224_v2x_msgs__msg__RollDetected__copy(
  const j3224_v2x_msgs__msg__RollDetected * input,
  j3224_v2x_msgs__msg__RollDetected * output)
{
  if (!input || !output) {
    return false;
  }
  // roll_detected
  output->roll_detected = input->roll_detected;
  return true;
}

j3224_v2x_msgs__msg__RollDetected *
j3224_v2x_msgs__msg__RollDetected__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__RollDetected * msg = (j3224_v2x_msgs__msg__RollDetected *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__RollDetected), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j3224_v2x_msgs__msg__RollDetected));
  bool success = j3224_v2x_msgs__msg__RollDetected__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j3224_v2x_msgs__msg__RollDetected__destroy(j3224_v2x_msgs__msg__RollDetected * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j3224_v2x_msgs__msg__RollDetected__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j3224_v2x_msgs__msg__RollDetected__Sequence__init(j3224_v2x_msgs__msg__RollDetected__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__RollDetected * data = NULL;

  if (size) {
    data = (j3224_v2x_msgs__msg__RollDetected *)allocator.zero_allocate(size, sizeof(j3224_v2x_msgs__msg__RollDetected), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j3224_v2x_msgs__msg__RollDetected__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j3224_v2x_msgs__msg__RollDetected__fini(&data[i - 1]);
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
j3224_v2x_msgs__msg__RollDetected__Sequence__fini(j3224_v2x_msgs__msg__RollDetected__Sequence * array)
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
      j3224_v2x_msgs__msg__RollDetected__fini(&array->data[i]);
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

j3224_v2x_msgs__msg__RollDetected__Sequence *
j3224_v2x_msgs__msg__RollDetected__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__RollDetected__Sequence * array = (j3224_v2x_msgs__msg__RollDetected__Sequence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__RollDetected__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j3224_v2x_msgs__msg__RollDetected__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j3224_v2x_msgs__msg__RollDetected__Sequence__destroy(j3224_v2x_msgs__msg__RollDetected__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j3224_v2x_msgs__msg__RollDetected__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j3224_v2x_msgs__msg__RollDetected__Sequence__are_equal(const j3224_v2x_msgs__msg__RollDetected__Sequence * lhs, const j3224_v2x_msgs__msg__RollDetected__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j3224_v2x_msgs__msg__RollDetected__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j3224_v2x_msgs__msg__RollDetected__Sequence__copy(
  const j3224_v2x_msgs__msg__RollDetected__Sequence * input,
  j3224_v2x_msgs__msg__RollDetected__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j3224_v2x_msgs__msg__RollDetected);
    j3224_v2x_msgs__msg__RollDetected * data =
      (j3224_v2x_msgs__msg__RollDetected *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j3224_v2x_msgs__msg__RollDetected__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j3224_v2x_msgs__msg__RollDetected__fini(&data[i]);
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
    if (!j3224_v2x_msgs__msg__RollDetected__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
