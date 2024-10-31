// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_planning_msgs:msg/LaneFollowingManeuver.idl
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
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__struct.h"
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool carma_planning_msgs__msg__maneuver_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_planning_msgs__msg__maneuver_parameters__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_planning_msgs__msg__lane_following_maneuver__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("carma_planning_msgs.msg._lane_following_maneuver.LaneFollowingManeuver", full_classname_dest, 70) == 0);
  }
  carma_planning_msgs__msg__LaneFollowingManeuver * ros_message = _ros_message;
  {  // parameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "parameters");
    if (!field) {
      return false;
    }
    if (!carma_planning_msgs__msg__maneuver_parameters__convert_from_py(field, &ros_message->parameters)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // start_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // start_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->start_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // end_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->end_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lane_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_ids");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_ids'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->lane_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->lane_ids.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_planning_msgs__msg__lane_following_maneuver__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneFollowingManeuver */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_planning_msgs.msg._lane_following_maneuver");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneFollowingManeuver");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_planning_msgs__msg__LaneFollowingManeuver * ros_message = (carma_planning_msgs__msg__LaneFollowingManeuver *)raw_ros_message;
  {  // parameters
    PyObject * field = NULL;
    field = carma_planning_msgs__msg__maneuver_parameters__convert_to_py(&ros_message->parameters);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->start_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->end_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_ids
    PyObject * field = NULL;
    size_t size = ros_message->lane_ids.size;
    rosidl_runtime_c__String * src = ros_message->lane_ids.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
