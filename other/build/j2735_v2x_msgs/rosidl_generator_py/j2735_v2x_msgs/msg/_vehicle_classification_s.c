// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
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
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"

bool j2735_v2x_msgs__msg__basic_vehicle_class__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__basic_vehicle_class__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__basic_vehicle_role__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__basic_vehicle_role__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vehicle_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_type__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__itis_vehicle_group_affected__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__itis_vehicle_group_affected__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__itis_incident_response_equipment__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__itis_incident_response_equipment__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__itis_responder_group_affected__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__itis_responder_group_affected__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__fuel_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__fuel_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__vehicle_classification__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("j2735_v2x_msgs.msg._vehicle_classification.VehicleClassification", full_classname_dest, 64) == 0);
  }
  j2735_v2x_msgs__msg__VehicleClassification * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // key_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__basic_vehicle_class__convert_from_py(field, &ros_message->key_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // role
    PyObject * field = PyObject_GetAttrString(_pymsg, "role");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__basic_vehicle_role__convert_from_py(field, &ros_message->role)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // iso3833
    PyObject * field = PyObject_GetAttrString(_pymsg, "iso3833");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->iso3833 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hpms_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "hpms_type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_type__convert_from_py(field, &ros_message->hpms_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehicle_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__itis_vehicle_group_affected__convert_from_py(field, &ros_message->vehicle_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // response_equip
    PyObject * field = PyObject_GetAttrString(_pymsg, "response_equip");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__itis_incident_response_equipment__convert_from_py(field, &ros_message->response_equip)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // responder_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "responder_type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__itis_responder_group_affected__convert_from_py(field, &ros_message->responder_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fuel_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__fuel_type__convert_from_py(field, &ros_message->fuel_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__vehicle_classification__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleClassification */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._vehicle_classification");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleClassification");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__VehicleClassification * ros_message = (j2735_v2x_msgs__msg__VehicleClassification *)raw_ros_message;
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
  {  // key_type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__basic_vehicle_class__convert_to_py(&ros_message->key_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // role
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__basic_vehicle_role__convert_to_py(&ros_message->role);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "role", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iso3833
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->iso3833);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iso3833", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hpms_type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_type__convert_to_py(&ros_message->hpms_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hpms_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__itis_vehicle_group_affected__convert_to_py(&ros_message->vehicle_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response_equip
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__itis_incident_response_equipment__convert_to_py(&ros_message->response_equip);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "response_equip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // responder_type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__itis_responder_group_affected__convert_to_py(&ros_message->responder_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "responder_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__fuel_type__convert_to_py(&ros_message->fuel_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
