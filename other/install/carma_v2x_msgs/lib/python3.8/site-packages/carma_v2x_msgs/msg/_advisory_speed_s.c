// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/AdvisorySpeed.idl
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
#include "carma_v2x_msgs/msg/detail/advisory_speed__struct.h"
#include "carma_v2x_msgs/msg/detail/advisory_speed__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__advisory_speed_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__advisory_speed_type__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__speed_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__speed_confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__advisory_speed__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("carma_v2x_msgs.msg._advisory_speed.AdvisorySpeed", full_classname_dest, 48) == 0);
  }
  carma_v2x_msgs__msg__AdvisorySpeed * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__advisory_speed_type__convert_from_py(field, &ros_message->type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__speed_confidence__convert_from_py(field, &ros_message->confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distance_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->distance_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // restriction_class_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "restriction_class_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->restriction_class_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // restriction_class_id_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "restriction_class_id_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->restriction_class_id_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__advisory_speed__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AdvisorySpeed */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._advisory_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AdvisorySpeed");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__AdvisorySpeed * ros_message = (carma_v2x_msgs__msg__AdvisorySpeed *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__advisory_speed_type__convert_to_py(&ros_message->type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__speed_confidence__convert_to_py(&ros_message->confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->distance_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restriction_class_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->restriction_class_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "restriction_class_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restriction_class_id_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->restriction_class_id_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "restriction_class_id_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
