// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j3224_v2x_msgs:msg/Attitude.idl
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
#include "j3224_v2x_msgs/msg/detail/attitude__struct.h"
#include "j3224_v2x_msgs/msg/detail/attitude__functions.h"

bool j3224_v2x_msgs__msg__pitch_detected__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j3224_v2x_msgs__msg__pitch_detected__convert_to_py(void * raw_ros_message);
bool j3224_v2x_msgs__msg__roll_detected__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j3224_v2x_msgs__msg__roll_detected__convert_to_py(void * raw_ros_message);
bool j3224_v2x_msgs__msg__yaw_detected__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j3224_v2x_msgs__msg__yaw_detected__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j3224_v2x_msgs__msg__attitude__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("j3224_v2x_msgs.msg._attitude.Attitude", full_classname_dest, 37) == 0);
  }
  j3224_v2x_msgs__msg__Attitude * ros_message = _ros_message;
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__pitch_detected__convert_from_py(field, &ros_message->pitch)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__roll_detected__convert_from_py(field, &ros_message->roll)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__yaw_detected__convert_from_py(field, &ros_message->yaw)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j3224_v2x_msgs__msg__attitude__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Attitude */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j3224_v2x_msgs.msg._attitude");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Attitude");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j3224_v2x_msgs__msg__Attitude * ros_message = (j3224_v2x_msgs__msg__Attitude *)raw_ros_message;
  {  // pitch
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__pitch_detected__convert_to_py(&ros_message->pitch);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__roll_detected__convert_to_py(&ros_message->roll);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__yaw_detected__convert_to_py(&ros_message->yaw);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
