// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/RepeatParams.idl
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
#include "j2735_v2x_msgs/msg/detail/repeat_params__struct.h"
#include "j2735_v2x_msgs/msg/detail/repeat_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__repeat_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("j2735_v2x_msgs.msg._repeat_params.RepeatParams", full_classname_dest, 46) == 0);
  }
  j2735_v2x_msgs__msg__RepeatParams * ros_message = _ros_message;
  {  // offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->offset = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // period
    PyObject * field = PyObject_GetAttrString(_pymsg, "period");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->period = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // span
    PyObject * field = PyObject_GetAttrString(_pymsg, "span");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->span = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__repeat_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RepeatParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._repeat_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RepeatParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__RepeatParams * ros_message = (j2735_v2x_msgs__msg__RepeatParams *)raw_ros_message;
  {  // offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // span
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->span);
    {
      int rc = PyObject_SetAttrString(_pymessage, "span", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
