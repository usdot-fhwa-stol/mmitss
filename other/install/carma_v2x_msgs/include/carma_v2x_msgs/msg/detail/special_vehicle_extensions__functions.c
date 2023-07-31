// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/special_vehicle_extensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_alerts`
#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"
// Member `description`
#include "j2735_v2x_msgs/msg/detail/event_description__functions.h"
// Member `trailers`
#include "carma_v2x_msgs/msg/detail/trailer_data__functions.h"

bool
carma_v2x_msgs__msg__SpecialVehicleExtensions__init(carma_v2x_msgs__msg__SpecialVehicleExtensions * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // vehicle_alerts
  if (!j2735_v2x_msgs__msg__EmergencyDetails__init(&msg->vehicle_alerts)) {
    carma_v2x_msgs__msg__SpecialVehicleExtensions__fini(msg);
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__EventDescription__init(&msg->description)) {
    carma_v2x_msgs__msg__SpecialVehicleExtensions__fini(msg);
    return false;
  }
  // trailers
  if (!carma_v2x_msgs__msg__TrailerData__init(&msg->trailers)) {
    carma_v2x_msgs__msg__SpecialVehicleExtensions__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__SpecialVehicleExtensions__fini(carma_v2x_msgs__msg__SpecialVehicleExtensions * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // vehicle_alerts
  j2735_v2x_msgs__msg__EmergencyDetails__fini(&msg->vehicle_alerts);
  // description
  j2735_v2x_msgs__msg__EventDescription__fini(&msg->description);
  // trailers
  carma_v2x_msgs__msg__TrailerData__fini(&msg->trailers);
}

bool
carma_v2x_msgs__msg__SpecialVehicleExtensions__are_equal(const carma_v2x_msgs__msg__SpecialVehicleExtensions * lhs, const carma_v2x_msgs__msg__SpecialVehicleExtensions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // vehicle_alerts
  if (!j2735_v2x_msgs__msg__EmergencyDetails__are_equal(
      &(lhs->vehicle_alerts), &(rhs->vehicle_alerts)))
  {
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__EventDescription__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // trailers
  if (!carma_v2x_msgs__msg__TrailerData__are_equal(
      &(lhs->trailers), &(rhs->trailers)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__SpecialVehicleExtensions__copy(
  const carma_v2x_msgs__msg__SpecialVehicleExtensions * input,
  carma_v2x_msgs__msg__SpecialVehicleExtensions * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // vehicle_alerts
  if (!j2735_v2x_msgs__msg__EmergencyDetails__copy(
      &(input->vehicle_alerts), &(output->vehicle_alerts)))
  {
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__EventDescription__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // trailers
  if (!carma_v2x_msgs__msg__TrailerData__copy(
      &(input->trailers), &(output->trailers)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__SpecialVehicleExtensions *
carma_v2x_msgs__msg__SpecialVehicleExtensions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SpecialVehicleExtensions * msg = (carma_v2x_msgs__msg__SpecialVehicleExtensions *)allocator.allocate(sizeof(carma_v2x_msgs__msg__SpecialVehicleExtensions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__SpecialVehicleExtensions));
  bool success = carma_v2x_msgs__msg__SpecialVehicleExtensions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__SpecialVehicleExtensions__destroy(carma_v2x_msgs__msg__SpecialVehicleExtensions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__SpecialVehicleExtensions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__init(carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SpecialVehicleExtensions * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__SpecialVehicleExtensions *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__SpecialVehicleExtensions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__SpecialVehicleExtensions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__SpecialVehicleExtensions__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__fini(carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * array)
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
      carma_v2x_msgs__msg__SpecialVehicleExtensions__fini(&array->data[i]);
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

carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence *
carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * array = (carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__destroy(carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__are_equal(const carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * lhs, const carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__SpecialVehicleExtensions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence__copy(
  const carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * input,
  carma_v2x_msgs__msg__SpecialVehicleExtensions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__SpecialVehicleExtensions);
    carma_v2x_msgs__msg__SpecialVehicleExtensions * data =
      (carma_v2x_msgs__msg__SpecialVehicleExtensions *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__SpecialVehicleExtensions__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__SpecialVehicleExtensions__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__SpecialVehicleExtensions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
