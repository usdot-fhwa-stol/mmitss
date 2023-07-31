// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/PluginList.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/plugin_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `plugins`
#include "carma_planning_msgs/msg/detail/plugin__functions.h"

bool
carma_planning_msgs__msg__PluginList__init(carma_planning_msgs__msg__PluginList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_planning_msgs__msg__PluginList__fini(msg);
    return false;
  }
  // plugins
  if (!carma_planning_msgs__msg__Plugin__Sequence__init(&msg->plugins, 0)) {
    carma_planning_msgs__msg__PluginList__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__PluginList__fini(carma_planning_msgs__msg__PluginList * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // plugins
  carma_planning_msgs__msg__Plugin__Sequence__fini(&msg->plugins);
}

bool
carma_planning_msgs__msg__PluginList__are_equal(const carma_planning_msgs__msg__PluginList * lhs, const carma_planning_msgs__msg__PluginList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // plugins
  if (!carma_planning_msgs__msg__Plugin__Sequence__are_equal(
      &(lhs->plugins), &(rhs->plugins)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__PluginList__copy(
  const carma_planning_msgs__msg__PluginList * input,
  carma_planning_msgs__msg__PluginList * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // plugins
  if (!carma_planning_msgs__msg__Plugin__Sequence__copy(
      &(input->plugins), &(output->plugins)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__PluginList *
carma_planning_msgs__msg__PluginList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PluginList * msg = (carma_planning_msgs__msg__PluginList *)allocator.allocate(sizeof(carma_planning_msgs__msg__PluginList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__PluginList));
  bool success = carma_planning_msgs__msg__PluginList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__PluginList__destroy(carma_planning_msgs__msg__PluginList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__PluginList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__PluginList__Sequence__init(carma_planning_msgs__msg__PluginList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PluginList * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__PluginList *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__PluginList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__PluginList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__PluginList__fini(&data[i - 1]);
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
carma_planning_msgs__msg__PluginList__Sequence__fini(carma_planning_msgs__msg__PluginList__Sequence * array)
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
      carma_planning_msgs__msg__PluginList__fini(&array->data[i]);
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

carma_planning_msgs__msg__PluginList__Sequence *
carma_planning_msgs__msg__PluginList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PluginList__Sequence * array = (carma_planning_msgs__msg__PluginList__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__PluginList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__PluginList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__PluginList__Sequence__destroy(carma_planning_msgs__msg__PluginList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__PluginList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__PluginList__Sequence__are_equal(const carma_planning_msgs__msg__PluginList__Sequence * lhs, const carma_planning_msgs__msg__PluginList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__PluginList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__PluginList__Sequence__copy(
  const carma_planning_msgs__msg__PluginList__Sequence * input,
  carma_planning_msgs__msg__PluginList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__PluginList);
    carma_planning_msgs__msg__PluginList * data =
      (carma_planning_msgs__msg__PluginList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__PluginList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__PluginList__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__PluginList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
