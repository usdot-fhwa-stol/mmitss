// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:srv/GetDriverApi.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/srv/detail/get_driver_api__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
carma_driver_msgs__srv__GetDriverApi_Request__init(carma_driver_msgs__srv__GetDriverApi_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
carma_driver_msgs__srv__GetDriverApi_Request__fini(carma_driver_msgs__srv__GetDriverApi_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
carma_driver_msgs__srv__GetDriverApi_Request__are_equal(const carma_driver_msgs__srv__GetDriverApi_Request * lhs, const carma_driver_msgs__srv__GetDriverApi_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__srv__GetDriverApi_Request__copy(
  const carma_driver_msgs__srv__GetDriverApi_Request * input,
  carma_driver_msgs__srv__GetDriverApi_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

carma_driver_msgs__srv__GetDriverApi_Request *
carma_driver_msgs__srv__GetDriverApi_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__GetDriverApi_Request * msg = (carma_driver_msgs__srv__GetDriverApi_Request *)allocator.allocate(sizeof(carma_driver_msgs__srv__GetDriverApi_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__srv__GetDriverApi_Request));
  bool success = carma_driver_msgs__srv__GetDriverApi_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__srv__GetDriverApi_Request__destroy(carma_driver_msgs__srv__GetDriverApi_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__srv__GetDriverApi_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__srv__GetDriverApi_Request__Sequence__init(carma_driver_msgs__srv__GetDriverApi_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__GetDriverApi_Request * data = NULL;

  if (size) {
    data = (carma_driver_msgs__srv__GetDriverApi_Request *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__srv__GetDriverApi_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__srv__GetDriverApi_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__srv__GetDriverApi_Request__fini(&data[i - 1]);
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
carma_driver_msgs__srv__GetDriverApi_Request__Sequence__fini(carma_driver_msgs__srv__GetDriverApi_Request__Sequence * array)
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
      carma_driver_msgs__srv__GetDriverApi_Request__fini(&array->data[i]);
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

carma_driver_msgs__srv__GetDriverApi_Request__Sequence *
carma_driver_msgs__srv__GetDriverApi_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__GetDriverApi_Request__Sequence * array = (carma_driver_msgs__srv__GetDriverApi_Request__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__srv__GetDriverApi_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__srv__GetDriverApi_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__srv__GetDriverApi_Request__Sequence__destroy(carma_driver_msgs__srv__GetDriverApi_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__srv__GetDriverApi_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__srv__GetDriverApi_Request__Sequence__are_equal(const carma_driver_msgs__srv__GetDriverApi_Request__Sequence * lhs, const carma_driver_msgs__srv__GetDriverApi_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__srv__GetDriverApi_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__srv__GetDriverApi_Request__Sequence__copy(
  const carma_driver_msgs__srv__GetDriverApi_Request__Sequence * input,
  carma_driver_msgs__srv__GetDriverApi_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__srv__GetDriverApi_Request);
    carma_driver_msgs__srv__GetDriverApi_Request * data =
      (carma_driver_msgs__srv__GetDriverApi_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__srv__GetDriverApi_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__srv__GetDriverApi_Request__fini(&data[i]);
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
    if (!carma_driver_msgs__srv__GetDriverApi_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `api_list`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_driver_msgs__srv__GetDriverApi_Response__init(carma_driver_msgs__srv__GetDriverApi_Response * msg)
{
  if (!msg) {
    return false;
  }
  // api_list
  if (!rosidl_runtime_c__String__Sequence__init(&msg->api_list, 0)) {
    carma_driver_msgs__srv__GetDriverApi_Response__fini(msg);
    return false;
  }
  return true;
}

void
carma_driver_msgs__srv__GetDriverApi_Response__fini(carma_driver_msgs__srv__GetDriverApi_Response * msg)
{
  if (!msg) {
    return;
  }
  // api_list
  rosidl_runtime_c__String__Sequence__fini(&msg->api_list);
}

bool
carma_driver_msgs__srv__GetDriverApi_Response__are_equal(const carma_driver_msgs__srv__GetDriverApi_Response * lhs, const carma_driver_msgs__srv__GetDriverApi_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // api_list
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->api_list), &(rhs->api_list)))
  {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__srv__GetDriverApi_Response__copy(
  const carma_driver_msgs__srv__GetDriverApi_Response * input,
  carma_driver_msgs__srv__GetDriverApi_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // api_list
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->api_list), &(output->api_list)))
  {
    return false;
  }
  return true;
}

carma_driver_msgs__srv__GetDriverApi_Response *
carma_driver_msgs__srv__GetDriverApi_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__GetDriverApi_Response * msg = (carma_driver_msgs__srv__GetDriverApi_Response *)allocator.allocate(sizeof(carma_driver_msgs__srv__GetDriverApi_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__srv__GetDriverApi_Response));
  bool success = carma_driver_msgs__srv__GetDriverApi_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__srv__GetDriverApi_Response__destroy(carma_driver_msgs__srv__GetDriverApi_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__srv__GetDriverApi_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__srv__GetDriverApi_Response__Sequence__init(carma_driver_msgs__srv__GetDriverApi_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__GetDriverApi_Response * data = NULL;

  if (size) {
    data = (carma_driver_msgs__srv__GetDriverApi_Response *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__srv__GetDriverApi_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__srv__GetDriverApi_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__srv__GetDriverApi_Response__fini(&data[i - 1]);
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
carma_driver_msgs__srv__GetDriverApi_Response__Sequence__fini(carma_driver_msgs__srv__GetDriverApi_Response__Sequence * array)
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
      carma_driver_msgs__srv__GetDriverApi_Response__fini(&array->data[i]);
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

carma_driver_msgs__srv__GetDriverApi_Response__Sequence *
carma_driver_msgs__srv__GetDriverApi_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__GetDriverApi_Response__Sequence * array = (carma_driver_msgs__srv__GetDriverApi_Response__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__srv__GetDriverApi_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__srv__GetDriverApi_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__srv__GetDriverApi_Response__Sequence__destroy(carma_driver_msgs__srv__GetDriverApi_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__srv__GetDriverApi_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__srv__GetDriverApi_Response__Sequence__are_equal(const carma_driver_msgs__srv__GetDriverApi_Response__Sequence * lhs, const carma_driver_msgs__srv__GetDriverApi_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__srv__GetDriverApi_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__srv__GetDriverApi_Response__Sequence__copy(
  const carma_driver_msgs__srv__GetDriverApi_Response__Sequence * input,
  carma_driver_msgs__srv__GetDriverApi_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__srv__GetDriverApi_Response);
    carma_driver_msgs__srv__GetDriverApi_Response * data =
      (carma_driver_msgs__srv__GetDriverApi_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__srv__GetDriverApi_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__srv__GetDriverApi_Response__fini(&data[i]);
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
    if (!carma_driver_msgs__srv__GetDriverApi_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
