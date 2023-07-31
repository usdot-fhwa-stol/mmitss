// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/NodeXY24b.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/node_xy24b__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
#include "carma_v2x_msgs/msg/detail/offset_b12__functions.h"

bool
carma_v2x_msgs__msg__NodeXY24b__init(carma_v2x_msgs__msg__NodeXY24b * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!carma_v2x_msgs__msg__OffsetB12__init(&msg->x)) {
    carma_v2x_msgs__msg__NodeXY24b__fini(msg);
    return false;
  }
  // y
  if (!carma_v2x_msgs__msg__OffsetB12__init(&msg->y)) {
    carma_v2x_msgs__msg__NodeXY24b__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__NodeXY24b__fini(carma_v2x_msgs__msg__NodeXY24b * msg)
{
  if (!msg) {
    return;
  }
  // x
  carma_v2x_msgs__msg__OffsetB12__fini(&msg->x);
  // y
  carma_v2x_msgs__msg__OffsetB12__fini(&msg->y);
}

bool
carma_v2x_msgs__msg__NodeXY24b__are_equal(const carma_v2x_msgs__msg__NodeXY24b * lhs, const carma_v2x_msgs__msg__NodeXY24b * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!carma_v2x_msgs__msg__OffsetB12__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!carma_v2x_msgs__msg__OffsetB12__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__NodeXY24b__copy(
  const carma_v2x_msgs__msg__NodeXY24b * input,
  carma_v2x_msgs__msg__NodeXY24b * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!carma_v2x_msgs__msg__OffsetB12__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!carma_v2x_msgs__msg__OffsetB12__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__NodeXY24b *
carma_v2x_msgs__msg__NodeXY24b__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__NodeXY24b * msg = (carma_v2x_msgs__msg__NodeXY24b *)allocator.allocate(sizeof(carma_v2x_msgs__msg__NodeXY24b), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__NodeXY24b));
  bool success = carma_v2x_msgs__msg__NodeXY24b__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__NodeXY24b__destroy(carma_v2x_msgs__msg__NodeXY24b * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__NodeXY24b__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__NodeXY24b__Sequence__init(carma_v2x_msgs__msg__NodeXY24b__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__NodeXY24b * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__NodeXY24b *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__NodeXY24b), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__NodeXY24b__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__NodeXY24b__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__NodeXY24b__Sequence__fini(carma_v2x_msgs__msg__NodeXY24b__Sequence * array)
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
      carma_v2x_msgs__msg__NodeXY24b__fini(&array->data[i]);
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

carma_v2x_msgs__msg__NodeXY24b__Sequence *
carma_v2x_msgs__msg__NodeXY24b__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__NodeXY24b__Sequence * array = (carma_v2x_msgs__msg__NodeXY24b__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__NodeXY24b__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__NodeXY24b__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__NodeXY24b__Sequence__destroy(carma_v2x_msgs__msg__NodeXY24b__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__NodeXY24b__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__NodeXY24b__Sequence__are_equal(const carma_v2x_msgs__msg__NodeXY24b__Sequence * lhs, const carma_v2x_msgs__msg__NodeXY24b__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__NodeXY24b__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__NodeXY24b__Sequence__copy(
  const carma_v2x_msgs__msg__NodeXY24b__Sequence * input,
  carma_v2x_msgs__msg__NodeXY24b__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__NodeXY24b);
    carma_v2x_msgs__msg__NodeXY24b * data =
      (carma_v2x_msgs__msg__NodeXY24b *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__NodeXY24b__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__NodeXY24b__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__NodeXY24b__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
