// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from can_msgs:msg/CanState.idl
// generated code does not contain a copyright notice
#include "can_msgs/msg/detail/can_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
can_msgs__msg__CanState__init(can_msgs__msg__CanState * msg)
{
  if (!msg) {
    return false;
  }
  // driver_state
  return true;
}

void
can_msgs__msg__CanState__fini(can_msgs__msg__CanState * msg)
{
  if (!msg) {
    return;
  }
  // driver_state
}

bool
can_msgs__msg__CanState__are_equal(const can_msgs__msg__CanState * lhs, const can_msgs__msg__CanState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // driver_state
  if (lhs->driver_state != rhs->driver_state) {
    return false;
  }
  return true;
}

bool
can_msgs__msg__CanState__copy(
  const can_msgs__msg__CanState * input,
  can_msgs__msg__CanState * output)
{
  if (!input || !output) {
    return false;
  }
  // driver_state
  output->driver_state = input->driver_state;
  return true;
}

can_msgs__msg__CanState *
can_msgs__msg__CanState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_msgs__msg__CanState * msg = (can_msgs__msg__CanState *)allocator.allocate(sizeof(can_msgs__msg__CanState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(can_msgs__msg__CanState));
  bool success = can_msgs__msg__CanState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
can_msgs__msg__CanState__destroy(can_msgs__msg__CanState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    can_msgs__msg__CanState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
can_msgs__msg__CanState__Sequence__init(can_msgs__msg__CanState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_msgs__msg__CanState * data = NULL;

  if (size) {
    data = (can_msgs__msg__CanState *)allocator.zero_allocate(size, sizeof(can_msgs__msg__CanState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = can_msgs__msg__CanState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        can_msgs__msg__CanState__fini(&data[i - 1]);
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
can_msgs__msg__CanState__Sequence__fini(can_msgs__msg__CanState__Sequence * array)
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
      can_msgs__msg__CanState__fini(&array->data[i]);
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

can_msgs__msg__CanState__Sequence *
can_msgs__msg__CanState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  can_msgs__msg__CanState__Sequence * array = (can_msgs__msg__CanState__Sequence *)allocator.allocate(sizeof(can_msgs__msg__CanState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = can_msgs__msg__CanState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
can_msgs__msg__CanState__Sequence__destroy(can_msgs__msg__CanState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    can_msgs__msg__CanState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
can_msgs__msg__CanState__Sequence__are_equal(const can_msgs__msg__CanState__Sequence * lhs, const can_msgs__msg__CanState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!can_msgs__msg__CanState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
can_msgs__msg__CanState__Sequence__copy(
  const can_msgs__msg__CanState__Sequence * input,
  can_msgs__msg__CanState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(can_msgs__msg__CanState);
    can_msgs__msg__CanState * data =
      (can_msgs__msg__CanState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!can_msgs__msg__CanState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          can_msgs__msg__CanState__fini(&data[i]);
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
    if (!can_msgs__msg__CanState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
