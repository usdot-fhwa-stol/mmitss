// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:srv/PluginActivation.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/plugin_activation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `plugin_name`
// Member `plugin_version`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_planning_msgs__srv__PluginActivation_Request__init(carma_planning_msgs__srv__PluginActivation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_planning_msgs__srv__PluginActivation_Request__fini(msg);
    return false;
  }
  // plugin_name
  if (!rosidl_runtime_c__String__init(&msg->plugin_name)) {
    carma_planning_msgs__srv__PluginActivation_Request__fini(msg);
    return false;
  }
  // plugin_version
  if (!rosidl_runtime_c__String__init(&msg->plugin_version)) {
    carma_planning_msgs__srv__PluginActivation_Request__fini(msg);
    return false;
  }
  // activated
  return true;
}

void
carma_planning_msgs__srv__PluginActivation_Request__fini(carma_planning_msgs__srv__PluginActivation_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // plugin_name
  rosidl_runtime_c__String__fini(&msg->plugin_name);
  // plugin_version
  rosidl_runtime_c__String__fini(&msg->plugin_version);
  // activated
}

bool
carma_planning_msgs__srv__PluginActivation_Request__are_equal(const carma_planning_msgs__srv__PluginActivation_Request * lhs, const carma_planning_msgs__srv__PluginActivation_Request * rhs)
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
  // plugin_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->plugin_name), &(rhs->plugin_name)))
  {
    return false;
  }
  // plugin_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->plugin_version), &(rhs->plugin_version)))
  {
    return false;
  }
  // activated
  if (lhs->activated != rhs->activated) {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__srv__PluginActivation_Request__copy(
  const carma_planning_msgs__srv__PluginActivation_Request * input,
  carma_planning_msgs__srv__PluginActivation_Request * output)
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
  // plugin_name
  if (!rosidl_runtime_c__String__copy(
      &(input->plugin_name), &(output->plugin_name)))
  {
    return false;
  }
  // plugin_version
  if (!rosidl_runtime_c__String__copy(
      &(input->plugin_version), &(output->plugin_version)))
  {
    return false;
  }
  // activated
  output->activated = input->activated;
  return true;
}

carma_planning_msgs__srv__PluginActivation_Request *
carma_planning_msgs__srv__PluginActivation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PluginActivation_Request * msg = (carma_planning_msgs__srv__PluginActivation_Request *)allocator.allocate(sizeof(carma_planning_msgs__srv__PluginActivation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__srv__PluginActivation_Request));
  bool success = carma_planning_msgs__srv__PluginActivation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__srv__PluginActivation_Request__destroy(carma_planning_msgs__srv__PluginActivation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__srv__PluginActivation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__srv__PluginActivation_Request__Sequence__init(carma_planning_msgs__srv__PluginActivation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PluginActivation_Request * data = NULL;

  if (size) {
    data = (carma_planning_msgs__srv__PluginActivation_Request *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__srv__PluginActivation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__srv__PluginActivation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__srv__PluginActivation_Request__fini(&data[i - 1]);
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
carma_planning_msgs__srv__PluginActivation_Request__Sequence__fini(carma_planning_msgs__srv__PluginActivation_Request__Sequence * array)
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
      carma_planning_msgs__srv__PluginActivation_Request__fini(&array->data[i]);
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

carma_planning_msgs__srv__PluginActivation_Request__Sequence *
carma_planning_msgs__srv__PluginActivation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PluginActivation_Request__Sequence * array = (carma_planning_msgs__srv__PluginActivation_Request__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__srv__PluginActivation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__srv__PluginActivation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__srv__PluginActivation_Request__Sequence__destroy(carma_planning_msgs__srv__PluginActivation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__srv__PluginActivation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__srv__PluginActivation_Request__Sequence__are_equal(const carma_planning_msgs__srv__PluginActivation_Request__Sequence * lhs, const carma_planning_msgs__srv__PluginActivation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__srv__PluginActivation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__srv__PluginActivation_Request__Sequence__copy(
  const carma_planning_msgs__srv__PluginActivation_Request__Sequence * input,
  carma_planning_msgs__srv__PluginActivation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__srv__PluginActivation_Request);
    carma_planning_msgs__srv__PluginActivation_Request * data =
      (carma_planning_msgs__srv__PluginActivation_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__srv__PluginActivation_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__srv__PluginActivation_Request__fini(&data[i]);
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
    if (!carma_planning_msgs__srv__PluginActivation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
carma_planning_msgs__srv__PluginActivation_Response__init(carma_planning_msgs__srv__PluginActivation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // newstate
  return true;
}

void
carma_planning_msgs__srv__PluginActivation_Response__fini(carma_planning_msgs__srv__PluginActivation_Response * msg)
{
  if (!msg) {
    return;
  }
  // newstate
}

bool
carma_planning_msgs__srv__PluginActivation_Response__are_equal(const carma_planning_msgs__srv__PluginActivation_Response * lhs, const carma_planning_msgs__srv__PluginActivation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // newstate
  if (lhs->newstate != rhs->newstate) {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__srv__PluginActivation_Response__copy(
  const carma_planning_msgs__srv__PluginActivation_Response * input,
  carma_planning_msgs__srv__PluginActivation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // newstate
  output->newstate = input->newstate;
  return true;
}

carma_planning_msgs__srv__PluginActivation_Response *
carma_planning_msgs__srv__PluginActivation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PluginActivation_Response * msg = (carma_planning_msgs__srv__PluginActivation_Response *)allocator.allocate(sizeof(carma_planning_msgs__srv__PluginActivation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__srv__PluginActivation_Response));
  bool success = carma_planning_msgs__srv__PluginActivation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__srv__PluginActivation_Response__destroy(carma_planning_msgs__srv__PluginActivation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__srv__PluginActivation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__srv__PluginActivation_Response__Sequence__init(carma_planning_msgs__srv__PluginActivation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PluginActivation_Response * data = NULL;

  if (size) {
    data = (carma_planning_msgs__srv__PluginActivation_Response *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__srv__PluginActivation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__srv__PluginActivation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__srv__PluginActivation_Response__fini(&data[i - 1]);
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
carma_planning_msgs__srv__PluginActivation_Response__Sequence__fini(carma_planning_msgs__srv__PluginActivation_Response__Sequence * array)
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
      carma_planning_msgs__srv__PluginActivation_Response__fini(&array->data[i]);
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

carma_planning_msgs__srv__PluginActivation_Response__Sequence *
carma_planning_msgs__srv__PluginActivation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__srv__PluginActivation_Response__Sequence * array = (carma_planning_msgs__srv__PluginActivation_Response__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__srv__PluginActivation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__srv__PluginActivation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__srv__PluginActivation_Response__Sequence__destroy(carma_planning_msgs__srv__PluginActivation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__srv__PluginActivation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__srv__PluginActivation_Response__Sequence__are_equal(const carma_planning_msgs__srv__PluginActivation_Response__Sequence * lhs, const carma_planning_msgs__srv__PluginActivation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__srv__PluginActivation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__srv__PluginActivation_Response__Sequence__copy(
  const carma_planning_msgs__srv__PluginActivation_Response__Sequence * input,
  carma_planning_msgs__srv__PluginActivation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__srv__PluginActivation_Response);
    carma_planning_msgs__srv__PluginActivation_Response * data =
      (carma_planning_msgs__srv__PluginActivation_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__srv__PluginActivation_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__srv__PluginActivation_Response__fini(&data[i]);
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
    if (!carma_planning_msgs__srv__PluginActivation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
