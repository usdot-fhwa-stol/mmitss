// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/TimeChangeDetails.idl
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
#include "carma_v2x_msgs/msg/detail/time_change_details__struct.h"
#include "carma_v2x_msgs/msg/detail/time_change_details__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__time_change_details__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("carma_v2x_msgs.msg._time_change_details.TimeChangeDetails", full_classname_dest, 57) == 0);
  }
  carma_v2x_msgs__msg__TimeChangeDetails * ros_message = _ros_message;
  {  // start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // start_time_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_time_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->start_time_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // min_end_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_end_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_end_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_end_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_end_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_end_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_end_time_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_end_time_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->max_end_time_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // likely_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "likely_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->likely_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // likely_time_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "likely_time_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->likely_time_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confidence = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // confidence_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->confidence_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // next_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->next_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // next_time_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_time_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->next_time_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__time_change_details__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TimeChangeDetails */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._time_change_details");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TimeChangeDetails");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__TimeChangeDetails * ros_message = (carma_v2x_msgs__msg__TimeChangeDetails *)raw_ros_message;
  {  // start_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_time_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->start_time_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_time_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_end_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_end_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_end_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_end_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_end_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_end_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_end_time_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->max_end_time_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_end_time_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // likely_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->likely_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "likely_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // likely_time_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->likely_time_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "likely_time_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->confidence_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->next_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_time_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->next_time_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_time_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
