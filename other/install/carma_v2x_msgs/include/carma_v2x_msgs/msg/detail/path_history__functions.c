// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/path_history__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `crumb_data`
#include "carma_v2x_msgs/msg/detail/path_history_point_list__functions.h"
// Member `initial_position`
#include "carma_v2x_msgs/msg/detail/full_position_vector__functions.h"
// Member `curr_gnss_status`
#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"

bool
carma_v2x_msgs__msg__PathHistory__init(carma_v2x_msgs__msg__PathHistory * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // crumb_data
  if (!carma_v2x_msgs__msg__PathHistoryPointList__init(&msg->crumb_data)) {
    carma_v2x_msgs__msg__PathHistory__fini(msg);
    return false;
  }
  // initial_position
  if (!carma_v2x_msgs__msg__FullPositionVector__init(&msg->initial_position)) {
    carma_v2x_msgs__msg__PathHistory__fini(msg);
    return false;
  }
  // curr_gnss_status
  if (!j2735_v2x_msgs__msg__GNSSStatus__init(&msg->curr_gnss_status)) {
    carma_v2x_msgs__msg__PathHistory__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__PathHistory__fini(carma_v2x_msgs__msg__PathHistory * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // crumb_data
  carma_v2x_msgs__msg__PathHistoryPointList__fini(&msg->crumb_data);
  // initial_position
  carma_v2x_msgs__msg__FullPositionVector__fini(&msg->initial_position);
  // curr_gnss_status
  j2735_v2x_msgs__msg__GNSSStatus__fini(&msg->curr_gnss_status);
}

bool
carma_v2x_msgs__msg__PathHistory__are_equal(const carma_v2x_msgs__msg__PathHistory * lhs, const carma_v2x_msgs__msg__PathHistory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // crumb_data
  if (!carma_v2x_msgs__msg__PathHistoryPointList__are_equal(
      &(lhs->crumb_data), &(rhs->crumb_data)))
  {
    return false;
  }
  // initial_position
  if (!carma_v2x_msgs__msg__FullPositionVector__are_equal(
      &(lhs->initial_position), &(rhs->initial_position)))
  {
    return false;
  }
  // curr_gnss_status
  if (!j2735_v2x_msgs__msg__GNSSStatus__are_equal(
      &(lhs->curr_gnss_status), &(rhs->curr_gnss_status)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__PathHistory__copy(
  const carma_v2x_msgs__msg__PathHistory * input,
  carma_v2x_msgs__msg__PathHistory * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // crumb_data
  if (!carma_v2x_msgs__msg__PathHistoryPointList__copy(
      &(input->crumb_data), &(output->crumb_data)))
  {
    return false;
  }
  // initial_position
  if (!carma_v2x_msgs__msg__FullPositionVector__copy(
      &(input->initial_position), &(output->initial_position)))
  {
    return false;
  }
  // curr_gnss_status
  if (!j2735_v2x_msgs__msg__GNSSStatus__copy(
      &(input->curr_gnss_status), &(output->curr_gnss_status)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__PathHistory *
carma_v2x_msgs__msg__PathHistory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__PathHistory * msg = (carma_v2x_msgs__msg__PathHistory *)allocator.allocate(sizeof(carma_v2x_msgs__msg__PathHistory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__PathHistory));
  bool success = carma_v2x_msgs__msg__PathHistory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__PathHistory__destroy(carma_v2x_msgs__msg__PathHistory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__PathHistory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__PathHistory__Sequence__init(carma_v2x_msgs__msg__PathHistory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__PathHistory * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__PathHistory *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__PathHistory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__PathHistory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__PathHistory__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__PathHistory__Sequence__fini(carma_v2x_msgs__msg__PathHistory__Sequence * array)
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
      carma_v2x_msgs__msg__PathHistory__fini(&array->data[i]);
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

carma_v2x_msgs__msg__PathHistory__Sequence *
carma_v2x_msgs__msg__PathHistory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__PathHistory__Sequence * array = (carma_v2x_msgs__msg__PathHistory__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__PathHistory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__PathHistory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__PathHistory__Sequence__destroy(carma_v2x_msgs__msg__PathHistory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__PathHistory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__PathHistory__Sequence__are_equal(const carma_v2x_msgs__msg__PathHistory__Sequence * lhs, const carma_v2x_msgs__msg__PathHistory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__PathHistory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__PathHistory__Sequence__copy(
  const carma_v2x_msgs__msg__PathHistory__Sequence * input,
  carma_v2x_msgs__msg__PathHistory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__PathHistory);
    carma_v2x_msgs__msg__PathHistory * data =
      (carma_v2x_msgs__msg__PathHistory *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__PathHistory__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__PathHistory__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__PathHistory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
