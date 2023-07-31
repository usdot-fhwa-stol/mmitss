// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/OffsetYaxis.idl
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
#include "j2735_v2x_msgs/msg/detail/offset_yaxis__struct.h"
#include "j2735_v2x_msgs/msg/detail/offset_yaxis__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__offset_yaxis__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("j2735_v2x_msgs.msg._offset_yaxis.OffsetYaxis", full_classname_dest, 44) == 0);
  }
  j2735_v2x_msgs__msg__OffsetYaxis * ros_message = _ros_message;
  {  // choice
    PyObject * field = PyObject_GetAttrString(_pymsg, "choice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->choice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // small
    PyObject * field = PyObject_GetAttrString(_pymsg, "small");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->small = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // large
    PyObject * field = PyObject_GetAttrString(_pymsg, "large");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->large = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__offset_yaxis__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OffsetYaxis */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._offset_yaxis");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OffsetYaxis");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__OffsetYaxis * ros_message = (j2735_v2x_msgs__msg__OffsetYaxis *)raw_ros_message;
  {  // choice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->choice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "choice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // small
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->small);
    {
      int rc = PyObject_SetAttrString(_pymessage, "small", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // large
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->large);
    {
      int rc = PyObject_SetAttrString(_pymessage, "large", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
