// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/OffsetLLB18.idl
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
#include "carma_v2x_msgs/msg/detail/offset_llb18__struct.h"
#include "carma_v2x_msgs/msg/detail/offset_llb18__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__offset_llb18__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("carma_v2x_msgs.msg._offset_llb18.OffsetLLB18", full_classname_dest, 44) == 0);
  }
  carma_v2x_msgs__msg__OffsetLLB18 * ros_message = _ros_message;
  {  // offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // unavailable
    PyObject * field = PyObject_GetAttrString(_pymsg, "unavailable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->unavailable = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__offset_llb18__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OffsetLLB18 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._offset_llb18");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OffsetLLB18");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__OffsetLLB18 * ros_message = (carma_v2x_msgs__msg__OffsetLLB18 *)raw_ros_message;
  {  // offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unavailable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->unavailable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unavailable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
