// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/RestrictionAppliesTo.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/restriction_applies_to__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__RestrictionAppliesTo__init(j2735_v2x_msgs__msg__RestrictionAppliesTo * msg)
{
  if (!msg) {
    return false;
  }
  // restriction_applies_to
  return true;
}

void
j2735_v2x_msgs__msg__RestrictionAppliesTo__fini(j2735_v2x_msgs__msg__RestrictionAppliesTo * msg)
{
  if (!msg) {
    return;
  }
  // restriction_applies_to
}

bool
j2735_v2x_msgs__msg__RestrictionAppliesTo__are_equal(const j2735_v2x_msgs__msg__RestrictionAppliesTo * lhs, const j2735_v2x_msgs__msg__RestrictionAppliesTo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // restriction_applies_to
  if (lhs->restriction_applies_to != rhs->restriction_applies_to) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__RestrictionAppliesTo__copy(
  const j2735_v2x_msgs__msg__RestrictionAppliesTo * input,
  j2735_v2x_msgs__msg__RestrictionAppliesTo * output)
{
  if (!input || !output) {
    return false;
  }
  // restriction_applies_to
  output->restriction_applies_to = input->restriction_applies_to;
  return true;
}

j2735_v2x_msgs__msg__RestrictionAppliesTo *
j2735_v2x_msgs__msg__RestrictionAppliesTo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__RestrictionAppliesTo * msg = (j2735_v2x_msgs__msg__RestrictionAppliesTo *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__RestrictionAppliesTo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__RestrictionAppliesTo));
  bool success = j2735_v2x_msgs__msg__RestrictionAppliesTo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__RestrictionAppliesTo__destroy(j2735_v2x_msgs__msg__RestrictionAppliesTo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__RestrictionAppliesTo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence__init(j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__RestrictionAppliesTo * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__RestrictionAppliesTo *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__RestrictionAppliesTo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__RestrictionAppliesTo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__RestrictionAppliesTo__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence__fini(j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence * array)
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
      j2735_v2x_msgs__msg__RestrictionAppliesTo__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence *
j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence * array = (j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence__destroy(j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence__are_equal(const j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence * lhs, const j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__RestrictionAppliesTo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence__copy(
  const j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence * input,
  j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__RestrictionAppliesTo);
    j2735_v2x_msgs__msg__RestrictionAppliesTo * data =
      (j2735_v2x_msgs__msg__RestrictionAppliesTo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__RestrictionAppliesTo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__RestrictionAppliesTo__fini(&data[i]);
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
    if (!j2735_v2x_msgs__msg__RestrictionAppliesTo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
