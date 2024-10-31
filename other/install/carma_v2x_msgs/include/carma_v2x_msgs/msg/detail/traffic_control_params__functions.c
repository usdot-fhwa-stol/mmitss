// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/traffic_control_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vclasses`
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__functions.h"
// Member `schedule`
#include "carma_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"
// Member `detail`
#include "carma_v2x_msgs/msg/detail/traffic_control_detail__functions.h"

bool
carma_v2x_msgs__msg__TrafficControlParams__init(carma_v2x_msgs__msg__TrafficControlParams * msg)
{
  if (!msg) {
    return false;
  }
  // vclasses
  if (!j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__init(&msg->vclasses, 0)) {
    carma_v2x_msgs__msg__TrafficControlParams__fini(msg);
    return false;
  }
  // schedule
  if (!carma_v2x_msgs__msg__TrafficControlSchedule__init(&msg->schedule)) {
    carma_v2x_msgs__msg__TrafficControlParams__fini(msg);
    return false;
  }
  // regulatory
  // detail
  if (!carma_v2x_msgs__msg__TrafficControlDetail__init(&msg->detail)) {
    carma_v2x_msgs__msg__TrafficControlParams__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__TrafficControlParams__fini(carma_v2x_msgs__msg__TrafficControlParams * msg)
{
  if (!msg) {
    return;
  }
  // vclasses
  j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__fini(&msg->vclasses);
  // schedule
  carma_v2x_msgs__msg__TrafficControlSchedule__fini(&msg->schedule);
  // regulatory
  // detail
  carma_v2x_msgs__msg__TrafficControlDetail__fini(&msg->detail);
}

bool
carma_v2x_msgs__msg__TrafficControlParams__are_equal(const carma_v2x_msgs__msg__TrafficControlParams * lhs, const carma_v2x_msgs__msg__TrafficControlParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vclasses
  if (!j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__are_equal(
      &(lhs->vclasses), &(rhs->vclasses)))
  {
    return false;
  }
  // schedule
  if (!carma_v2x_msgs__msg__TrafficControlSchedule__are_equal(
      &(lhs->schedule), &(rhs->schedule)))
  {
    return false;
  }
  // regulatory
  if (lhs->regulatory != rhs->regulatory) {
    return false;
  }
  // detail
  if (!carma_v2x_msgs__msg__TrafficControlDetail__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrafficControlParams__copy(
  const carma_v2x_msgs__msg__TrafficControlParams * input,
  carma_v2x_msgs__msg__TrafficControlParams * output)
{
  if (!input || !output) {
    return false;
  }
  // vclasses
  if (!j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__copy(
      &(input->vclasses), &(output->vclasses)))
  {
    return false;
  }
  // schedule
  if (!carma_v2x_msgs__msg__TrafficControlSchedule__copy(
      &(input->schedule), &(output->schedule)))
  {
    return false;
  }
  // regulatory
  output->regulatory = input->regulatory;
  // detail
  if (!carma_v2x_msgs__msg__TrafficControlDetail__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__TrafficControlParams *
carma_v2x_msgs__msg__TrafficControlParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlParams * msg = (carma_v2x_msgs__msg__TrafficControlParams *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrafficControlParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__TrafficControlParams));
  bool success = carma_v2x_msgs__msg__TrafficControlParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__TrafficControlParams__destroy(carma_v2x_msgs__msg__TrafficControlParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__TrafficControlParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__TrafficControlParams__Sequence__init(carma_v2x_msgs__msg__TrafficControlParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlParams * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__TrafficControlParams *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__TrafficControlParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__TrafficControlParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__TrafficControlParams__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__TrafficControlParams__Sequence__fini(carma_v2x_msgs__msg__TrafficControlParams__Sequence * array)
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
      carma_v2x_msgs__msg__TrafficControlParams__fini(&array->data[i]);
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

carma_v2x_msgs__msg__TrafficControlParams__Sequence *
carma_v2x_msgs__msg__TrafficControlParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlParams__Sequence * array = (carma_v2x_msgs__msg__TrafficControlParams__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrafficControlParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__TrafficControlParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__TrafficControlParams__Sequence__destroy(carma_v2x_msgs__msg__TrafficControlParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__TrafficControlParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__TrafficControlParams__Sequence__are_equal(const carma_v2x_msgs__msg__TrafficControlParams__Sequence * lhs, const carma_v2x_msgs__msg__TrafficControlParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__TrafficControlParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrafficControlParams__Sequence__copy(
  const carma_v2x_msgs__msg__TrafficControlParams__Sequence * input,
  carma_v2x_msgs__msg__TrafficControlParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__TrafficControlParams);
    carma_v2x_msgs__msg__TrafficControlParams * data =
      (carma_v2x_msgs__msg__TrafficControlParams *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__TrafficControlParams__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__TrafficControlParams__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__TrafficControlParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
