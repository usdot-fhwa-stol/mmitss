// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/DetectedVehicleData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lights`
#include "j2735_v2x_msgs/msg/detail/exterior_lights__functions.h"
// Member `veh_attitude`
#include "carma_v2x_msgs/msg/detail/attitude__functions.h"
// Member `veh_attitude_confidence`
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__functions.h"
// Member `veh_ang_vel`
#include "carma_v2x_msgs/msg/detail/angular_velocity__functions.h"
// Member `veh_ang_vel_confidence`
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__functions.h"
// Member `size`
#include "carma_v2x_msgs/msg/detail/vehicle_size__functions.h"
// Member `height`
#include "carma_v2x_msgs/msg/detail/vehicle_height__functions.h"
// Member `vehicle_size_confidence`
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__functions.h"
// Member `vehicle_class`
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"
// Member `class_conf`
#include "j3224_v2x_msgs/msg/detail/classification_confidence__functions.h"

bool
carma_v2x_msgs__msg__DetectedVehicleData__init(carma_v2x_msgs__msg__DetectedVehicleData * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__init(&msg->lights)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // veh_attitude
  if (!carma_v2x_msgs__msg__Attitude__init(&msg->veh_attitude)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // veh_attitude_confidence
  if (!j3224_v2x_msgs__msg__AttitudeConfidence__init(&msg->veh_attitude_confidence)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // veh_ang_vel
  if (!carma_v2x_msgs__msg__AngularVelocity__init(&msg->veh_ang_vel)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // veh_ang_vel_confidence
  if (!j3224_v2x_msgs__msg__AngularVelocityConfidence__init(&msg->veh_ang_vel_confidence)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // size
  if (!carma_v2x_msgs__msg__VehicleSize__init(&msg->size)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // height
  if (!carma_v2x_msgs__msg__VehicleHeight__init(&msg->height)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // vehicle_size_confidence
  if (!j3224_v2x_msgs__msg__VehicleSizeConfidence__init(&msg->vehicle_size_confidence)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // vehicle_class
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__init(&msg->vehicle_class)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  // class_conf
  if (!j3224_v2x_msgs__msg__ClassificationConfidence__init(&msg->class_conf)) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__DetectedVehicleData__fini(carma_v2x_msgs__msg__DetectedVehicleData * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // lights
  j2735_v2x_msgs__msg__ExteriorLights__fini(&msg->lights);
  // veh_attitude
  carma_v2x_msgs__msg__Attitude__fini(&msg->veh_attitude);
  // veh_attitude_confidence
  j3224_v2x_msgs__msg__AttitudeConfidence__fini(&msg->veh_attitude_confidence);
  // veh_ang_vel
  carma_v2x_msgs__msg__AngularVelocity__fini(&msg->veh_ang_vel);
  // veh_ang_vel_confidence
  j3224_v2x_msgs__msg__AngularVelocityConfidence__fini(&msg->veh_ang_vel_confidence);
  // size
  carma_v2x_msgs__msg__VehicleSize__fini(&msg->size);
  // height
  carma_v2x_msgs__msg__VehicleHeight__fini(&msg->height);
  // vehicle_size_confidence
  j3224_v2x_msgs__msg__VehicleSizeConfidence__fini(&msg->vehicle_size_confidence);
  // vehicle_class
  j2735_v2x_msgs__msg__BasicVehicleClass__fini(&msg->vehicle_class);
  // class_conf
  j3224_v2x_msgs__msg__ClassificationConfidence__fini(&msg->class_conf);
}

bool
carma_v2x_msgs__msg__DetectedVehicleData__are_equal(const carma_v2x_msgs__msg__DetectedVehicleData * lhs, const carma_v2x_msgs__msg__DetectedVehicleData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__are_equal(
      &(lhs->lights), &(rhs->lights)))
  {
    return false;
  }
  // veh_attitude
  if (!carma_v2x_msgs__msg__Attitude__are_equal(
      &(lhs->veh_attitude), &(rhs->veh_attitude)))
  {
    return false;
  }
  // veh_attitude_confidence
  if (!j3224_v2x_msgs__msg__AttitudeConfidence__are_equal(
      &(lhs->veh_attitude_confidence), &(rhs->veh_attitude_confidence)))
  {
    return false;
  }
  // veh_ang_vel
  if (!carma_v2x_msgs__msg__AngularVelocity__are_equal(
      &(lhs->veh_ang_vel), &(rhs->veh_ang_vel)))
  {
    return false;
  }
  // veh_ang_vel_confidence
  if (!j3224_v2x_msgs__msg__AngularVelocityConfidence__are_equal(
      &(lhs->veh_ang_vel_confidence), &(rhs->veh_ang_vel_confidence)))
  {
    return false;
  }
  // size
  if (!carma_v2x_msgs__msg__VehicleSize__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // height
  if (!carma_v2x_msgs__msg__VehicleHeight__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  // vehicle_size_confidence
  if (!j3224_v2x_msgs__msg__VehicleSizeConfidence__are_equal(
      &(lhs->vehicle_size_confidence), &(rhs->vehicle_size_confidence)))
  {
    return false;
  }
  // vehicle_class
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__are_equal(
      &(lhs->vehicle_class), &(rhs->vehicle_class)))
  {
    return false;
  }
  // class_conf
  if (!j3224_v2x_msgs__msg__ClassificationConfidence__are_equal(
      &(lhs->class_conf), &(rhs->class_conf)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__DetectedVehicleData__copy(
  const carma_v2x_msgs__msg__DetectedVehicleData * input,
  carma_v2x_msgs__msg__DetectedVehicleData * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__copy(
      &(input->lights), &(output->lights)))
  {
    return false;
  }
  // veh_attitude
  if (!carma_v2x_msgs__msg__Attitude__copy(
      &(input->veh_attitude), &(output->veh_attitude)))
  {
    return false;
  }
  // veh_attitude_confidence
  if (!j3224_v2x_msgs__msg__AttitudeConfidence__copy(
      &(input->veh_attitude_confidence), &(output->veh_attitude_confidence)))
  {
    return false;
  }
  // veh_ang_vel
  if (!carma_v2x_msgs__msg__AngularVelocity__copy(
      &(input->veh_ang_vel), &(output->veh_ang_vel)))
  {
    return false;
  }
  // veh_ang_vel_confidence
  if (!j3224_v2x_msgs__msg__AngularVelocityConfidence__copy(
      &(input->veh_ang_vel_confidence), &(output->veh_ang_vel_confidence)))
  {
    return false;
  }
  // size
  if (!carma_v2x_msgs__msg__VehicleSize__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // height
  if (!carma_v2x_msgs__msg__VehicleHeight__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  // vehicle_size_confidence
  if (!j3224_v2x_msgs__msg__VehicleSizeConfidence__copy(
      &(input->vehicle_size_confidence), &(output->vehicle_size_confidence)))
  {
    return false;
  }
  // vehicle_class
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__copy(
      &(input->vehicle_class), &(output->vehicle_class)))
  {
    return false;
  }
  // class_conf
  if (!j3224_v2x_msgs__msg__ClassificationConfidence__copy(
      &(input->class_conf), &(output->class_conf)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__DetectedVehicleData *
carma_v2x_msgs__msg__DetectedVehicleData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedVehicleData * msg = (carma_v2x_msgs__msg__DetectedVehicleData *)allocator.allocate(sizeof(carma_v2x_msgs__msg__DetectedVehicleData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__DetectedVehicleData));
  bool success = carma_v2x_msgs__msg__DetectedVehicleData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__DetectedVehicleData__destroy(carma_v2x_msgs__msg__DetectedVehicleData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__DetectedVehicleData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__DetectedVehicleData__Sequence__init(carma_v2x_msgs__msg__DetectedVehicleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedVehicleData * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__DetectedVehicleData *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__DetectedVehicleData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__DetectedVehicleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__DetectedVehicleData__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__DetectedVehicleData__Sequence__fini(carma_v2x_msgs__msg__DetectedVehicleData__Sequence * array)
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
      carma_v2x_msgs__msg__DetectedVehicleData__fini(&array->data[i]);
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

carma_v2x_msgs__msg__DetectedVehicleData__Sequence *
carma_v2x_msgs__msg__DetectedVehicleData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__DetectedVehicleData__Sequence * array = (carma_v2x_msgs__msg__DetectedVehicleData__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__DetectedVehicleData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__DetectedVehicleData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__DetectedVehicleData__Sequence__destroy(carma_v2x_msgs__msg__DetectedVehicleData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__DetectedVehicleData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__DetectedVehicleData__Sequence__are_equal(const carma_v2x_msgs__msg__DetectedVehicleData__Sequence * lhs, const carma_v2x_msgs__msg__DetectedVehicleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__DetectedVehicleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__DetectedVehicleData__Sequence__copy(
  const carma_v2x_msgs__msg__DetectedVehicleData__Sequence * input,
  carma_v2x_msgs__msg__DetectedVehicleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__DetectedVehicleData);
    carma_v2x_msgs__msg__DetectedVehicleData * data =
      (carma_v2x_msgs__msg__DetectedVehicleData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__DetectedVehicleData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__DetectedVehicleData__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__DetectedVehicleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
