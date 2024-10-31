// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/IntersectionState.idl
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
#include "carma_v2x_msgs/msg/detail/intersection_state__struct.h"
#include "carma_v2x_msgs/msg/detail/intersection_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "carma_v2x_msgs/msg/detail/movement_state__functions.h"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__intersection_reference_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__intersection_reference_id__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__intersection_status_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__intersection_status_object__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__movement_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__movement_state__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__connection_maneuver_assist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__connection_maneuver_assist__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__intersection_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("carma_v2x_msgs.msg._intersection_state.IntersectionState", full_classname_dest, 56) == 0);
  }
  carma_v2x_msgs__msg__IntersectionState * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // name_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "name_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->name_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__intersection_reference_id__convert_from_py(field, &ros_message->id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->revision = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__intersection_status_object__convert_from_py(field, &ros_message->status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // moy
    PyObject * field = PyObject_GetAttrString(_pymsg, "moy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->moy = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // moy_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "moy_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->moy_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_stamp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_stamp_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->time_stamp_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lane_id_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id_list");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint16_t);
      if (!rosidl_runtime_c__uint16__Sequence__init(&(ros_message->lane_id_list), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint16_t * dest = ros_message->lane_id_list.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_id_list'");
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
      if (!rosidl_runtime_c__uint16__Sequence__init(&(ros_message->lane_id_list), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint16_t * dest = ros_message->lane_id_list.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint16_t tmp = (uint16_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // enabled_lanes_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled_lanes_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled_lanes_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // movement_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "movement_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'movement_list'");
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
    if (!carma_v2x_msgs__msg__MovementState__Sequence__init(&(ros_message->movement_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_v2x_msgs__msg__MovementState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_v2x_msgs__msg__MovementState * dest = ros_message->movement_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_v2x_msgs__msg__movement_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
  {  // maneuever_assist_list_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuever_assist_list_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->maneuever_assist_list_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__intersection_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IntersectionState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._intersection_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IntersectionState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__IntersectionState * ros_message = (carma_v2x_msgs__msg__IntersectionState *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->name_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__intersection_reference_id__convert_to_py(&ros_message->id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__intersection_status_object__convert_to_py(&ros_message->status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->moy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moy_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->moy_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moy_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_stamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_stamp_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->time_stamp_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_id_list
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "lane_id_list");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint16_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->lane_id_list.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint16_t * src = &(ros_message->lane_id_list.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->lane_id_list.size * sizeof(uint16_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // enabled_lanes_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled_lanes_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled_lanes_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movement_list
    PyObject * field = NULL;
    size_t size = ros_message->movement_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_v2x_msgs__msg__MovementState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->movement_list.data[i]);
      PyObject * pyitem = carma_v2x_msgs__msg__movement_state__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "movement_list", field);
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
  {  // maneuever_assist_list_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->maneuever_assist_list_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuever_assist_list_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
