// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
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
#include "j2735_v2x_msgs/msg/detail/vehicle_data__struct.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_data__functions.h"

bool j2735_v2x_msgs__msg__vehicle_height__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_height__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__bumper_heights__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__bumper_heights__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vehicle_mass__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_mass__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__trailer_weight__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__trailer_weight__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__vehicle_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("j2735_v2x_msgs.msg._vehicle_data.VehicleData", full_classname_dest, 44) == 0);
  }
  j2735_v2x_msgs__msg__VehicleData * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_height__convert_from_py(field, &ros_message->height)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bumpers
    PyObject * field = PyObject_GetAttrString(_pymsg, "bumpers");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__bumper_heights__convert_from_py(field, &ros_message->bumpers)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_mass__convert_from_py(field, &ros_message->mass)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trailer_weight
    PyObject * field = PyObject_GetAttrString(_pymsg, "trailer_weight");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__trailer_weight__convert_from_py(field, &ros_message->trailer_weight)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__vehicle_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._vehicle_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__VehicleData * ros_message = (j2735_v2x_msgs__msg__VehicleData *)raw_ros_message;
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
  {  // height
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_height__convert_to_py(&ros_message->height);
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
  {  // bumpers
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__bumper_heights__convert_to_py(&ros_message->bumpers);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bumpers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_mass__convert_to_py(&ros_message->mass);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trailer_weight
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__trailer_weight__convert_to_py(&ros_message->trailer_weight);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trailer_weight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
