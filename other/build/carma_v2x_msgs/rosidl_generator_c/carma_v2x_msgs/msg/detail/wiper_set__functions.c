// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/wiper_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status_front`
// Member `status_rear`
#include "j2735_v2x_msgs/msg/detail/wiper_status__functions.h"
// Member `rate_front`
// Member `rate_rear`
#include "carma_v2x_msgs/msg/detail/wiper_rate__functions.h"

bool
carma_v2x_msgs__msg__WiperSet__init(carma_v2x_msgs__msg__WiperSet * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // status_front
  if (!j2735_v2x_msgs__msg__WiperStatus__init(&msg->status_front)) {
    carma_v2x_msgs__msg__WiperSet__fini(msg);
    return false;
  }
  // rate_front
  if (!carma_v2x_msgs__msg__WiperRate__init(&msg->rate_front)) {
    carma_v2x_msgs__msg__WiperSet__fini(msg);
    return false;
  }
  // status_rear
  if (!j2735_v2x_msgs__msg__WiperStatus__init(&msg->status_rear)) {
    carma_v2x_msgs__msg__WiperSet__fini(msg);
    return false;
  }
  // rate_rear
  if (!carma_v2x_msgs__msg__WiperRate__init(&msg->rate_rear)) {
    carma_v2x_msgs__msg__WiperSet__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__WiperSet__fini(carma_v2x_msgs__msg__WiperSet * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // status_front
  j2735_v2x_msgs__msg__WiperStatus__fini(&msg->status_front);
  // rate_front
  carma_v2x_msgs__msg__WiperRate__fini(&msg->rate_front);
  // status_rear
  j2735_v2x_msgs__msg__WiperStatus__fini(&msg->status_rear);
  // rate_rear
  carma_v2x_msgs__msg__WiperRate__fini(&msg->rate_rear);
}

bool
carma_v2x_msgs__msg__WiperSet__are_equal(const carma_v2x_msgs__msg__WiperSet * lhs, const carma_v2x_msgs__msg__WiperSet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // status_front
  if (!j2735_v2x_msgs__msg__WiperStatus__are_equal(
      &(lhs->status_front), &(rhs->status_front)))
  {
    return false;
  }
  // rate_front
  if (!carma_v2x_msgs__msg__WiperRate__are_equal(
      &(lhs->rate_front), &(rhs->rate_front)))
  {
    return false;
  }
  // status_rear
  if (!j2735_v2x_msgs__msg__WiperStatus__are_equal(
      &(lhs->status_rear), &(rhs->status_rear)))
  {
    return false;
  }
  // rate_rear
  if (!carma_v2x_msgs__msg__WiperRate__are_equal(
      &(lhs->rate_rear), &(rhs->rate_rear)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__WiperSet__copy(
  const carma_v2x_msgs__msg__WiperSet * input,
  carma_v2x_msgs__msg__WiperSet * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // status_front
  if (!j2735_v2x_msgs__msg__WiperStatus__copy(
      &(input->status_front), &(output->status_front)))
  {
    return false;
  }
  // rate_front
  if (!carma_v2x_msgs__msg__WiperRate__copy(
      &(input->rate_front), &(output->rate_front)))
  {
    return false;
  }
  // status_rear
  if (!j2735_v2x_msgs__msg__WiperStatus__copy(
      &(input->status_rear), &(output->status_rear)))
  {
    return false;
  }
  // rate_rear
  if (!carma_v2x_msgs__msg__WiperRate__copy(
      &(input->rate_rear), &(output->rate_rear)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__WiperSet *
carma_v2x_msgs__msg__WiperSet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__WiperSet * msg = (carma_v2x_msgs__msg__WiperSet *)allocator.allocate(sizeof(carma_v2x_msgs__msg__WiperSet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__WiperSet));
  bool success = carma_v2x_msgs__msg__WiperSet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__WiperSet__destroy(carma_v2x_msgs__msg__WiperSet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__WiperSet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__WiperSet__Sequence__init(carma_v2x_msgs__msg__WiperSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__WiperSet * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__WiperSet *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__WiperSet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__WiperSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__WiperSet__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__WiperSet__Sequence__fini(carma_v2x_msgs__msg__WiperSet__Sequence * array)
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
      carma_v2x_msgs__msg__WiperSet__fini(&array->data[i]);
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

carma_v2x_msgs__msg__WiperSet__Sequence *
carma_v2x_msgs__msg__WiperSet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__WiperSet__Sequence * array = (carma_v2x_msgs__msg__WiperSet__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__WiperSet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__WiperSet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__WiperSet__Sequence__destroy(carma_v2x_msgs__msg__WiperSet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__WiperSet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__WiperSet__Sequence__are_equal(const carma_v2x_msgs__msg__WiperSet__Sequence * lhs, const carma_v2x_msgs__msg__WiperSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__WiperSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__WiperSet__Sequence__copy(
  const carma_v2x_msgs__msg__WiperSet__Sequence * input,
  carma_v2x_msgs__msg__WiperSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__WiperSet);
    carma_v2x_msgs__msg__WiperSet * data =
      (carma_v2x_msgs__msg__WiperSet *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__WiperSet__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__WiperSet__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__WiperSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
