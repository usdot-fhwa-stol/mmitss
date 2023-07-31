// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
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
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.h"
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "j2735_v2x_msgs/msg/detail/gross_speed__functions.h"
// end nested array functions include
bool j2735_v2x_msgs__msg__basic_vehicle_class__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__basic_vehicle_class__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vehicle_classification__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_classification__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vehicle_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_data__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__weather_report__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__weather_report__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__weather_probe__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__weather_probe__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__obstacle_detection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__obstacle_detection__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__disabled_vehicle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__disabled_vehicle__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__gross_speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__gross_speed__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__rtcm_package__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__rtcm_package__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__supplemental_vehicle_extensions__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
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
    assert(strncmp("j2735_v2x_msgs.msg._supplemental_vehicle_extensions.SupplementalVehicleExtensions", full_classname_dest, 81) == 0);
  }
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // classification
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__basic_vehicle_class__convert_from_py(field, &ros_message->classification)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // class_details
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_details");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_classification__convert_from_py(field, &ros_message->class_details)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehicle_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_data");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_data__convert_from_py(field, &ros_message->vehicle_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // weather_report
    PyObject * field = PyObject_GetAttrString(_pymsg, "weather_report");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__weather_report__convert_from_py(field, &ros_message->weather_report)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // weather_probe
    PyObject * field = PyObject_GetAttrString(_pymsg, "weather_probe");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__weather_probe__convert_from_py(field, &ros_message->weather_probe)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__obstacle_detection__convert_from_py(field, &ros_message->obstacle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__disabled_vehicle__convert_from_py(field, &ros_message->status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed_profile
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_profile");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'speed_profile'");
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
    if (!j2735_v2x_msgs__msg__GrossSpeed__Sequence__init(&(ros_message->speed_profile), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create j2735_v2x_msgs__msg__GrossSpeed__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    j2735_v2x_msgs__msg__GrossSpeed * dest = ros_message->speed_profile.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!j2735_v2x_msgs__msg__gross_speed__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // the_rtcm
    PyObject * field = PyObject_GetAttrString(_pymsg, "the_rtcm");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__rtcm_package__convert_from_py(field, &ros_message->the_rtcm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__supplemental_vehicle_extensions__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SupplementalVehicleExtensions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._supplemental_vehicle_extensions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SupplementalVehicleExtensions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions * ros_message = (j2735_v2x_msgs__msg__SupplementalVehicleExtensions *)raw_ros_message;
  {  // presence_vector
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->presence_vector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "presence_vector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__basic_vehicle_class__convert_to_py(&ros_message->classification);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_details
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_classification__convert_to_py(&ros_message->class_details);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_details", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_data
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_data__convert_to_py(&ros_message->vehicle_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weather_report
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__weather_report__convert_to_py(&ros_message->weather_report);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "weather_report", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weather_probe
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__weather_probe__convert_to_py(&ros_message->weather_probe);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "weather_probe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__obstacle_detection__convert_to_py(&ros_message->obstacle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__disabled_vehicle__convert_to_py(&ros_message->status);
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
  {  // speed_profile
    PyObject * field = NULL;
    size_t size = ros_message->speed_profile.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    j2735_v2x_msgs__msg__GrossSpeed * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->speed_profile.data[i]);
      PyObject * pyitem = j2735_v2x_msgs__msg__gross_speed__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "speed_profile", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // the_rtcm
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__rtcm_package__convert_to_py(&ros_message->the_rtcm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "the_rtcm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
