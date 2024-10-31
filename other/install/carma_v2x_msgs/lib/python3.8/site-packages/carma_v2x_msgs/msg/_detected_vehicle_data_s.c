// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/DetectedVehicleData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__struct.h"
#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__exterior_lights__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__exterior_lights__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__attitude__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__attitude__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j3224_v2x_msgs__msg__attitude_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j3224_v2x_msgs__msg__attitude_confidence__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__angular_velocity__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__angular_velocity__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j3224_v2x_msgs__msg__angular_velocity_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j3224_v2x_msgs__msg__angular_velocity_confidence__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__vehicle_size__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__vehicle_size__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__vehicle_height__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__vehicle_height__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j3224_v2x_msgs__msg__vehicle_size_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j3224_v2x_msgs__msg__vehicle_size_confidence__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__basic_vehicle_class__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__basic_vehicle_class__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j3224_v2x_msgs__msg__classification_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j3224_v2x_msgs__msg__classification_confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__detected_vehicle_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("carma_v2x_msgs.msg._detected_vehicle_data.DetectedVehicleData", full_classname_dest, 61) == 0);
  }
  carma_v2x_msgs__msg__DetectedVehicleData * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lights
    PyObject * field = PyObject_GetAttrString(_pymsg, "lights");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__exterior_lights__convert_from_py(field, &ros_message->lights)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // veh_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_attitude");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__attitude__convert_from_py(field, &ros_message->veh_attitude)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // veh_attitude_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_attitude_confidence");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__attitude_confidence__convert_from_py(field, &ros_message->veh_attitude_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // veh_ang_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_ang_vel");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__angular_velocity__convert_from_py(field, &ros_message->veh_ang_vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // veh_ang_vel_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_ang_vel_confidence");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__angular_velocity_confidence__convert_from_py(field, &ros_message->veh_ang_vel_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // size
    PyObject * field = PyObject_GetAttrString(_pymsg, "size");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__vehicle_size__convert_from_py(field, &ros_message->size)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__vehicle_height__convert_from_py(field, &ros_message->height)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehicle_size_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_size_confidence");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__vehicle_size_confidence__convert_from_py(field, &ros_message->vehicle_size_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehicle_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_class");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__basic_vehicle_class__convert_from_py(field, &ros_message->vehicle_class)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // class_conf
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_conf");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__classification_confidence__convert_from_py(field, &ros_message->class_conf)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__detected_vehicle_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectedVehicleData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._detected_vehicle_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectedVehicleData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__DetectedVehicleData * ros_message = (carma_v2x_msgs__msg__DetectedVehicleData *)raw_ros_message;
  {  // presence_vector
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->presence_vector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "presence_vector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lights
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__exterior_lights__convert_to_py(&ros_message->lights);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_attitude
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__attitude__convert_to_py(&ros_message->veh_attitude);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_attitude_confidence
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__attitude_confidence__convert_to_py(&ros_message->veh_attitude_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_attitude_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_ang_vel
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__angular_velocity__convert_to_py(&ros_message->veh_ang_vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_ang_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_ang_vel_confidence
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__angular_velocity_confidence__convert_to_py(&ros_message->veh_ang_vel_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_ang_vel_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__vehicle_size__convert_to_py(&ros_message->size);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__vehicle_height__convert_to_py(&ros_message->height);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_size_confidence
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__vehicle_size_confidence__convert_to_py(&ros_message->vehicle_size_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_size_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_class
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__basic_vehicle_class__convert_to_py(&ros_message->vehicle_class);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_conf
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__classification_confidence__convert_to_py(&ros_message->class_conf);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_conf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
