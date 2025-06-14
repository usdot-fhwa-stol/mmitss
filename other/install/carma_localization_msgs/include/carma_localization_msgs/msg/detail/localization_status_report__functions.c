// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_localization_msgs:msg/LocalizationStatusReport.idl
// generated code does not contain a copyright notice
#include "carma_localization_msgs/msg/detail/localization_status_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
carma_localization_msgs__msg__LocalizationStatusReport__init(carma_localization_msgs__msg__LocalizationStatusReport * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_localization_msgs__msg__LocalizationStatusReport__fini(msg);
    return false;
  }
  // status
  return true;
}

void
carma_localization_msgs__msg__LocalizationStatusReport__fini(carma_localization_msgs__msg__LocalizationStatusReport * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
}

bool
carma_localization_msgs__msg__LocalizationStatusReport__are_equal(const carma_localization_msgs__msg__LocalizationStatusReport * lhs, const carma_localization_msgs__msg__LocalizationStatusReport * rhs)
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
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
carma_localization_msgs__msg__LocalizationStatusReport__copy(
  const carma_localization_msgs__msg__LocalizationStatusReport * input,
  carma_localization_msgs__msg__LocalizationStatusReport * output)
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
  // status
  output->status = input->status;
  return true;
}

carma_localization_msgs__msg__LocalizationStatusReport *
carma_localization_msgs__msg__LocalizationStatusReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_localization_msgs__msg__LocalizationStatusReport * msg = (carma_localization_msgs__msg__LocalizationStatusReport *)allocator.allocate(sizeof(carma_localization_msgs__msg__LocalizationStatusReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_localization_msgs__msg__LocalizationStatusReport));
  bool success = carma_localization_msgs__msg__LocalizationStatusReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_localization_msgs__msg__LocalizationStatusReport__destroy(carma_localization_msgs__msg__LocalizationStatusReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_localization_msgs__msg__LocalizationStatusReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_localization_msgs__msg__LocalizationStatusReport__Sequence__init(carma_localization_msgs__msg__LocalizationStatusReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_localization_msgs__msg__LocalizationStatusReport * data = NULL;

  if (size) {
    data = (carma_localization_msgs__msg__LocalizationStatusReport *)allocator.zero_allocate(size, sizeof(carma_localization_msgs__msg__LocalizationStatusReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_localization_msgs__msg__LocalizationStatusReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_localization_msgs__msg__LocalizationStatusReport__fini(&data[i - 1]);
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
carma_localization_msgs__msg__LocalizationStatusReport__Sequence__fini(carma_localization_msgs__msg__LocalizationStatusReport__Sequence * array)
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
      carma_localization_msgs__msg__LocalizationStatusReport__fini(&array->data[i]);
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

carma_localization_msgs__msg__LocalizationStatusReport__Sequence *
carma_localization_msgs__msg__LocalizationStatusReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_localization_msgs__msg__LocalizationStatusReport__Sequence * array = (carma_localization_msgs__msg__LocalizationStatusReport__Sequence *)allocator.allocate(sizeof(carma_localization_msgs__msg__LocalizationStatusReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_localization_msgs__msg__LocalizationStatusReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_localization_msgs__msg__LocalizationStatusReport__Sequence__destroy(carma_localization_msgs__msg__LocalizationStatusReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_localization_msgs__msg__LocalizationStatusReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_localization_msgs__msg__LocalizationStatusReport__Sequence__are_equal(const carma_localization_msgs__msg__LocalizationStatusReport__Sequence * lhs, const carma_localization_msgs__msg__LocalizationStatusReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_localization_msgs__msg__LocalizationStatusReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_localization_msgs__msg__LocalizationStatusReport__Sequence__copy(
  const carma_localization_msgs__msg__LocalizationStatusReport__Sequence * input,
  carma_localization_msgs__msg__LocalizationStatusReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_localization_msgs__msg__LocalizationStatusReport);
    carma_localization_msgs__msg__LocalizationStatusReport * data =
      (carma_localization_msgs__msg__LocalizationStatusReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_localization_msgs__msg__LocalizationStatusReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_localization_msgs__msg__LocalizationStatusReport__fini(&data[i]);
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
    if (!carma_localization_msgs__msg__LocalizationStatusReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
