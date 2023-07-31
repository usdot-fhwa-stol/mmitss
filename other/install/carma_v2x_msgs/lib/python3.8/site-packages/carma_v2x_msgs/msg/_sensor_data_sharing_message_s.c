// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/SensorDataSharingMessage.idl
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
#include "carma_v2x_msgs/msg/detail/sensor_data_sharing_message__struct.h"
#include "carma_v2x_msgs/msg/detail/sensor_data_sharing_message__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__msg_count__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__msg_count__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__temporary_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__temporary_id__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j3224_v2x_msgs__msg__equipment_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j3224_v2x_msgs__msg__equipment_type__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__d_date_time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__d_date_time__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__position3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__position3_d__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__positional_accuracy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__positional_accuracy__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__detected_object_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__detected_object_list__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__elevation_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__elevation_confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__sensor_data_sharing_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("carma_v2x_msgs.msg._sensor_data_sharing_message.SensorDataSharingMessage", full_classname_dest, 72) == 0);
  }
  carma_v2x_msgs__msg__SensorDataSharingMessage * ros_message = _ros_message;
  {  // msg_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_cnt");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__msg_count__convert_from_py(field, &ros_message->msg_cnt)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // source_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_id");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__temporary_id__convert_from_py(field, &ros_message->source_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // equipment_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "equipment_type");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__equipment_type__convert_from_py(field, &ros_message->equipment_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sdsm_time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sdsm_time_stamp");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__d_date_time__convert_from_py(field, &ros_message->sdsm_time_stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ref_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_pos");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__position3_d__convert_from_py(field, &ros_message->ref_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ref_pos_xy_conf
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_pos_xy_conf");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__positional_accuracy__convert_from_py(field, &ros_message->ref_pos_xy_conf)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // objects
    PyObject * field = PyObject_GetAttrString(_pymsg, "objects");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__detected_object_list__convert_from_py(field, &ros_message->objects)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ref_pos_el_conf
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_pos_el_conf");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__elevation_confidence__convert_from_py(field, &ros_message->ref_pos_el_conf)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__sensor_data_sharing_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorDataSharingMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._sensor_data_sharing_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorDataSharingMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__SensorDataSharingMessage * ros_message = (carma_v2x_msgs__msg__SensorDataSharingMessage *)raw_ros_message;
  {  // msg_cnt
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__msg_count__convert_to_py(&ros_message->msg_cnt);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_id
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__temporary_id__convert_to_py(&ros_message->source_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // equipment_type
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__equipment_type__convert_to_py(&ros_message->equipment_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "equipment_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sdsm_time_stamp
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__d_date_time__convert_to_py(&ros_message->sdsm_time_stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sdsm_time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_pos
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__position3_d__convert_to_py(&ros_message->ref_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_pos_xy_conf
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__positional_accuracy__convert_to_py(&ros_message->ref_pos_xy_conf);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_pos_xy_conf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objects
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__detected_object_list__convert_to_py(&ros_message->objects);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "objects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // ref_pos_el_conf
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__elevation_confidence__convert_to_py(&ros_message->ref_pos_el_conf);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_pos_el_conf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
