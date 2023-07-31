// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/Plugin.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/plugin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `version_id`
// Member `capability`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_planning_msgs__msg__Plugin__init(carma_planning_msgs__msg__Plugin * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    carma_planning_msgs__msg__Plugin__fini(msg);
    return false;
  }
  // version_id
  if (!rosidl_runtime_c__String__init(&msg->version_id)) {
    carma_planning_msgs__msg__Plugin__fini(msg);
    return false;
  }
  // type
  // available
  // activated
  // capability
  if (!rosidl_runtime_c__String__init(&msg->capability)) {
    carma_planning_msgs__msg__Plugin__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__Plugin__fini(carma_planning_msgs__msg__Plugin * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // version_id
  rosidl_runtime_c__String__fini(&msg->version_id);
  // type
  // available
  // activated
  // capability
  rosidl_runtime_c__String__fini(&msg->capability);
}

bool
carma_planning_msgs__msg__Plugin__are_equal(const carma_planning_msgs__msg__Plugin * lhs, const carma_planning_msgs__msg__Plugin * rhs)
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
  // version_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_id), &(rhs->version_id)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // available
  if (lhs->available != rhs->available) {
    return false;
  }
  // activated
  if (lhs->activated != rhs->activated) {
    return false;
  }
  // capability
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->capability), &(rhs->capability)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__Plugin__copy(
  const carma_planning_msgs__msg__Plugin * input,
  carma_planning_msgs__msg__Plugin * output)
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
  // version_id
  if (!rosidl_runtime_c__String__copy(
      &(input->version_id), &(output->version_id)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // available
  output->available = input->available;
  // activated
  output->activated = input->activated;
  // capability
  if (!rosidl_runtime_c__String__copy(
      &(input->capability), &(output->capability)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__Plugin *
carma_planning_msgs__msg__Plugin__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Plugin * msg = (carma_planning_msgs__msg__Plugin *)allocator.allocate(sizeof(carma_planning_msgs__msg__Plugin), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__Plugin));
  bool success = carma_planning_msgs__msg__Plugin__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__Plugin__destroy(carma_planning_msgs__msg__Plugin * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__Plugin__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__Plugin__Sequence__init(carma_planning_msgs__msg__Plugin__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Plugin * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__Plugin *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__Plugin), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__Plugin__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__Plugin__fini(&data[i - 1]);
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
carma_planning_msgs__msg__Plugin__Sequence__fini(carma_planning_msgs__msg__Plugin__Sequence * array)
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
      carma_planning_msgs__msg__Plugin__fini(&array->data[i]);
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

carma_planning_msgs__msg__Plugin__Sequence *
carma_planning_msgs__msg__Plugin__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__Plugin__Sequence * array = (carma_planning_msgs__msg__Plugin__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__Plugin__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__Plugin__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__Plugin__Sequence__destroy(carma_planning_msgs__msg__Plugin__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__Plugin__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__Plugin__Sequence__are_equal(const carma_planning_msgs__msg__Plugin__Sequence * lhs, const carma_planning_msgs__msg__Plugin__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__Plugin__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__Plugin__Sequence__copy(
  const carma_planning_msgs__msg__Plugin__Sequence * input,
  carma_planning_msgs__msg__Plugin__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__Plugin);
    carma_planning_msgs__msg__Plugin * data =
      (carma_planning_msgs__msg__Plugin *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__Plugin__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__Plugin__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__Plugin__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
