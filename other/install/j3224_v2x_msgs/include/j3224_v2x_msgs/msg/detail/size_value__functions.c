// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j3224_v2x_msgs:msg/SizeValue.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/size_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j3224_v2x_msgs__msg__SizeValue__init(j3224_v2x_msgs__msg__SizeValue * msg)
{
  if (!msg) {
    return false;
  }
  // size_value
  return true;
}

void
j3224_v2x_msgs__msg__SizeValue__fini(j3224_v2x_msgs__msg__SizeValue * msg)
{
  if (!msg) {
    return;
  }
  // size_value
}

bool
j3224_v2x_msgs__msg__SizeValue__are_equal(const j3224_v2x_msgs__msg__SizeValue * lhs, const j3224_v2x_msgs__msg__SizeValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // size_value
  if (lhs->size_value != rhs->size_value) {
    return false;
  }
  return true;
}

bool
j3224_v2x_msgs__msg__SizeValue__copy(
  const j3224_v2x_msgs__msg__SizeValue * input,
  j3224_v2x_msgs__msg__SizeValue * output)
{
  if (!input || !output) {
    return false;
  }
  // size_value
  output->size_value = input->size_value;
  return true;
}

j3224_v2x_msgs__msg__SizeValue *
j3224_v2x_msgs__msg__SizeValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__SizeValue * msg = (j3224_v2x_msgs__msg__SizeValue *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__SizeValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j3224_v2x_msgs__msg__SizeValue));
  bool success = j3224_v2x_msgs__msg__SizeValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j3224_v2x_msgs__msg__SizeValue__destroy(j3224_v2x_msgs__msg__SizeValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j3224_v2x_msgs__msg__SizeValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j3224_v2x_msgs__msg__SizeValue__Sequence__init(j3224_v2x_msgs__msg__SizeValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__SizeValue * data = NULL;

  if (size) {
    data = (j3224_v2x_msgs__msg__SizeValue *)allocator.zero_allocate(size, sizeof(j3224_v2x_msgs__msg__SizeValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j3224_v2x_msgs__msg__SizeValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j3224_v2x_msgs__msg__SizeValue__fini(&data[i - 1]);
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
j3224_v2x_msgs__msg__SizeValue__Sequence__fini(j3224_v2x_msgs__msg__SizeValue__Sequence * array)
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
      j3224_v2x_msgs__msg__SizeValue__fini(&array->data[i]);
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

j3224_v2x_msgs__msg__SizeValue__Sequence *
j3224_v2x_msgs__msg__SizeValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__SizeValue__Sequence * array = (j3224_v2x_msgs__msg__SizeValue__Sequence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__SizeValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j3224_v2x_msgs__msg__SizeValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j3224_v2x_msgs__msg__SizeValue__Sequence__destroy(j3224_v2x_msgs__msg__SizeValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j3224_v2x_msgs__msg__SizeValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j3224_v2x_msgs__msg__SizeValue__Sequence__are_equal(const j3224_v2x_msgs__msg__SizeValue__Sequence * lhs, const j3224_v2x_msgs__msg__SizeValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j3224_v2x_msgs__msg__SizeValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j3224_v2x_msgs__msg__SizeValue__Sequence__copy(
  const j3224_v2x_msgs__msg__SizeValue__Sequence * input,
  j3224_v2x_msgs__msg__SizeValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j3224_v2x_msgs__msg__SizeValue);
    j3224_v2x_msgs__msg__SizeValue * data =
      (j3224_v2x_msgs__msg__SizeValue *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j3224_v2x_msgs__msg__SizeValue__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j3224_v2x_msgs__msg__SizeValue__fini(&data[i]);
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
    if (!j3224_v2x_msgs__msg__SizeValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
