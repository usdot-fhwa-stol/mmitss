// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j3224_v2x_msgs:msg/AngularVelocity.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/angular_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pitch_rate`
#include "j3224_v2x_msgs/msg/detail/pitch_rate__functions.h"
// Member `roll_rate`
#include "j3224_v2x_msgs/msg/detail/roll_rate__functions.h"

bool
j3224_v2x_msgs__msg__AngularVelocity__init(j3224_v2x_msgs__msg__AngularVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // pitch_rate
  if (!j3224_v2x_msgs__msg__PitchRate__init(&msg->pitch_rate)) {
    j3224_v2x_msgs__msg__AngularVelocity__fini(msg);
    return false;
  }
  // roll_rate
  if (!j3224_v2x_msgs__msg__RollRate__init(&msg->roll_rate)) {
    j3224_v2x_msgs__msg__AngularVelocity__fini(msg);
    return false;
  }
  return true;
}

void
j3224_v2x_msgs__msg__AngularVelocity__fini(j3224_v2x_msgs__msg__AngularVelocity * msg)
{
  if (!msg) {
    return;
  }
  // pitch_rate
  j3224_v2x_msgs__msg__PitchRate__fini(&msg->pitch_rate);
  // roll_rate
  j3224_v2x_msgs__msg__RollRate__fini(&msg->roll_rate);
}

bool
j3224_v2x_msgs__msg__AngularVelocity__are_equal(const j3224_v2x_msgs__msg__AngularVelocity * lhs, const j3224_v2x_msgs__msg__AngularVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pitch_rate
  if (!j3224_v2x_msgs__msg__PitchRate__are_equal(
      &(lhs->pitch_rate), &(rhs->pitch_rate)))
  {
    return false;
  }
  // roll_rate
  if (!j3224_v2x_msgs__msg__RollRate__are_equal(
      &(lhs->roll_rate), &(rhs->roll_rate)))
  {
    return false;
  }
  return true;
}

bool
j3224_v2x_msgs__msg__AngularVelocity__copy(
  const j3224_v2x_msgs__msg__AngularVelocity * input,
  j3224_v2x_msgs__msg__AngularVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // pitch_rate
  if (!j3224_v2x_msgs__msg__PitchRate__copy(
      &(input->pitch_rate), &(output->pitch_rate)))
  {
    return false;
  }
  // roll_rate
  if (!j3224_v2x_msgs__msg__RollRate__copy(
      &(input->roll_rate), &(output->roll_rate)))
  {
    return false;
  }
  return true;
}

j3224_v2x_msgs__msg__AngularVelocity *
j3224_v2x_msgs__msg__AngularVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__AngularVelocity * msg = (j3224_v2x_msgs__msg__AngularVelocity *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__AngularVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j3224_v2x_msgs__msg__AngularVelocity));
  bool success = j3224_v2x_msgs__msg__AngularVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j3224_v2x_msgs__msg__AngularVelocity__destroy(j3224_v2x_msgs__msg__AngularVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j3224_v2x_msgs__msg__AngularVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j3224_v2x_msgs__msg__AngularVelocity__Sequence__init(j3224_v2x_msgs__msg__AngularVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__AngularVelocity * data = NULL;

  if (size) {
    data = (j3224_v2x_msgs__msg__AngularVelocity *)allocator.zero_allocate(size, sizeof(j3224_v2x_msgs__msg__AngularVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j3224_v2x_msgs__msg__AngularVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j3224_v2x_msgs__msg__AngularVelocity__fini(&data[i - 1]);
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
j3224_v2x_msgs__msg__AngularVelocity__Sequence__fini(j3224_v2x_msgs__msg__AngularVelocity__Sequence * array)
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
      j3224_v2x_msgs__msg__AngularVelocity__fini(&array->data[i]);
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

j3224_v2x_msgs__msg__AngularVelocity__Sequence *
j3224_v2x_msgs__msg__AngularVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__AngularVelocity__Sequence * array = (j3224_v2x_msgs__msg__AngularVelocity__Sequence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__AngularVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j3224_v2x_msgs__msg__AngularVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j3224_v2x_msgs__msg__AngularVelocity__Sequence__destroy(j3224_v2x_msgs__msg__AngularVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j3224_v2x_msgs__msg__AngularVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j3224_v2x_msgs__msg__AngularVelocity__Sequence__are_equal(const j3224_v2x_msgs__msg__AngularVelocity__Sequence * lhs, const j3224_v2x_msgs__msg__AngularVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j3224_v2x_msgs__msg__AngularVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j3224_v2x_msgs__msg__AngularVelocity__Sequence__copy(
  const j3224_v2x_msgs__msg__AngularVelocity__Sequence * input,
  j3224_v2x_msgs__msg__AngularVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j3224_v2x_msgs__msg__AngularVelocity);
    j3224_v2x_msgs__msg__AngularVelocity * data =
      (j3224_v2x_msgs__msg__AngularVelocity *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j3224_v2x_msgs__msg__AngularVelocity__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j3224_v2x_msgs__msg__AngularVelocity__fini(&data[i]);
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
    if (!j3224_v2x_msgs__msg__AngularVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
