// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_perception_msgs:msg/TrafficSignalInfoList.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/traffic_signal_info_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `traffic_signal_info_list`
#include "carma_perception_msgs/msg/detail/traffic_signal_info__functions.h"

bool
carma_perception_msgs__msg__TrafficSignalInfoList__init(carma_perception_msgs__msg__TrafficSignalInfoList * msg)
{
  if (!msg) {
    return false;
  }
  // traffic_signal_info_list
  if (!carma_perception_msgs__msg__TrafficSignalInfo__Sequence__init(&msg->traffic_signal_info_list, 0)) {
    carma_perception_msgs__msg__TrafficSignalInfoList__fini(msg);
    return false;
  }
  return true;
}

void
carma_perception_msgs__msg__TrafficSignalInfoList__fini(carma_perception_msgs__msg__TrafficSignalInfoList * msg)
{
  if (!msg) {
    return;
  }
  // traffic_signal_info_list
  carma_perception_msgs__msg__TrafficSignalInfo__Sequence__fini(&msg->traffic_signal_info_list);
}

bool
carma_perception_msgs__msg__TrafficSignalInfoList__are_equal(const carma_perception_msgs__msg__TrafficSignalInfoList * lhs, const carma_perception_msgs__msg__TrafficSignalInfoList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // traffic_signal_info_list
  if (!carma_perception_msgs__msg__TrafficSignalInfo__Sequence__are_equal(
      &(lhs->traffic_signal_info_list), &(rhs->traffic_signal_info_list)))
  {
    return false;
  }
  return true;
}

bool
carma_perception_msgs__msg__TrafficSignalInfoList__copy(
  const carma_perception_msgs__msg__TrafficSignalInfoList * input,
  carma_perception_msgs__msg__TrafficSignalInfoList * output)
{
  if (!input || !output) {
    return false;
  }
  // traffic_signal_info_list
  if (!carma_perception_msgs__msg__TrafficSignalInfo__Sequence__copy(
      &(input->traffic_signal_info_list), &(output->traffic_signal_info_list)))
  {
    return false;
  }
  return true;
}

carma_perception_msgs__msg__TrafficSignalInfoList *
carma_perception_msgs__msg__TrafficSignalInfoList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__TrafficSignalInfoList * msg = (carma_perception_msgs__msg__TrafficSignalInfoList *)allocator.allocate(sizeof(carma_perception_msgs__msg__TrafficSignalInfoList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_perception_msgs__msg__TrafficSignalInfoList));
  bool success = carma_perception_msgs__msg__TrafficSignalInfoList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_perception_msgs__msg__TrafficSignalInfoList__destroy(carma_perception_msgs__msg__TrafficSignalInfoList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_perception_msgs__msg__TrafficSignalInfoList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__init(carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__TrafficSignalInfoList * data = NULL;

  if (size) {
    data = (carma_perception_msgs__msg__TrafficSignalInfoList *)allocator.zero_allocate(size, sizeof(carma_perception_msgs__msg__TrafficSignalInfoList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_perception_msgs__msg__TrafficSignalInfoList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_perception_msgs__msg__TrafficSignalInfoList__fini(&data[i - 1]);
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
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__fini(carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * array)
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
      carma_perception_msgs__msg__TrafficSignalInfoList__fini(&array->data[i]);
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

carma_perception_msgs__msg__TrafficSignalInfoList__Sequence *
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * array = (carma_perception_msgs__msg__TrafficSignalInfoList__Sequence *)allocator.allocate(sizeof(carma_perception_msgs__msg__TrafficSignalInfoList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__destroy(carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__are_equal(const carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * lhs, const carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_perception_msgs__msg__TrafficSignalInfoList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__copy(
  const carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * input,
  carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_perception_msgs__msg__TrafficSignalInfoList);
    carma_perception_msgs__msg__TrafficSignalInfoList * data =
      (carma_perception_msgs__msg__TrafficSignalInfoList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_perception_msgs__msg__TrafficSignalInfoList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_perception_msgs__msg__TrafficSignalInfoList__fini(&data[i]);
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
    if (!carma_perception_msgs__msg__TrafficSignalInfoList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
