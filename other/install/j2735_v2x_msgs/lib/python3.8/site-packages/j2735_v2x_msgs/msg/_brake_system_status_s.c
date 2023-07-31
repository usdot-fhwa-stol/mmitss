// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
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
#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.h"
#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"

bool j2735_v2x_msgs__msg__brake_applied_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__brake_applied_status__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__traction_control_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__traction_control_status__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__anti_lock_brake_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__anti_lock_brake_status__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__stability_control_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__stability_control_status__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__brake_boost_applied__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__brake_boost_applied__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__auxiliary_brake_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__auxiliary_brake_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__brake_system_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("j2735_v2x_msgs.msg._brake_system_status.BrakeSystemStatus", full_classname_dest, 57) == 0);
  }
  j2735_v2x_msgs__msg__BrakeSystemStatus * ros_message = _ros_message;
  {  // wheel_brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_brakes");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__brake_applied_status__convert_from_py(field, &ros_message->wheel_brakes)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // traction
    PyObject * field = PyObject_GetAttrString(_pymsg, "traction");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__traction_control_status__convert_from_py(field, &ros_message->traction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__anti_lock_brake_status__convert_from_py(field, &ros_message->abs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scs
    PyObject * field = PyObject_GetAttrString(_pymsg, "scs");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__stability_control_status__convert_from_py(field, &ros_message->scs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // brake_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_boost");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__brake_boost_applied__convert_from_py(field, &ros_message->brake_boost)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // aux_brakes
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux_brakes");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__auxiliary_brake_status__convert_from_py(field, &ros_message->aux_brakes)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__brake_system_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BrakeSystemStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._brake_system_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BrakeSystemStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__BrakeSystemStatus * ros_message = (j2735_v2x_msgs__msg__BrakeSystemStatus *)raw_ros_message;
  {  // wheel_brakes
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__brake_applied_status__convert_to_py(&ros_message->wheel_brakes);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traction
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__traction_control_status__convert_to_py(&ros_message->traction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "traction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__anti_lock_brake_status__convert_to_py(&ros_message->abs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scs
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__stability_control_status__convert_to_py(&ros_message->scs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_boost
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__brake_boost_applied__convert_to_py(&ros_message->brake_boost);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux_brakes
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__auxiliary_brake_status__convert_to_py(&ros_message->aux_brakes);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux_brakes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
