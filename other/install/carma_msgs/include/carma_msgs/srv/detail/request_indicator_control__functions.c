// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice
#include "carma_msgs/srv/detail/request_indicator_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ind_list`
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"
// Member `cda_list`
#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"
// Member `requester_name`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_msgs__srv__RequestIndicatorControl_Request__init(carma_msgs__srv__RequestIndicatorControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__init(&msg->ind_list, 0)) {
    carma_msgs__srv__RequestIndicatorControl_Request__fini(msg);
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__init(&msg->cda_list, 0)) {
    carma_msgs__srv__RequestIndicatorControl_Request__fini(msg);
    return false;
  }
  // requester_name
  if (!rosidl_runtime_c__String__init(&msg->requester_name)) {
    carma_msgs__srv__RequestIndicatorControl_Request__fini(msg);
    return false;
  }
  return true;
}

void
carma_msgs__srv__RequestIndicatorControl_Request__fini(carma_msgs__srv__RequestIndicatorControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // ind_list
  carma_msgs__msg__LightBarIndicator__Sequence__fini(&msg->ind_list);
  // cda_list
  carma_msgs__msg__LightBarCDAType__Sequence__fini(&msg->cda_list);
  // requester_name
  rosidl_runtime_c__String__fini(&msg->requester_name);
}

bool
carma_msgs__srv__RequestIndicatorControl_Request__are_equal(const carma_msgs__srv__RequestIndicatorControl_Request * lhs, const carma_msgs__srv__RequestIndicatorControl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__are_equal(
      &(lhs->ind_list), &(rhs->ind_list)))
  {
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__are_equal(
      &(lhs->cda_list), &(rhs->cda_list)))
  {
    return false;
  }
  // requester_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->requester_name), &(rhs->requester_name)))
  {
    return false;
  }
  return true;
}

bool
carma_msgs__srv__RequestIndicatorControl_Request__copy(
  const carma_msgs__srv__RequestIndicatorControl_Request * input,
  carma_msgs__srv__RequestIndicatorControl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__copy(
      &(input->ind_list), &(output->ind_list)))
  {
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__copy(
      &(input->cda_list), &(output->cda_list)))
  {
    return false;
  }
  // requester_name
  if (!rosidl_runtime_c__String__copy(
      &(input->requester_name), &(output->requester_name)))
  {
    return false;
  }
  return true;
}

carma_msgs__srv__RequestIndicatorControl_Request *
carma_msgs__srv__RequestIndicatorControl_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__RequestIndicatorControl_Request * msg = (carma_msgs__srv__RequestIndicatorControl_Request *)allocator.allocate(sizeof(carma_msgs__srv__RequestIndicatorControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__srv__RequestIndicatorControl_Request));
  bool success = carma_msgs__srv__RequestIndicatorControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__srv__RequestIndicatorControl_Request__destroy(carma_msgs__srv__RequestIndicatorControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__srv__RequestIndicatorControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__srv__RequestIndicatorControl_Request__Sequence__init(carma_msgs__srv__RequestIndicatorControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__RequestIndicatorControl_Request * data = NULL;

  if (size) {
    data = (carma_msgs__srv__RequestIndicatorControl_Request *)allocator.zero_allocate(size, sizeof(carma_msgs__srv__RequestIndicatorControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__srv__RequestIndicatorControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__srv__RequestIndicatorControl_Request__fini(&data[i - 1]);
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
carma_msgs__srv__RequestIndicatorControl_Request__Sequence__fini(carma_msgs__srv__RequestIndicatorControl_Request__Sequence * array)
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
      carma_msgs__srv__RequestIndicatorControl_Request__fini(&array->data[i]);
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

carma_msgs__srv__RequestIndicatorControl_Request__Sequence *
carma_msgs__srv__RequestIndicatorControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__RequestIndicatorControl_Request__Sequence * array = (carma_msgs__srv__RequestIndicatorControl_Request__Sequence *)allocator.allocate(sizeof(carma_msgs__srv__RequestIndicatorControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__srv__RequestIndicatorControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__srv__RequestIndicatorControl_Request__Sequence__destroy(carma_msgs__srv__RequestIndicatorControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__srv__RequestIndicatorControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__srv__RequestIndicatorControl_Request__Sequence__are_equal(const carma_msgs__srv__RequestIndicatorControl_Request__Sequence * lhs, const carma_msgs__srv__RequestIndicatorControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__srv__RequestIndicatorControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__srv__RequestIndicatorControl_Request__Sequence__copy(
  const carma_msgs__srv__RequestIndicatorControl_Request__Sequence * input,
  carma_msgs__srv__RequestIndicatorControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__srv__RequestIndicatorControl_Request);
    carma_msgs__srv__RequestIndicatorControl_Request * data =
      (carma_msgs__srv__RequestIndicatorControl_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__srv__RequestIndicatorControl_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_msgs__srv__RequestIndicatorControl_Request__fini(&data[i]);
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
    if (!carma_msgs__srv__RequestIndicatorControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `ind_list`
// already included above
// #include "carma_msgs/msg/detail/light_bar_indicator__functions.h"
// Member `cda_list`
// already included above
// #include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"

bool
carma_msgs__srv__RequestIndicatorControl_Response__init(carma_msgs__srv__RequestIndicatorControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__init(&msg->ind_list, 0)) {
    carma_msgs__srv__RequestIndicatorControl_Response__fini(msg);
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__init(&msg->cda_list, 0)) {
    carma_msgs__srv__RequestIndicatorControl_Response__fini(msg);
    return false;
  }
  return true;
}

void
carma_msgs__srv__RequestIndicatorControl_Response__fini(carma_msgs__srv__RequestIndicatorControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // ind_list
  carma_msgs__msg__LightBarIndicator__Sequence__fini(&msg->ind_list);
  // cda_list
  carma_msgs__msg__LightBarCDAType__Sequence__fini(&msg->cda_list);
}

bool
carma_msgs__srv__RequestIndicatorControl_Response__are_equal(const carma_msgs__srv__RequestIndicatorControl_Response * lhs, const carma_msgs__srv__RequestIndicatorControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__are_equal(
      &(lhs->ind_list), &(rhs->ind_list)))
  {
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__are_equal(
      &(lhs->cda_list), &(rhs->cda_list)))
  {
    return false;
  }
  return true;
}

bool
carma_msgs__srv__RequestIndicatorControl_Response__copy(
  const carma_msgs__srv__RequestIndicatorControl_Response * input,
  carma_msgs__srv__RequestIndicatorControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ind_list
  if (!carma_msgs__msg__LightBarIndicator__Sequence__copy(
      &(input->ind_list), &(output->ind_list)))
  {
    return false;
  }
  // cda_list
  if (!carma_msgs__msg__LightBarCDAType__Sequence__copy(
      &(input->cda_list), &(output->cda_list)))
  {
    return false;
  }
  return true;
}

carma_msgs__srv__RequestIndicatorControl_Response *
carma_msgs__srv__RequestIndicatorControl_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__RequestIndicatorControl_Response * msg = (carma_msgs__srv__RequestIndicatorControl_Response *)allocator.allocate(sizeof(carma_msgs__srv__RequestIndicatorControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__srv__RequestIndicatorControl_Response));
  bool success = carma_msgs__srv__RequestIndicatorControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__srv__RequestIndicatorControl_Response__destroy(carma_msgs__srv__RequestIndicatorControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__srv__RequestIndicatorControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__srv__RequestIndicatorControl_Response__Sequence__init(carma_msgs__srv__RequestIndicatorControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__RequestIndicatorControl_Response * data = NULL;

  if (size) {
    data = (carma_msgs__srv__RequestIndicatorControl_Response *)allocator.zero_allocate(size, sizeof(carma_msgs__srv__RequestIndicatorControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__srv__RequestIndicatorControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__srv__RequestIndicatorControl_Response__fini(&data[i - 1]);
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
carma_msgs__srv__RequestIndicatorControl_Response__Sequence__fini(carma_msgs__srv__RequestIndicatorControl_Response__Sequence * array)
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
      carma_msgs__srv__RequestIndicatorControl_Response__fini(&array->data[i]);
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

carma_msgs__srv__RequestIndicatorControl_Response__Sequence *
carma_msgs__srv__RequestIndicatorControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__RequestIndicatorControl_Response__Sequence * array = (carma_msgs__srv__RequestIndicatorControl_Response__Sequence *)allocator.allocate(sizeof(carma_msgs__srv__RequestIndicatorControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__srv__RequestIndicatorControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__srv__RequestIndicatorControl_Response__Sequence__destroy(carma_msgs__srv__RequestIndicatorControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__srv__RequestIndicatorControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__srv__RequestIndicatorControl_Response__Sequence__are_equal(const carma_msgs__srv__RequestIndicatorControl_Response__Sequence * lhs, const carma_msgs__srv__RequestIndicatorControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__srv__RequestIndicatorControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__srv__RequestIndicatorControl_Response__Sequence__copy(
  const carma_msgs__srv__RequestIndicatorControl_Response__Sequence * input,
  carma_msgs__srv__RequestIndicatorControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__srv__RequestIndicatorControl_Response);
    carma_msgs__srv__RequestIndicatorControl_Response * data =
      (carma_msgs__srv__RequestIndicatorControl_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__srv__RequestIndicatorControl_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_msgs__srv__RequestIndicatorControl_Response__fini(&data[i]);
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
    if (!carma_msgs__srv__RequestIndicatorControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
