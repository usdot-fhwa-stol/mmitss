// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start`
// Member `end`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `dow`
#include "j2735_v2x_msgs/msg/detail/day_of_week__functions.h"
// Member `between`
#include "carma_v2x_msgs/msg/detail/daily_schedule__functions.h"
// Member `repeat`
#include "carma_v2x_msgs/msg/detail/repeat_params__functions.h"

bool
carma_v2x_msgs__msg__TrafficControlSchedule__init(carma_v2x_msgs__msg__TrafficControlSchedule * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!builtin_interfaces__msg__Time__init(&msg->start)) {
    carma_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
    return false;
  }
  // end
  if (!builtin_interfaces__msg__Time__init(&msg->end)) {
    carma_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
    return false;
  }
  // end_exists
  // dow
  if (!j2735_v2x_msgs__msg__DayOfWeek__init(&msg->dow)) {
    carma_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
    return false;
  }
  // dow_exists
  // between
  if (!carma_v2x_msgs__msg__DailySchedule__Sequence__init(&msg->between, 0)) {
    carma_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
    return false;
  }
  // between_exists
  // repeat
  if (!carma_v2x_msgs__msg__RepeatParams__init(&msg->repeat)) {
    carma_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
    return false;
  }
  // repeat_exists
  return true;
}

void
carma_v2x_msgs__msg__TrafficControlSchedule__fini(carma_v2x_msgs__msg__TrafficControlSchedule * msg)
{
  if (!msg) {
    return;
  }
  // start
  builtin_interfaces__msg__Time__fini(&msg->start);
  // end
  builtin_interfaces__msg__Time__fini(&msg->end);
  // end_exists
  // dow
  j2735_v2x_msgs__msg__DayOfWeek__fini(&msg->dow);
  // dow_exists
  // between
  carma_v2x_msgs__msg__DailySchedule__Sequence__fini(&msg->between);
  // between_exists
  // repeat
  carma_v2x_msgs__msg__RepeatParams__fini(&msg->repeat);
  // repeat_exists
}

bool
carma_v2x_msgs__msg__TrafficControlSchedule__are_equal(const carma_v2x_msgs__msg__TrafficControlSchedule * lhs, const carma_v2x_msgs__msg__TrafficControlSchedule * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // end
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end), &(rhs->end)))
  {
    return false;
  }
  // end_exists
  if (lhs->end_exists != rhs->end_exists) {
    return false;
  }
  // dow
  if (!j2735_v2x_msgs__msg__DayOfWeek__are_equal(
      &(lhs->dow), &(rhs->dow)))
  {
    return false;
  }
  // dow_exists
  if (lhs->dow_exists != rhs->dow_exists) {
    return false;
  }
  // between
  if (!carma_v2x_msgs__msg__DailySchedule__Sequence__are_equal(
      &(lhs->between), &(rhs->between)))
  {
    return false;
  }
  // between_exists
  if (lhs->between_exists != rhs->between_exists) {
    return false;
  }
  // repeat
  if (!carma_v2x_msgs__msg__RepeatParams__are_equal(
      &(lhs->repeat), &(rhs->repeat)))
  {
    return false;
  }
  // repeat_exists
  if (lhs->repeat_exists != rhs->repeat_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrafficControlSchedule__copy(
  const carma_v2x_msgs__msg__TrafficControlSchedule * input,
  carma_v2x_msgs__msg__TrafficControlSchedule * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // end
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end), &(output->end)))
  {
    return false;
  }
  // end_exists
  output->end_exists = input->end_exists;
  // dow
  if (!j2735_v2x_msgs__msg__DayOfWeek__copy(
      &(input->dow), &(output->dow)))
  {
    return false;
  }
  // dow_exists
  output->dow_exists = input->dow_exists;
  // between
  if (!carma_v2x_msgs__msg__DailySchedule__Sequence__copy(
      &(input->between), &(output->between)))
  {
    return false;
  }
  // between_exists
  output->between_exists = input->between_exists;
  // repeat
  if (!carma_v2x_msgs__msg__RepeatParams__copy(
      &(input->repeat), &(output->repeat)))
  {
    return false;
  }
  // repeat_exists
  output->repeat_exists = input->repeat_exists;
  return true;
}

carma_v2x_msgs__msg__TrafficControlSchedule *
carma_v2x_msgs__msg__TrafficControlSchedule__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlSchedule * msg = (carma_v2x_msgs__msg__TrafficControlSchedule *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrafficControlSchedule), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__TrafficControlSchedule));
  bool success = carma_v2x_msgs__msg__TrafficControlSchedule__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__TrafficControlSchedule__destroy(carma_v2x_msgs__msg__TrafficControlSchedule * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__TrafficControlSchedule__Sequence__init(carma_v2x_msgs__msg__TrafficControlSchedule__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlSchedule * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__TrafficControlSchedule *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__TrafficControlSchedule), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__TrafficControlSchedule__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__TrafficControlSchedule__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__TrafficControlSchedule__Sequence__fini(carma_v2x_msgs__msg__TrafficControlSchedule__Sequence * array)
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
      carma_v2x_msgs__msg__TrafficControlSchedule__fini(&array->data[i]);
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

carma_v2x_msgs__msg__TrafficControlSchedule__Sequence *
carma_v2x_msgs__msg__TrafficControlSchedule__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlSchedule__Sequence * array = (carma_v2x_msgs__msg__TrafficControlSchedule__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrafficControlSchedule__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__TrafficControlSchedule__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__TrafficControlSchedule__Sequence__destroy(carma_v2x_msgs__msg__TrafficControlSchedule__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__TrafficControlSchedule__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__TrafficControlSchedule__Sequence__are_equal(const carma_v2x_msgs__msg__TrafficControlSchedule__Sequence * lhs, const carma_v2x_msgs__msg__TrafficControlSchedule__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__TrafficControlSchedule__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrafficControlSchedule__Sequence__copy(
  const carma_v2x_msgs__msg__TrafficControlSchedule__Sequence * input,
  carma_v2x_msgs__msg__TrafficControlSchedule__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__TrafficControlSchedule);
    carma_v2x_msgs__msg__TrafficControlSchedule * data =
      (carma_v2x_msgs__msg__TrafficControlSchedule *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__TrafficControlSchedule__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__TrafficControlSchedule__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__TrafficControlSchedule__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
