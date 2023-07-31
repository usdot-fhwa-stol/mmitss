// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/DetectedVRUData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/detected_vru_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `basic_type`
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__functions.h"
// Member `propulsion`
#include "j2735_v2x_msgs/msg/detail/propelled_information__functions.h"
// Member `attachment`
#include "j2735_v2x_msgs/msg/detail/attachment__functions.h"
// Member `radius`
#include "carma_v2x_msgs/msg/detail/attachment_radius__functions.h"

bool
carma_v2x_msgs__msg__DetectedVRUData__init(carma_v2x_msgs__msg__DetectedVRUData * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // basic_type
  if (!j2735_v2x_msgs__msg__PersonalDeviceUserType__init(&msg->basic_type)) {
    carma_v2x_msgs__msg__DetectedVRUData__fini(msg);
    return false;
  }
  // propulsion
  if (!j2735_v2x_msgs__msg__PropelledInformation__init(&msg->propulsion)) {
    carma_v2x_msgs__msg__DetectedVRUData__fini(msg);
    return false;
  }
  // attachment
  if (!j2735_v2x_msgs__msg__Attachment__init(&msg->attachment)) {
    carma_v2x_msgs__msg__DetectedVRUData__fini(msg);
    return false;
  }
  // radius
  if (!carma_v2x_msgs__msg__AttachmentRadius__init(&msg->radius)) {
    carma_v2x_msgs__msg__DetectedVRUData__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__DetectedVRUData__fini(carma_v2x_msgs__msg__DetectedVRUData * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // basic_type
  j2735_v2x_msgs__msg__PersonalDeviceUserType__fini(&msg->basic_type);
  // propulsion
  j2735_v2x_msgs__msg__PropelledInformation__fini(&msg->propulsion);
  // attachment
  j2735_v2x_msgs__msg__Attachment__fini(&msg->attachment);
  // radius
  carma_v2x_msgs__msg__AttachmentRadius__fini(&msg->radius);
}

bool
carma_v2x_msgs__msg__DetectedVRUData__are_equal(const carma_v2x_msgs__msg__DetectedVRUData * lhs, const carma_v2x_msgs__msg__DetectedVRUData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // basic_type
  if (!j2735_v2x_msgs__msg__PersonalDeviceUserType__are_equal(
      &(lhs->basic_type), &(rhs->basic_type)))
  {
    return false;
  }
  // propulsion
  if (!j2735_v2x_msgs__msg__PropelledInformation__are_equal(
      &(lhs->propulsion), &(rhs->propulsion)))
  {
    return false;
  }
  // attachment
  if (!j2735_v2x_msgs__msg__Attachment__are_equal(
      &(lhs->attachment), &(rhs->attachment)))
  {
    return false;
  }
  // radius
  if (!carma_v2x_msgs__msg__AttachmentRadius__are_equal(
      &(lhs->radius), &(rhs->radius)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__DetectedVRUData__copy(
  const carma_v2x_msgs__msg__DetectedVRUData * input,
  carma_v2x_msgs__msg__DetectedVRUData * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // basic_type
  if (!j2735_v2x_msgs__msg__PersonalDeviceUserType__copy(
      &(input->basic_type), &(output->basic_type)))
  {
    return false;
  }
  // propulsion
  if (!j2735_v2x_msgs__msg__PropelledInformation__copy(
      &(input->propulsion), &(output->propulsion)))
  {
    return false;
  }
  // attachment
  if (!j2735_v2x_msgs__msg__Attachment__copy(
      &(input->attachment), &(output->attachment)))
  {
    return false;
  }
  // radius
  if (!carma_v2x_msgs__msg__AttachmentRadius__copy(
      &(input->radius), &(output->radius)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__DetectedVRUData *
carma_v2x_msgs__msg__DetectedVRUData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedVRUData * msg = (carma_v2x_msgs__msg__DetectedVRUData *)allocator.allocate(sizeof(carma_v2x_msgs__msg__DetectedVRUData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__DetectedVRUData));
  bool success = carma_v2x_msgs__msg__DetectedVRUData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__DetectedVRUData__destroy(carma_v2x_msgs__msg__DetectedVRUData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__DetectedVRUData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__DetectedVRUData__Sequence__init(carma_v2x_msgs__msg__DetectedVRUData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedVRUData * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__DetectedVRUData *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__DetectedVRUData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__DetectedVRUData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__DetectedVRUData__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__DetectedVRUData__Sequence__fini(carma_v2x_msgs__msg__DetectedVRUData__Sequence * array)
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
      carma_v2x_msgs__msg__DetectedVRUData__fini(&array->data[i]);
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

carma_v2x_msgs__msg__DetectedVRUData__Sequence *
carma_v2x_msgs__msg__DetectedVRUData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedVRUData__Sequence * array = (carma_v2x_msgs__msg__DetectedVRUData__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__DetectedVRUData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__DetectedVRUData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__DetectedVRUData__Sequence__destroy(carma_v2x_msgs__msg__DetectedVRUData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__DetectedVRUData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__DetectedVRUData__Sequence__are_equal(const carma_v2x_msgs__msg__DetectedVRUData__Sequence * lhs, const carma_v2x_msgs__msg__DetectedVRUData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__DetectedVRUData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__DetectedVRUData__Sequence__copy(
  const carma_v2x_msgs__msg__DetectedVRUData__Sequence * input,
  carma_v2x_msgs__msg__DetectedVRUData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__DetectedVRUData);
    carma_v2x_msgs__msg__DetectedVRUData * data =
      (carma_v2x_msgs__msg__DetectedVRUData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__DetectedVRUData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__DetectedVRUData__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__DetectedVRUData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
