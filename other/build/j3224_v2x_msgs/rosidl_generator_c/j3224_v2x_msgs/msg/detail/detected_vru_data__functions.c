// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j3224_v2x_msgs:msg/DetectedVRUData.idl
// generated code does not contain a copyright notice
#include "j3224_v2x_msgs/msg/detail/detected_vru_data__functions.h"

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
#include "j2735_v2x_msgs/msg/detail/attachment_radius__functions.h"

bool
j3224_v2x_msgs__msg__DetectedVRUData__init(j3224_v2x_msgs__msg__DetectedVRUData * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // basic_type
  if (!j2735_v2x_msgs__msg__PersonalDeviceUserType__init(&msg->basic_type)) {
    j3224_v2x_msgs__msg__DetectedVRUData__fini(msg);
    return false;
  }
  // propulsion
  if (!j2735_v2x_msgs__msg__PropelledInformation__init(&msg->propulsion)) {
    j3224_v2x_msgs__msg__DetectedVRUData__fini(msg);
    return false;
  }
  // attachment
  if (!j2735_v2x_msgs__msg__Attachment__init(&msg->attachment)) {
    j3224_v2x_msgs__msg__DetectedVRUData__fini(msg);
    return false;
  }
  // radius
  if (!j2735_v2x_msgs__msg__AttachmentRadius__init(&msg->radius)) {
    j3224_v2x_msgs__msg__DetectedVRUData__fini(msg);
    return false;
  }
  return true;
}

void
j3224_v2x_msgs__msg__DetectedVRUData__fini(j3224_v2x_msgs__msg__DetectedVRUData * msg)
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
  j2735_v2x_msgs__msg__AttachmentRadius__fini(&msg->radius);
}

bool
j3224_v2x_msgs__msg__DetectedVRUData__are_equal(const j3224_v2x_msgs__msg__DetectedVRUData * lhs, const j3224_v2x_msgs__msg__DetectedVRUData * rhs)
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
  if (!j2735_v2x_msgs__msg__AttachmentRadius__are_equal(
      &(lhs->radius), &(rhs->radius)))
  {
    return false;
  }
  return true;
}

bool
j3224_v2x_msgs__msg__DetectedVRUData__copy(
  const j3224_v2x_msgs__msg__DetectedVRUData * input,
  j3224_v2x_msgs__msg__DetectedVRUData * output)
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
  if (!j2735_v2x_msgs__msg__AttachmentRadius__copy(
      &(input->radius), &(output->radius)))
  {
    return false;
  }
  return true;
}

j3224_v2x_msgs__msg__DetectedVRUData *
j3224_v2x_msgs__msg__DetectedVRUData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedVRUData * msg = (j3224_v2x_msgs__msg__DetectedVRUData *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__DetectedVRUData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j3224_v2x_msgs__msg__DetectedVRUData));
  bool success = j3224_v2x_msgs__msg__DetectedVRUData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j3224_v2x_msgs__msg__DetectedVRUData__destroy(j3224_v2x_msgs__msg__DetectedVRUData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j3224_v2x_msgs__msg__DetectedVRUData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j3224_v2x_msgs__msg__DetectedVRUData__Sequence__init(j3224_v2x_msgs__msg__DetectedVRUData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedVRUData * data = NULL;

  if (size) {
    data = (j3224_v2x_msgs__msg__DetectedVRUData *)allocator.zero_allocate(size, sizeof(j3224_v2x_msgs__msg__DetectedVRUData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j3224_v2x_msgs__msg__DetectedVRUData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j3224_v2x_msgs__msg__DetectedVRUData__fini(&data[i - 1]);
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
j3224_v2x_msgs__msg__DetectedVRUData__Sequence__fini(j3224_v2x_msgs__msg__DetectedVRUData__Sequence * array)
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
      j3224_v2x_msgs__msg__DetectedVRUData__fini(&array->data[i]);
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

j3224_v2x_msgs__msg__DetectedVRUData__Sequence *
j3224_v2x_msgs__msg__DetectedVRUData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j3224_v2x_msgs__msg__DetectedVRUData__Sequence * array = (j3224_v2x_msgs__msg__DetectedVRUData__Sequence *)allocator.allocate(sizeof(j3224_v2x_msgs__msg__DetectedVRUData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j3224_v2x_msgs__msg__DetectedVRUData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j3224_v2x_msgs__msg__DetectedVRUData__Sequence__destroy(j3224_v2x_msgs__msg__DetectedVRUData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j3224_v2x_msgs__msg__DetectedVRUData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j3224_v2x_msgs__msg__DetectedVRUData__Sequence__are_equal(const j3224_v2x_msgs__msg__DetectedVRUData__Sequence * lhs, const j3224_v2x_msgs__msg__DetectedVRUData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j3224_v2x_msgs__msg__DetectedVRUData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j3224_v2x_msgs__msg__DetectedVRUData__Sequence__copy(
  const j3224_v2x_msgs__msg__DetectedVRUData__Sequence * input,
  j3224_v2x_msgs__msg__DetectedVRUData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j3224_v2x_msgs__msg__DetectedVRUData);
    j3224_v2x_msgs__msg__DetectedVRUData * data =
      (j3224_v2x_msgs__msg__DetectedVRUData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j3224_v2x_msgs__msg__DetectedVRUData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j3224_v2x_msgs__msg__DetectedVRUData__fini(&data[i]);
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
    if (!j3224_v2x_msgs__msg__DetectedVRUData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
