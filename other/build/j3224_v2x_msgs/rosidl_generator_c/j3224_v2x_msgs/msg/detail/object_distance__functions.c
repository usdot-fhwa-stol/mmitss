// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j3224_v2x_msgs:msg/ObjectDistance.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/object_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j3224_v2x_msgs__msg__ObjectDistance__init(j3224_v2x_msgs__msg__ObjectDistance * msg)
{
  if (!msg) {
    return false;
  }
  // object_distance
  return true;
}

void
j3224_v2x_msgs__msg__ObjectDistance__fini(j3224_v2x_msgs__msg__ObjectDistance * msg)
{
  if (!msg) {
    return;
  }
  // object_distance
}

bool
j3224_v2x_msgs__msg__ObjectDistance__are_equal(const j3224_v2x_msgs__msg__ObjectDistance * lhs, const j3224_v2x_msgs__msg__ObjectDistance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_distance
  if (lhs->object_distance != rhs->object_distance) {
    return false;
  }
  return true;
}

bool
j3224_v2x_msgs__msg__ObjectDistance__copy(
  const j3224_v2x_msgs__msg__ObjectDistance * input,
  j3224_v2x_msgs__msg__ObjectDistance * output)
{
  if (!input || !output) {
    return false;
  }
  // object_distance
  output->object_distance = input->object_distance;
  return true;
}

j3224_v2x_msgs__msg__ObjectDistance *
j3224_v2x_msgs__msg__ObjectDistance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__ObjectDistance * msg = (j3224_v2x_msgs__msg__ObjectDistance *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__ObjectDistance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j3224_v2x_msgs__msg__ObjectDistance));
  bool success = j3224_v2x_msgs__msg__ObjectDistance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j3224_v2x_msgs__msg__ObjectDistance__destroy(j3224_v2x_msgs__msg__ObjectDistance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j3224_v2x_msgs__msg__ObjectDistance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j3224_v2x_msgs__msg__ObjectDistance__Sequence__init(j3224_v2x_msgs__msg__ObjectDistance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__ObjectDistance * data = NULL;

  if (size) {
    data = (j3224_v2x_msgs__msg__ObjectDistance *)allocator.zero_allocate(size, sizeof(j3224_v2x_msgs__msg__ObjectDistance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j3224_v2x_msgs__msg__ObjectDistance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j3224_v2x_msgs__msg__ObjectDistance__fini(&data[i - 1]);
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
j3224_v2x_msgs__msg__ObjectDistance__Sequence__fini(j3224_v2x_msgs__msg__ObjectDistance__Sequence * array)
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
      j3224_v2x_msgs__msg__ObjectDistance__fini(&array->data[i]);
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

j3224_v2x_msgs__msg__ObjectDistance__Sequence *
j3224_v2x_msgs__msg__ObjectDistance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__ObjectDistance__Sequence * array = (j3224_v2x_msgs__msg__ObjectDistance__Sequence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__ObjectDistance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j3224_v2x_msgs__msg__ObjectDistance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j3224_v2x_msgs__msg__ObjectDistance__Sequence__destroy(j3224_v2x_msgs__msg__ObjectDistance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j3224_v2x_msgs__msg__ObjectDistance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j3224_v2x_msgs__msg__ObjectDistance__Sequence__are_equal(const j3224_v2x_msgs__msg__ObjectDistance__Sequence * lhs, const j3224_v2x_msgs__msg__ObjectDistance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j3224_v2x_msgs__msg__ObjectDistance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j3224_v2x_msgs__msg__ObjectDistance__Sequence__copy(
  const j3224_v2x_msgs__msg__ObjectDistance__Sequence * input,
  j3224_v2x_msgs__msg__ObjectDistance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j3224_v2x_msgs__msg__ObjectDistance);
    j3224_v2x_msgs__msg__ObjectDistance * data =
      (j3224_v2x_msgs__msg__ObjectDistance *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j3224_v2x_msgs__msg__ObjectDistance__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j3224_v2x_msgs__msg__ObjectDistance__fini(&data[i]);
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
    if (!j3224_v2x_msgs__msg__ObjectDistance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
