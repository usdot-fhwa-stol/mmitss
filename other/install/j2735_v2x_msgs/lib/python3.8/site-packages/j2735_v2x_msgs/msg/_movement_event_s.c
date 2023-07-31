// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/MovementEvent.idl
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
#include "j2735_v2x_msgs/msg/detail/movement_event__struct.h"
#include "j2735_v2x_msgs/msg/detail/movement_event__functions.h"

bool j2735_v2x_msgs__msg__movement_phase_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__movement_phase_state__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__time_change_details__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__time_change_details__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__advisory_speed_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__advisory_speed_list__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__movement_event__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("j2735_v2x_msgs.msg._movement_event.MovementEvent", full_classname_dest, 48) == 0);
  }
  j2735_v2x_msgs__msg__MovementEvent * ros_message = _ros_message;
  {  // event_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_state");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__movement_phase_state__convert_from_py(field, &ros_message->event_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // timing
    PyObject * field = PyObject_GetAttrString(_pymsg, "timing");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__time_change_details__convert_from_py(field, &ros_message->timing)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // timing_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "timing_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->timing_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speeds
    PyObject * field = PyObject_GetAttrString(_pymsg, "speeds");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__advisory_speed_list__convert_from_py(field, &ros_message->speeds)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speeds_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "speeds_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speeds_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__movement_event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MovementEvent */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._movement_event");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MovementEvent");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__MovementEvent * ros_message = (j2735_v2x_msgs__msg__MovementEvent *)raw_ros_message;
  {  // event_state
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__movement_phase_state__convert_to_py(&ros_message->event_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "event_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timing
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__time_change_details__convert_to_py(&ros_message->timing);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timing_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->timing_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timing_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speeds
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__advisory_speed_list__convert_to_py(&ros_message->speeds);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speeds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speeds_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speeds_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speeds_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
