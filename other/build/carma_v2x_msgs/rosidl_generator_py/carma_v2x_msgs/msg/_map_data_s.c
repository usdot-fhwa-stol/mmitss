// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/MapData.idl
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
#include "carma_v2x_msgs/msg/detail/map_data__struct.h"
#include "carma_v2x_msgs/msg/detail/map_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "carma_v2x_msgs/msg/detail/intersection_geometry__functions.h"
#include "carma_v2x_msgs/msg/detail/road_segment__functions.h"
#include "j2735_v2x_msgs/msg/detail/restriction_class_assignment__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__layer_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__layer_type__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__intersection_geometry__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__intersection_geometry__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__road_segment__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__road_segment__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__data_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__data_parameters__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__restriction_class_assignment__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__restriction_class_assignment__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__map_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("carma_v2x_msgs.msg._map_data.MapData", full_classname_dest, 36) == 0);
  }
  carma_v2x_msgs__msg__MapData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_stamp = PyLong_AsUnsignedLong(field);
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
  {  // msg_issue_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_issue_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_issue_revision = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // layer_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "layer_type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__layer_type__convert_from_py(field, &ros_message->layer_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // layer_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "layer_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->layer_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // layer_id_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "layer_id_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->layer_id_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // intersections
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersections");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'intersections'");
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
    if (!carma_v2x_msgs__msg__IntersectionGeometry__Sequence__init(&(ros_message->intersections), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_v2x_msgs__msg__IntersectionGeometry__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_v2x_msgs__msg__IntersectionGeometry * dest = ros_message->intersections.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_v2x_msgs__msg__intersection_geometry__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // intersections_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersections_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->intersections_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // road_segment_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_segment_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'road_segment_list'");
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
    if (!carma_v2x_msgs__msg__RoadSegment__Sequence__init(&(ros_message->road_segment_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_v2x_msgs__msg__RoadSegment__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_v2x_msgs__msg__RoadSegment * dest = ros_message->road_segment_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_v2x_msgs__msg__road_segment__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // road_segments_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_segments_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->road_segments_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data_parameters
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_parameters");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__data_parameters__convert_from_py(field, &ros_message->data_parameters)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // data_parameters_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_parameters_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->data_parameters_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // restriction_class_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "restriction_class_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'restriction_class_list'");
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
    if (!j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence__init(&(ros_message->restriction_class_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    j2735_v2x_msgs__msg__RestrictionClassAssignment * dest = ros_message->restriction_class_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!j2735_v2x_msgs__msg__restriction_class_assignment__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // restriction_list_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "restriction_list_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->restriction_list_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__map_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._map_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__MapData * ros_message = (carma_v2x_msgs__msg__MapData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_stamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_stamp);
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
  {  // msg_issue_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msg_issue_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_issue_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layer_type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__layer_type__convert_to_py(&ros_message->layer_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "layer_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layer_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->layer_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "layer_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layer_id_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->layer_id_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "layer_id_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersections
    PyObject * field = NULL;
    size_t size = ros_message->intersections.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_v2x_msgs__msg__IntersectionGeometry * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->intersections.data[i]);
      PyObject * pyitem = carma_v2x_msgs__msg__intersection_geometry__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "intersections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersections_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->intersections_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersections_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_segment_list
    PyObject * field = NULL;
    size_t size = ros_message->road_segment_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_v2x_msgs__msg__RoadSegment * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->road_segment_list.data[i]);
      PyObject * pyitem = carma_v2x_msgs__msg__road_segment__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "road_segment_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_segments_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->road_segments_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_segments_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_parameters
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__data_parameters__convert_to_py(&ros_message->data_parameters);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_parameters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_parameters_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->data_parameters_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_parameters_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restriction_class_list
    PyObject * field = NULL;
    size_t size = ros_message->restriction_class_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    j2735_v2x_msgs__msg__RestrictionClassAssignment * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->restriction_class_list.data[i]);
      PyObject * pyitem = j2735_v2x_msgs__msg__restriction_class_assignment__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "restriction_class_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restriction_list_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->restriction_list_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "restriction_list_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
