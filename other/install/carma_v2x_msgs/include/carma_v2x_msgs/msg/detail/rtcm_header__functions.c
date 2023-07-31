// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/rtcm_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"
// Member `ant_offset_x`
#include "carma_v2x_msgs/msg/detail/offset_b12__functions.h"
// Member `ant_offset_y`
#include "carma_v2x_msgs/msg/detail/offset_b09__functions.h"
// Member `ant_offset_z`
#include "carma_v2x_msgs/msg/detail/offset_b10__functions.h"

bool
carma_v2x_msgs__msg__RTCMHeader__init(carma_v2x_msgs__msg__RTCMHeader * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!j2735_v2x_msgs__msg__GNSSStatus__init(&msg->status)) {
    carma_v2x_msgs__msg__RTCMHeader__fini(msg);
    return false;
  }
  // ant_offset_x
  if (!carma_v2x_msgs__msg__OffsetB12__init(&msg->ant_offset_x)) {
    carma_v2x_msgs__msg__RTCMHeader__fini(msg);
    return false;
  }
  // ant_offset_y
  if (!carma_v2x_msgs__msg__OffsetB09__init(&msg->ant_offset_y)) {
    carma_v2x_msgs__msg__RTCMHeader__fini(msg);
    return false;
  }
  // ant_offset_z
  if (!carma_v2x_msgs__msg__OffsetB10__init(&msg->ant_offset_z)) {
    carma_v2x_msgs__msg__RTCMHeader__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__RTCMHeader__fini(carma_v2x_msgs__msg__RTCMHeader * msg)
{
  if (!msg) {
    return;
  }
  // status
  j2735_v2x_msgs__msg__GNSSStatus__fini(&msg->status);
  // ant_offset_x
  carma_v2x_msgs__msg__OffsetB12__fini(&msg->ant_offset_x);
  // ant_offset_y
  carma_v2x_msgs__msg__OffsetB09__fini(&msg->ant_offset_y);
  // ant_offset_z
  carma_v2x_msgs__msg__OffsetB10__fini(&msg->ant_offset_z);
}

bool
carma_v2x_msgs__msg__RTCMHeader__are_equal(const carma_v2x_msgs__msg__RTCMHeader * lhs, const carma_v2x_msgs__msg__RTCMHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!j2735_v2x_msgs__msg__GNSSStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // ant_offset_x
  if (!carma_v2x_msgs__msg__OffsetB12__are_equal(
      &(lhs->ant_offset_x), &(rhs->ant_offset_x)))
  {
    return false;
  }
  // ant_offset_y
  if (!carma_v2x_msgs__msg__OffsetB09__are_equal(
      &(lhs->ant_offset_y), &(rhs->ant_offset_y)))
  {
    return false;
  }
  // ant_offset_z
  if (!carma_v2x_msgs__msg__OffsetB10__are_equal(
      &(lhs->ant_offset_z), &(rhs->ant_offset_z)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__RTCMHeader__copy(
  const carma_v2x_msgs__msg__RTCMHeader * input,
  carma_v2x_msgs__msg__RTCMHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!j2735_v2x_msgs__msg__GNSSStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // ant_offset_x
  if (!carma_v2x_msgs__msg__OffsetB12__copy(
      &(input->ant_offset_x), &(output->ant_offset_x)))
  {
    return false;
  }
  // ant_offset_y
  if (!carma_v2x_msgs__msg__OffsetB09__copy(
      &(input->ant_offset_y), &(output->ant_offset_y)))
  {
    return false;
  }
  // ant_offset_z
  if (!carma_v2x_msgs__msg__OffsetB10__copy(
      &(input->ant_offset_z), &(output->ant_offset_z)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__RTCMHeader *
carma_v2x_msgs__msg__RTCMHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__RTCMHeader * msg = (carma_v2x_msgs__msg__RTCMHeader *)allocator.allocate(sizeof(carma_v2x_msgs__msg__RTCMHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__RTCMHeader));
  bool success = carma_v2x_msgs__msg__RTCMHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__RTCMHeader__destroy(carma_v2x_msgs__msg__RTCMHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__RTCMHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__RTCMHeader__Sequence__init(carma_v2x_msgs__msg__RTCMHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__RTCMHeader * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__RTCMHeader *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__RTCMHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__RTCMHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__RTCMHeader__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__RTCMHeader__Sequence__fini(carma_v2x_msgs__msg__RTCMHeader__Sequence * array)
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
      carma_v2x_msgs__msg__RTCMHeader__fini(&array->data[i]);
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

carma_v2x_msgs__msg__RTCMHeader__Sequence *
carma_v2x_msgs__msg__RTCMHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__RTCMHeader__Sequence * array = (carma_v2x_msgs__msg__RTCMHeader__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__RTCMHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__RTCMHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__RTCMHeader__Sequence__destroy(carma_v2x_msgs__msg__RTCMHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__RTCMHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__RTCMHeader__Sequence__are_equal(const carma_v2x_msgs__msg__RTCMHeader__Sequence * lhs, const carma_v2x_msgs__msg__RTCMHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__RTCMHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__RTCMHeader__Sequence__copy(
  const carma_v2x_msgs__msg__RTCMHeader__Sequence * input,
  carma_v2x_msgs__msg__RTCMHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__RTCMHeader);
    carma_v2x_msgs__msg__RTCMHeader * data =
      (carma_v2x_msgs__msg__RTCMHeader *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__RTCMHeader__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__RTCMHeader__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__RTCMHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
