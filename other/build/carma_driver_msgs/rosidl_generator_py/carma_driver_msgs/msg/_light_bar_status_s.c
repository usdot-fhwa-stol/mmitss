// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
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
#include "carma_driver_msgs/msg/detail/light_bar_status__struct.h"
#include "carma_driver_msgs/msg/detail/light_bar_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_driver_msgs__msg__light_bar_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("carma_driver_msgs.msg._light_bar_status.LightBarStatus", full_classname_dest, 54) == 0);
  }
  carma_driver_msgs__msg__LightBarStatus * ros_message = _ros_message;
  {  // green_solid
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_solid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->green_solid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yellow_solid
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_solid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yellow_solid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_arrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_arrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_arrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_arrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_arrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_arrow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sides_solid
    PyObject * field = PyObject_GetAttrString(_pymsg, "sides_solid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sides_solid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flash
    PyObject * field = PyObject_GetAttrString(_pymsg, "flash");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flash = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // green_flash
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_flash");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->green_flash = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // takedown
    PyObject * field = PyObject_GetAttrString(_pymsg, "takedown");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->takedown = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_driver_msgs__msg__light_bar_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LightBarStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_driver_msgs.msg._light_bar_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LightBarStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_driver_msgs__msg__LightBarStatus * ros_message = (carma_driver_msgs__msg__LightBarStatus *)raw_ros_message;
  {  // green_solid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->green_solid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_solid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_solid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->yellow_solid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_solid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_arrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_arrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_arrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_arrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_arrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_arrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sides_solid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sides_solid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sides_solid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flash
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flash);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flash", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_flash
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->green_flash);
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_flash", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // takedown
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->takedown);
    {
      int rc = PyObject_SetAttrString(_pymessage, "takedown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
