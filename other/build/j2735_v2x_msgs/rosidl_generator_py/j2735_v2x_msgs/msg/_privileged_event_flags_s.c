// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/PrivilegedEventFlags.idl
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
#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__struct.h"
#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__privileged_event_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("j2735_v2x_msgs.msg._privileged_event_flags.PrivilegedEventFlags", full_classname_dest, 63) == 0);
  }
  j2735_v2x_msgs__msg__PrivilegedEventFlags * ros_message = _ros_message;
  {  // privileged_event_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "privileged_event_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->privileged_event_flags = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__privileged_event_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PrivilegedEventFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._privileged_event_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PrivilegedEventFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__PrivilegedEventFlags * ros_message = (j2735_v2x_msgs__msg__PrivilegedEventFlags *)raw_ros_message;
  {  // privileged_event_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->privileged_event_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "privileged_event_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
