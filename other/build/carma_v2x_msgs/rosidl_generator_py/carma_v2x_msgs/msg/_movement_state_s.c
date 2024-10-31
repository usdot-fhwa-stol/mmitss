// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/MovementState.idl
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
#include "carma_v2x_msgs/msg/detail/movement_state__struct.h"
#include "carma_v2x_msgs/msg/detail/movement_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "carma_v2x_msgs/msg/detail/movement_event__functions.h"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"
// end nested array functions include
bool carma_v2x_msgs__msg__movement_event__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__movement_event__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__connection_maneuver_assist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__connection_maneuver_assist__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__movement_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("carma_v2x_msgs.msg._movement_state.MovementState", full_classname_dest, 48) == 0);
  }
  carma_v2x_msgs__msg__MovementState * ros_message = _ros_message;
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
  {  // movement_event_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "movement_event_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'movement_event_list'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!carma_v2x_msgs__msg__MovementEvent__Sequence__init(&(ros_message->movement_event_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_v2x_msgs__msg__MovementEvent__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_v2x_msgs__msg__MovementEvent * dest = ros_message->movement_event_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_v2x_msgs__msg__movement_event__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // connection_maneuver_assist_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_maneuver_assist_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'connection_maneuver_assist_list'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(&(ros_message->connection_maneuver_assist_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    j2735_v2x_msgs__msg__ConnectionManeuverAssist * dest = ros_message->connection_maneuver_assist_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!j2735_v2x_msgs__msg__connection_maneuver_assist__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
PyObject * carma_v2x_msgs__msg__movement_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MovementState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._movement_state");
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
  carma_v2x_msgs__msg__MovementState * ros_message = (carma_v2x_msgs__msg__MovementState *)raw_ros_message;
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
  {  // movement_event_list
    PyObject * field = NULL;
    size_t size = ros_message->movement_event_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_v2x_msgs__msg__MovementEvent * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->movement_event_list.data[i]);
      PyObject * pyitem = carma_v2x_msgs__msg__movement_event__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "movement_event_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connection_maneuver_assist_list
    PyObject * field = NULL;
    size_t size = ros_message->connection_maneuver_assist_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    j2735_v2x_msgs__msg__ConnectionManeuverAssist * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->connection_maneuver_assist_list.data[i]);
      PyObject * pyitem = j2735_v2x_msgs__msg__connection_maneuver_assist__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_maneuver_assist_list", field);
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
