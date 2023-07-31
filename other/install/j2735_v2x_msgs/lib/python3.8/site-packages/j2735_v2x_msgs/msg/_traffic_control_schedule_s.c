// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlSchedule.idl
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
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__struct.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "j2735_v2x_msgs/msg/detail/daily_schedule__functions.h"
// end nested array functions include
bool j2735_v2x_msgs__msg__day_of_week__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__day_of_week__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__daily_schedule__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__daily_schedule__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__repeat_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__repeat_params__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__traffic_control_schedule__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("j2735_v2x_msgs.msg._traffic_control_schedule.TrafficControlSchedule", full_classname_dest, 67) == 0);
  }
  j2735_v2x_msgs__msg__TrafficControlSchedule * ros_message = _ros_message;
  {  // start
    PyObject * field = PyObject_GetAttrString(_pymsg, "start");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // end
    PyObject * field = PyObject_GetAttrString(_pymsg, "end");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // end_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->end_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dow
    PyObject * field = PyObject_GetAttrString(_pymsg, "dow");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__day_of_week__convert_from_py(field, &ros_message->dow)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dow_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "dow_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dow_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // between
    PyObject * field = PyObject_GetAttrString(_pymsg, "between");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'between'");
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
    if (!j2735_v2x_msgs__msg__DailySchedule__Sequence__init(&(ros_message->between), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create j2735_v2x_msgs__msg__DailySchedule__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    j2735_v2x_msgs__msg__DailySchedule * dest = ros_message->between.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!j2735_v2x_msgs__msg__daily_schedule__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // between_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "between_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->between_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // repeat
    PyObject * field = PyObject_GetAttrString(_pymsg, "repeat");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__repeat_params__convert_from_py(field, &ros_message->repeat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // repeat_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "repeat_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->repeat_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__traffic_control_schedule__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficControlSchedule */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._traffic_control_schedule");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficControlSchedule");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__TrafficControlSchedule * ros_message = (j2735_v2x_msgs__msg__TrafficControlSchedule *)raw_ros_message;
  {  // start
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->end_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dow
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__day_of_week__convert_to_py(&ros_message->dow);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dow_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dow_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dow_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // between
    PyObject * field = NULL;
    size_t size = ros_message->between.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    j2735_v2x_msgs__msg__DailySchedule * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->between.data[i]);
      PyObject * pyitem = j2735_v2x_msgs__msg__daily_schedule__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "between", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // between_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->between_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "between_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // repeat
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__repeat_params__convert_to_py(&ros_message->repeat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "repeat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // repeat_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->repeat_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "repeat_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
