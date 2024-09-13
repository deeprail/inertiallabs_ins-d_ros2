// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from inertiallabs_msgs:msg/GnssData.idl
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
#include "inertiallabs_msgs/msg/detail/gnss_data__struct.h"
#include "inertiallabs_msgs/msg/detail/gnss_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool inertiallabs_msgs__msg__gnss_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("inertiallabs_msgs.msg._gnss_data.GnssData", full_classname_dest, 41) == 0);
  }
  inertiallabs_msgs__msg__GnssData * ros_message = _ros_message;
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
  {  // gnss_info_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_info_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_info_1 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gnss_info_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_info_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_info_2 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // number_sat
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_sat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_sat = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gnss_velocity_latency
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_velocity_latency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_velocity_latency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_angles_position_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_angles_position_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gnss_angles_position_type = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gnss_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_gdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_gdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_gdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_pdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_pdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_pdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_hdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_hdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_hdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_vdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_vdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_vdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_tdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_tdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gnss_tdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // new_gnss_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_gnss_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->new_gnss_flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // diff_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_age = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_std");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->pos_std)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heading_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * inertiallabs_msgs__msg__gnss_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GnssData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("inertiallabs_msgs.msg._gnss_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GnssData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  inertiallabs_msgs__msg__GnssData * ros_message = (inertiallabs_msgs__msg__GnssData *)raw_ros_message;
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
  {  // gnss_info_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gnss_info_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_info_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_info_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gnss_info_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_info_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_sat
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->number_sat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_sat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_velocity_latency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_velocity_latency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_velocity_latency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_angles_position_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gnss_angles_position_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_angles_position_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_gdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_gdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_gdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_pdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_pdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_pdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_hdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_hdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_hdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_vdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_vdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_vdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_tdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gnss_tdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_tdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_gnss_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->new_gnss_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_gnss_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_std
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->pos_std);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
