// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/traffic_control_message_v01__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reqid`
#include "j2735_v2x_msgs/msg/detail/id64b__functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/id128b__functions.h"
// Member `updated`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `package`
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__functions.h"
// Member `params`
#include "carma_v2x_msgs/msg/detail/traffic_control_params__functions.h"
// Member `geometry`
#include "carma_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"

bool
carma_v2x_msgs__msg__TrafficControlMessageV01__init(carma_v2x_msgs__msg__TrafficControlMessageV01 * msg)
{
  if (!msg) {
    return false;
  }
  // reqid
  if (!j2735_v2x_msgs__msg__Id64b__init(&msg->reqid)) {
    carma_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // reqseq
  // msgtot
  // msgnum
  // id
  if (!j2735_v2x_msgs__msg__Id128b__init(&msg->id)) {
    carma_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // updated
  if (!builtin_interfaces__msg__Time__init(&msg->updated)) {
    carma_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // package
  if (!j2735_v2x_msgs__msg__TrafficControlPackage__init(&msg->package)) {
    carma_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // package_exists
  // params
  if (!carma_v2x_msgs__msg__TrafficControlParams__init(&msg->params)) {
    carma_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // params_exists
  // geometry
  if (!carma_v2x_msgs__msg__TrafficControlGeometry__init(&msg->geometry)) {
    carma_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
    return false;
  }
  // geometry_exists
  return true;
}

void
carma_v2x_msgs__msg__TrafficControlMessageV01__fini(carma_v2x_msgs__msg__TrafficControlMessageV01 * msg)
{
  if (!msg) {
    return;
  }
  // reqid
  j2735_v2x_msgs__msg__Id64b__fini(&msg->reqid);
  // reqseq
  // msgtot
  // msgnum
  // id
  j2735_v2x_msgs__msg__Id128b__fini(&msg->id);
  // updated
  builtin_interfaces__msg__Time__fini(&msg->updated);
  // package
  j2735_v2x_msgs__msg__TrafficControlPackage__fini(&msg->package);
  // package_exists
  // params
  carma_v2x_msgs__msg__TrafficControlParams__fini(&msg->params);
  // params_exists
  // geometry
  carma_v2x_msgs__msg__TrafficControlGeometry__fini(&msg->geometry);
  // geometry_exists
}

bool
carma_v2x_msgs__msg__TrafficControlMessageV01__are_equal(const carma_v2x_msgs__msg__TrafficControlMessageV01 * lhs, const carma_v2x_msgs__msg__TrafficControlMessageV01 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reqid
  if (!j2735_v2x_msgs__msg__Id64b__are_equal(
      &(lhs->reqid), &(rhs->reqid)))
  {
    return false;
  }
  // reqseq
  if (lhs->reqseq != rhs->reqseq) {
    return false;
  }
  // msgtot
  if (lhs->msgtot != rhs->msgtot) {
    return false;
  }
  // msgnum
  if (lhs->msgnum != rhs->msgnum) {
    return false;
  }
  // id
  if (!j2735_v2x_msgs__msg__Id128b__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // updated
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->updated), &(rhs->updated)))
  {
    return false;
  }
  // package
  if (!j2735_v2x_msgs__msg__TrafficControlPackage__are_equal(
      &(lhs->package), &(rhs->package)))
  {
    return false;
  }
  // package_exists
  if (lhs->package_exists != rhs->package_exists) {
    return false;
  }
  // params
  if (!carma_v2x_msgs__msg__TrafficControlParams__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  // params_exists
  if (lhs->params_exists != rhs->params_exists) {
    return false;
  }
  // geometry
  if (!carma_v2x_msgs__msg__TrafficControlGeometry__are_equal(
      &(lhs->geometry), &(rhs->geometry)))
  {
    return false;
  }
  // geometry_exists
  if (lhs->geometry_exists != rhs->geometry_exists) {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrafficControlMessageV01__copy(
  const carma_v2x_msgs__msg__TrafficControlMessageV01 * input,
  carma_v2x_msgs__msg__TrafficControlMessageV01 * output)
{
  if (!input || !output) {
    return false;
  }
  // reqid
  if (!j2735_v2x_msgs__msg__Id64b__copy(
      &(input->reqid), &(output->reqid)))
  {
    return false;
  }
  // reqseq
  output->reqseq = input->reqseq;
  // msgtot
  output->msgtot = input->msgtot;
  // msgnum
  output->msgnum = input->msgnum;
  // id
  if (!j2735_v2x_msgs__msg__Id128b__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // updated
  if (!builtin_interfaces__msg__Time__copy(
      &(input->updated), &(output->updated)))
  {
    return false;
  }
  // package
  if (!j2735_v2x_msgs__msg__TrafficControlPackage__copy(
      &(input->package), &(output->package)))
  {
    return false;
  }
  // package_exists
  output->package_exists = input->package_exists;
  // params
  if (!carma_v2x_msgs__msg__TrafficControlParams__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  // params_exists
  output->params_exists = input->params_exists;
  // geometry
  if (!carma_v2x_msgs__msg__TrafficControlGeometry__copy(
      &(input->geometry), &(output->geometry)))
  {
    return false;
  }
  // geometry_exists
  output->geometry_exists = input->geometry_exists;
  return true;
}

carma_v2x_msgs__msg__TrafficControlMessageV01 *
carma_v2x_msgs__msg__TrafficControlMessageV01__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlMessageV01 * msg = (carma_v2x_msgs__msg__TrafficControlMessageV01 *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrafficControlMessageV01), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__TrafficControlMessageV01));
  bool success = carma_v2x_msgs__msg__TrafficControlMessageV01__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__TrafficControlMessageV01__destroy(carma_v2x_msgs__msg__TrafficControlMessageV01 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__TrafficControlMessageV01__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence__init(carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlMessageV01 * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__TrafficControlMessageV01 *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__TrafficControlMessageV01), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__TrafficControlMessageV01__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__TrafficControlMessageV01__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence__fini(carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence * array)
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
      carma_v2x_msgs__msg__TrafficControlMessageV01__fini(&array->data[i]);
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

carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence *
carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence * array = (carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence__destroy(carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence__are_equal(const carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence * lhs, const carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__TrafficControlMessageV01__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence__copy(
  const carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence * input,
  carma_v2x_msgs__msg__TrafficControlMessageV01__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__TrafficControlMessageV01);
    carma_v2x_msgs__msg__TrafficControlMessageV01 * data =
      (carma_v2x_msgs__msg__TrafficControlMessageV01 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__TrafficControlMessageV01__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__TrafficControlMessageV01__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__TrafficControlMessageV01__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
