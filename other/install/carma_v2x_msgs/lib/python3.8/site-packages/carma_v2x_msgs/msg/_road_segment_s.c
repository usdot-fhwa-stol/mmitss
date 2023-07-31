// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/RoadSegment.idl
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
#include "carma_v2x_msgs/msg/detail/road_segment__struct.h"
#include "carma_v2x_msgs/msg/detail/road_segment__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "carma_v2x_msgs/msg/detail/generic_lane__functions.h"
#include "carma_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__road_segment_reference_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__road_segment_reference_id__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__position3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__position3_d__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__regulatory_speed_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__regulatory_speed_limit__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__generic_lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__generic_lane__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__road_segment__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("carma_v2x_msgs.msg._road_segment.RoadSegment", full_classname_dest, 44) == 0);
  }
  carma_v2x_msgs__msg__RoadSegment * ros_message = _ros_message;
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
    if (!j2735_v2x_msgs__msg__road_segment_reference_id__convert_from_py(field, &ros_message->id)) {
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
  {  // ref_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__position3_d__convert_from_py(field, &ros_message->ref_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lane_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_width_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_width_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lane_width_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed_limits
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'speed_limits'");
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
    if (!carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence__init(&(ros_message->speed_limits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_v2x_msgs__msg__RegulatorySpeedLimit__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_v2x_msgs__msg__RegulatorySpeedLimit * dest = ros_message->speed_limits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_v2x_msgs__msg__regulatory_speed_limit__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // speed_limits_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limits_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_limits_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // road_lane_set_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_lane_set_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'road_lane_set_list'");
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
    if (!carma_v2x_msgs__msg__GenericLane__Sequence__init(&(ros_message->road_lane_set_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_v2x_msgs__msg__GenericLane__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_v2x_msgs__msg__GenericLane * dest = ros_message->road_lane_set_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_v2x_msgs__msg__generic_lane__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__road_segment__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoadSegment */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._road_segment");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoadSegment");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__RoadSegment * ros_message = (carma_v2x_msgs__msg__RoadSegment *)raw_ros_message;
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
    field = j2735_v2x_msgs__msg__road_segment_reference_id__convert_to_py(&ros_message->id);
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
  {  // ref_point
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__position3_d__convert_to_py(&ros_message->ref_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_width_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lane_width_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_width_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limits
    PyObject * field = NULL;
    size_t size = ros_message->speed_limits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_v2x_msgs__msg__RegulatorySpeedLimit * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->speed_limits.data[i]);
      PyObject * pyitem = carma_v2x_msgs__msg__regulatory_speed_limit__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "speed_limits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limits_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_limits_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limits_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_lane_set_list
    PyObject * field = NULL;
    size_t size = ros_message->road_lane_set_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_v2x_msgs__msg__GenericLane * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->road_lane_set_list.data[i]);
      PyObject * pyitem = carma_v2x_msgs__msg__generic_lane__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "road_lane_set_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
