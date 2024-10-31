// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/PitchRate.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/pitch_rate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_v2x_msgs__msg__PitchRate__init(carma_v2x_msgs__msg__PitchRate * msg)
{
  if (!msg) {
    return false;
  }
  // pitch_rate
  // unavailable
  return true;
}

void
carma_v2x_msgs__msg__PitchRate__fini(carma_v2x_msgs__msg__PitchRate * msg)
{
  if (!msg) {
    return;
  }
  // pitch_rate
  // unavailable
}

bool
carma_v2x_msgs__msg__PitchRate__are_equal(const carma_v2x_msgs__msg__PitchRate * lhs, const carma_v2x_msgs__msg__PitchRate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pitch_rate
  if (lhs->pitch_rate != rhs->pitch_rate) {
    return false;
  }
  // unavailable
  if (lhs->unavailable != rhs->unavailable) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__PitchRate__copy(
  const carma_v2x_msgs__msg__PitchRate * input,
  carma_v2x_msgs__msg__PitchRate * output)
{
  if (!input || !output) {
    return false;
  }
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  // unavailable
  output->unavailable = input->unavailable;
  return true;
}

carma_v2x_msgs__msg__PitchRate *
carma_v2x_msgs__msg__PitchRate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__PitchRate * msg = (carma_v2x_msgs__msg__PitchRate *)allocator.allocate(sizeof(carma_v2x_msgs__msg__PitchRate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__PitchRate));
  bool success = carma_v2x_msgs__msg__PitchRate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__PitchRate__destroy(carma_v2x_msgs__msg__PitchRate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__PitchRate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__PitchRate__Sequence__init(carma_v2x_msgs__msg__PitchRate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__PitchRate * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__PitchRate *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__PitchRate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__PitchRate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__PitchRate__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__PitchRate__Sequence__fini(carma_v2x_msgs__msg__PitchRate__Sequence * array)
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
      carma_v2x_msgs__msg__PitchRate__fini(&array->data[i]);
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

carma_v2x_msgs__msg__PitchRate__Sequence *
carma_v2x_msgs__msg__PitchRate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__PitchRate__Sequence * array = (carma_v2x_msgs__msg__PitchRate__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__PitchRate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__PitchRate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__PitchRate__Sequence__destroy(carma_v2x_msgs__msg__PitchRate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__PitchRate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__PitchRate__Sequence__are_equal(const carma_v2x_msgs__msg__PitchRate__Sequence * lhs, const carma_v2x_msgs__msg__PitchRate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__PitchRate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__PitchRate__Sequence__copy(
  const carma_v2x_msgs__msg__PitchRate__Sequence * input,
  carma_v2x_msgs__msg__PitchRate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__PitchRate);
    carma_v2x_msgs__msg__PitchRate * data =
      (carma_v2x_msgs__msg__PitchRate *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__PitchRate__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__PitchRate__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__PitchRate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
