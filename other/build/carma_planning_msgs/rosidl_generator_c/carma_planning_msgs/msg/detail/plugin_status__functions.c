// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/PluginStatus.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/plugin_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_planning_msgs__msg__PluginStatus__init(carma_planning_msgs__msg__PluginStatus * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    carma_planning_msgs__msg__PluginStatus__fini(msg);
    return false;
  }
  // status
  // is_strategic_plugin
  // is_tactical_plugin
  // is_control_plugin
  return true;
}

void
carma_planning_msgs__msg__PluginStatus__fini(carma_planning_msgs__msg__PluginStatus * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // status
  // is_strategic_plugin
  // is_tactical_plugin
  // is_control_plugin
}

bool
carma_planning_msgs__msg__PluginStatus__are_equal(const carma_planning_msgs__msg__PluginStatus * lhs, const carma_planning_msgs__msg__PluginStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // is_strategic_plugin
  if (lhs->is_strategic_plugin != rhs->is_strategic_plugin) {
    return false;
  }
  // is_tactical_plugin
  if (lhs->is_tactical_plugin != rhs->is_tactical_plugin) {
    return false;
  }
  // is_control_plugin
  if (lhs->is_control_plugin != rhs->is_control_plugin) {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__PluginStatus__copy(
  const carma_planning_msgs__msg__PluginStatus * input,
  carma_planning_msgs__msg__PluginStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // is_strategic_plugin
  output->is_strategic_plugin = input->is_strategic_plugin;
  // is_tactical_plugin
  output->is_tactical_plugin = input->is_tactical_plugin;
  // is_control_plugin
  output->is_control_plugin = input->is_control_plugin;
  return true;
}

carma_planning_msgs__msg__PluginStatus *
carma_planning_msgs__msg__PluginStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PluginStatus * msg = (carma_planning_msgs__msg__PluginStatus *)allocator.allocate(sizeof(carma_planning_msgs__msg__PluginStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__PluginStatus));
  bool success = carma_planning_msgs__msg__PluginStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__PluginStatus__destroy(carma_planning_msgs__msg__PluginStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__PluginStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__PluginStatus__Sequence__init(carma_planning_msgs__msg__PluginStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PluginStatus * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__PluginStatus *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__PluginStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__PluginStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__PluginStatus__fini(&data[i - 1]);
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
carma_planning_msgs__msg__PluginStatus__Sequence__fini(carma_planning_msgs__msg__PluginStatus__Sequence * array)
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
      carma_planning_msgs__msg__PluginStatus__fini(&array->data[i]);
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

carma_planning_msgs__msg__PluginStatus__Sequence *
carma_planning_msgs__msg__PluginStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__PluginStatus__Sequence * array = (carma_planning_msgs__msg__PluginStatus__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__PluginStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__PluginStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__PluginStatus__Sequence__destroy(carma_planning_msgs__msg__PluginStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__PluginStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__PluginStatus__Sequence__are_equal(const carma_planning_msgs__msg__PluginStatus__Sequence * lhs, const carma_planning_msgs__msg__PluginStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__PluginStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__PluginStatus__Sequence__copy(
  const carma_planning_msgs__msg__PluginStatus__Sequence * input,
  carma_planning_msgs__msg__PluginStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__PluginStatus);
    carma_planning_msgs__msg__PluginStatus * data =
      (carma_planning_msgs__msg__PluginStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__PluginStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__PluginStatus__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__PluginStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
