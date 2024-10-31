// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:srv/SendMessage.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/srv/detail/send_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `message_to_send`
#include "carma_driver_msgs/msg/detail/byte_array__functions.h"

bool
carma_driver_msgs__srv__SendMessage_Request__init(carma_driver_msgs__srv__SendMessage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // message_to_send
  if (!carma_driver_msgs__msg__ByteArray__init(&msg->message_to_send)) {
    carma_driver_msgs__srv__SendMessage_Request__fini(msg);
    return false;
  }
  return true;
}

void
carma_driver_msgs__srv__SendMessage_Request__fini(carma_driver_msgs__srv__SendMessage_Request * msg)
{
  if (!msg) {
    return;
  }
  // message_to_send
  carma_driver_msgs__msg__ByteArray__fini(&msg->message_to_send);
}

bool
carma_driver_msgs__srv__SendMessage_Request__are_equal(const carma_driver_msgs__srv__SendMessage_Request * lhs, const carma_driver_msgs__srv__SendMessage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message_to_send
  if (!carma_driver_msgs__msg__ByteArray__are_equal(
      &(lhs->message_to_send), &(rhs->message_to_send)))
  {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__srv__SendMessage_Request__copy(
  const carma_driver_msgs__srv__SendMessage_Request * input,
  carma_driver_msgs__srv__SendMessage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // message_to_send
  if (!carma_driver_msgs__msg__ByteArray__copy(
      &(input->message_to_send), &(output->message_to_send)))
  {
    return false;
  }
  return true;
}

carma_driver_msgs__srv__SendMessage_Request *
carma_driver_msgs__srv__SendMessage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SendMessage_Request * msg = (carma_driver_msgs__srv__SendMessage_Request *)allocator.allocate(sizeof(carma_driver_msgs__srv__SendMessage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__srv__SendMessage_Request));
  bool success = carma_driver_msgs__srv__SendMessage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__srv__SendMessage_Request__destroy(carma_driver_msgs__srv__SendMessage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__srv__SendMessage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__srv__SendMessage_Request__Sequence__init(carma_driver_msgs__srv__SendMessage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SendMessage_Request * data = NULL;

  if (size) {
    data = (carma_driver_msgs__srv__SendMessage_Request *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__srv__SendMessage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__srv__SendMessage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__srv__SendMessage_Request__fini(&data[i - 1]);
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
carma_driver_msgs__srv__SendMessage_Request__Sequence__fini(carma_driver_msgs__srv__SendMessage_Request__Sequence * array)
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
      carma_driver_msgs__srv__SendMessage_Request__fini(&array->data[i]);
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

carma_driver_msgs__srv__SendMessage_Request__Sequence *
carma_driver_msgs__srv__SendMessage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SendMessage_Request__Sequence * array = (carma_driver_msgs__srv__SendMessage_Request__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__srv__SendMessage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__srv__SendMessage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__srv__SendMessage_Request__Sequence__destroy(carma_driver_msgs__srv__SendMessage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__srv__SendMessage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__srv__SendMessage_Request__Sequence__are_equal(const carma_driver_msgs__srv__SendMessage_Request__Sequence * lhs, const carma_driver_msgs__srv__SendMessage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__srv__SendMessage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__srv__SendMessage_Request__Sequence__copy(
  const carma_driver_msgs__srv__SendMessage_Request__Sequence * input,
  carma_driver_msgs__srv__SendMessage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__srv__SendMessage_Request);
    carma_driver_msgs__srv__SendMessage_Request * data =
      (carma_driver_msgs__srv__SendMessage_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__srv__SendMessage_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__srv__SendMessage_Request__fini(&data[i]);
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
    if (!carma_driver_msgs__srv__SendMessage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
carma_driver_msgs__srv__SendMessage_Response__init(carma_driver_msgs__srv__SendMessage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // error_status
  return true;
}

void
carma_driver_msgs__srv__SendMessage_Response__fini(carma_driver_msgs__srv__SendMessage_Response * msg)
{
  if (!msg) {
    return;
  }
  // error_status
}

bool
carma_driver_msgs__srv__SendMessage_Response__are_equal(const carma_driver_msgs__srv__SendMessage_Response * lhs, const carma_driver_msgs__srv__SendMessage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_status
  if (lhs->error_status != rhs->error_status) {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__srv__SendMessage_Response__copy(
  const carma_driver_msgs__srv__SendMessage_Response * input,
  carma_driver_msgs__srv__SendMessage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // error_status
  output->error_status = input->error_status;
  return true;
}

carma_driver_msgs__srv__SendMessage_Response *
carma_driver_msgs__srv__SendMessage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SendMessage_Response * msg = (carma_driver_msgs__srv__SendMessage_Response *)allocator.allocate(sizeof(carma_driver_msgs__srv__SendMessage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__srv__SendMessage_Response));
  bool success = carma_driver_msgs__srv__SendMessage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__srv__SendMessage_Response__destroy(carma_driver_msgs__srv__SendMessage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__srv__SendMessage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__srv__SendMessage_Response__Sequence__init(carma_driver_msgs__srv__SendMessage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SendMessage_Response * data = NULL;

  if (size) {
    data = (carma_driver_msgs__srv__SendMessage_Response *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__srv__SendMessage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__srv__SendMessage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__srv__SendMessage_Response__fini(&data[i - 1]);
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
carma_driver_msgs__srv__SendMessage_Response__Sequence__fini(carma_driver_msgs__srv__SendMessage_Response__Sequence * array)
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
      carma_driver_msgs__srv__SendMessage_Response__fini(&array->data[i]);
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

carma_driver_msgs__srv__SendMessage_Response__Sequence *
carma_driver_msgs__srv__SendMessage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SendMessage_Response__Sequence * array = (carma_driver_msgs__srv__SendMessage_Response__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__srv__SendMessage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__srv__SendMessage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__srv__SendMessage_Response__Sequence__destroy(carma_driver_msgs__srv__SendMessage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__srv__SendMessage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__srv__SendMessage_Response__Sequence__are_equal(const carma_driver_msgs__srv__SendMessage_Response__Sequence * lhs, const carma_driver_msgs__srv__SendMessage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__srv__SendMessage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__srv__SendMessage_Response__Sequence__copy(
  const carma_driver_msgs__srv__SendMessage_Response__Sequence * input,
  carma_driver_msgs__srv__SendMessage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__srv__SendMessage_Response);
    carma_driver_msgs__srv__SendMessage_Response * data =
      (carma_driver_msgs__srv__SendMessage_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__srv__SendMessage_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__srv__SendMessage_Response__fini(&data[i]);
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
    if (!carma_driver_msgs__srv__SendMessage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
