// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
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
#include "j2735_v2x_msgs/msg/detail/movement_state__struct.h"
#include "j2735_v2x_msgs/msg/detail/movement_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool j2735_v2x_msgs__msg__movement_event_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__movement_event_list__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__maneuver_assist_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__maneuver_assist_list__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__movement_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("j2735_v2x_msgs.msg._movement_state.MovementState", full_classname_dest, 48) == 0);
  }
  j2735_v2x_msgs__msg__MovementState * ros_message = _ros_message;
  {  // movement_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "movement_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->movement_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // movement_name_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "movement_name_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->movement_name_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // signal_group
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_group");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_group = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // state_time_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_time_speed");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__movement_event_list__convert_from_py(field, &ros_message->state_time_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // maneuver_assist_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_assist_list");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__maneuver_assist_list__convert_from_py(field, &ros_message->maneuver_assist_list)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // maneuver_assist_list_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_assist_list_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->maneuver_assist_list_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__movement_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MovementState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._movement_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MovementState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__MovementState * ros_message = (j2735_v2x_msgs__msg__MovementState *)raw_ros_message;
  {  // movement_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->movement_name.data,
      strlen(ros_message->movement_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "movement_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movement_name_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->movement_name_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "movement_name_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_group
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signal_group);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_group", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_time_speed
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__movement_event_list__convert_to_py(&ros_message->state_time_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_time_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver_assist_list
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__maneuver_assist_list__convert_to_py(&ros_message->maneuver_assist_list);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_assist_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver_assist_list_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->maneuver_assist_list_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_assist_list_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
