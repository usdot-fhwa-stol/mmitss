// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/vehicle_width__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_v2x_msgs__msg__VehicleWidth__init(carma_v2x_msgs__msg__VehicleWidth * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_width
  // unavailable
  return true;
}

void
carma_v2x_msgs__msg__VehicleWidth__fini(carma_v2x_msgs__msg__VehicleWidth * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_width
  // unavailable
}

bool
carma_v2x_msgs__msg__VehicleWidth__are_equal(const carma_v2x_msgs__msg__VehicleWidth * lhs, const carma_v2x_msgs__msg__VehicleWidth * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_width
  if (lhs->vehicle_width != rhs->vehicle_width) {
    return false;
  }
  // unavailable
  if (lhs->unavailable != rhs->unavailable) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__VehicleWidth__copy(
  const carma_v2x_msgs__msg__VehicleWidth * input,
  carma_v2x_msgs__msg__VehicleWidth * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_width
  output->vehicle_width = input->vehicle_width;
  // unavailable
  output->unavailable = input->unavailable;
  return true;
}

carma_v2x_msgs__msg__VehicleWidth *
carma_v2x_msgs__msg__VehicleWidth__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__VehicleWidth * msg = (carma_v2x_msgs__msg__VehicleWidth *)allocator.allocate(sizeof(carma_v2x_msgs__msg__VehicleWidth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__VehicleWidth));
  bool success = carma_v2x_msgs__msg__VehicleWidth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__VehicleWidth__destroy(carma_v2x_msgs__msg__VehicleWidth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__VehicleWidth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__VehicleWidth__Sequence__init(carma_v2x_msgs__msg__VehicleWidth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__VehicleWidth * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__VehicleWidth *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__VehicleWidth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__VehicleWidth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__VehicleWidth__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__VehicleWidth__Sequence__fini(carma_v2x_msgs__msg__VehicleWidth__Sequence * array)
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
      carma_v2x_msgs__msg__VehicleWidth__fini(&array->data[i]);
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

carma_v2x_msgs__msg__VehicleWidth__Sequence *
carma_v2x_msgs__msg__VehicleWidth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__VehicleWidth__Sequence * array = (carma_v2x_msgs__msg__VehicleWidth__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__VehicleWidth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__VehicleWidth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__VehicleWidth__Sequence__destroy(carma_v2x_msgs__msg__VehicleWidth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__VehicleWidth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__VehicleWidth__Sequence__are_equal(const carma_v2x_msgs__msg__VehicleWidth__Sequence * lhs, const carma_v2x_msgs__msg__VehicleWidth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__VehicleWidth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__VehicleWidth__Sequence__copy(
  const carma_v2x_msgs__msg__VehicleWidth__Sequence * input,
  carma_v2x_msgs__msg__VehicleWidth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__VehicleWidth);
    carma_v2x_msgs__msg__VehicleWidth * data =
      (carma_v2x_msgs__msg__VehicleWidth *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__VehicleWidth__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__VehicleWidth__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__VehicleWidth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
