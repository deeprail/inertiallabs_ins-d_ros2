# generated from rosidl_generator_py/resource/_idl.py.em
# with input from inertiallabs_msgs:msg/GnssData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GnssData(type):
    """Metaclass of message 'GnssData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('inertiallabs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'inertiallabs_msgs.msg.GnssData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_data

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GnssData(metaclass=Metaclass_GnssData):
    """Message class 'GnssData'."""

    __slots__ = [
        '_header',
        '_gnss_info_1',
        '_gnss_info_2',
        '_number_sat',
        '_gnss_velocity_latency',
        '_gnss_angles_position_type',
        '_gnss_heading',
        '_gnss_pitch',
        '_gnss_gdop',
        '_gnss_pdop',
        '_gnss_hdop',
        '_gnss_vdop',
        '_gnss_tdop',
        '_new_gnss_flags',
        '_diff_age',
        '_pos_std',
        '_heading_std',
        '_pitch_std',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'gnss_info_1': 'int8',
        'gnss_info_2': 'int8',
        'number_sat': 'int8',
        'gnss_velocity_latency': 'float',
        'gnss_angles_position_type': 'int8',
        'gnss_heading': 'float',
        'gnss_pitch': 'float',
        'gnss_gdop': 'float',
        'gnss_pdop': 'float',
        'gnss_hdop': 'float',
        'gnss_vdop': 'float',
        'gnss_tdop': 'float',
        'new_gnss_flags': 'uint8',
        'diff_age': 'double',
        'pos_std': 'geometry_msgs/Vector3',
        'heading_std': 'float',
        'pitch_std': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.gnss_info_1 = kwargs.get('gnss_info_1', int())
        self.gnss_info_2 = kwargs.get('gnss_info_2', int())
        self.number_sat = kwargs.get('number_sat', int())
        self.gnss_velocity_latency = kwargs.get('gnss_velocity_latency', float())
        self.gnss_angles_position_type = kwargs.get('gnss_angles_position_type', int())
        self.gnss_heading = kwargs.get('gnss_heading', float())
        self.gnss_pitch = kwargs.get('gnss_pitch', float())
        self.gnss_gdop = kwargs.get('gnss_gdop', float())
        self.gnss_pdop = kwargs.get('gnss_pdop', float())
        self.gnss_hdop = kwargs.get('gnss_hdop', float())
        self.gnss_vdop = kwargs.get('gnss_vdop', float())
        self.gnss_tdop = kwargs.get('gnss_tdop', float())
        self.new_gnss_flags = kwargs.get('new_gnss_flags', int())
        self.diff_age = kwargs.get('diff_age', float())
        from geometry_msgs.msg import Vector3
        self.pos_std = kwargs.get('pos_std', Vector3())
        self.heading_std = kwargs.get('heading_std', float())
        self.pitch_std = kwargs.get('pitch_std', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.gnss_info_1 != other.gnss_info_1:
            return False
        if self.gnss_info_2 != other.gnss_info_2:
            return False
        if self.number_sat != other.number_sat:
            return False
        if self.gnss_velocity_latency != other.gnss_velocity_latency:
            return False
        if self.gnss_angles_position_type != other.gnss_angles_position_type:
            return False
        if self.gnss_heading != other.gnss_heading:
            return False
        if self.gnss_pitch != other.gnss_pitch:
            return False
        if self.gnss_gdop != other.gnss_gdop:
            return False
        if self.gnss_pdop != other.gnss_pdop:
            return False
        if self.gnss_hdop != other.gnss_hdop:
            return False
        if self.gnss_vdop != other.gnss_vdop:
            return False
        if self.gnss_tdop != other.gnss_tdop:
            return False
        if self.new_gnss_flags != other.new_gnss_flags:
            return False
        if self.diff_age != other.diff_age:
            return False
        if self.pos_std != other.pos_std:
            return False
        if self.heading_std != other.heading_std:
            return False
        if self.pitch_std != other.pitch_std:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def gnss_info_1(self):
        """Message field 'gnss_info_1'."""
        return self._gnss_info_1

    @gnss_info_1.setter
    def gnss_info_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_info_1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gnss_info_1' field must be an integer in [-128, 127]"
        self._gnss_info_1 = value

    @builtins.property
    def gnss_info_2(self):
        """Message field 'gnss_info_2'."""
        return self._gnss_info_2

    @gnss_info_2.setter
    def gnss_info_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_info_2' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gnss_info_2' field must be an integer in [-128, 127]"
        self._gnss_info_2 = value

    @builtins.property
    def number_sat(self):
        """Message field 'number_sat'."""
        return self._number_sat

    @number_sat.setter
    def number_sat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_sat' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'number_sat' field must be an integer in [-128, 127]"
        self._number_sat = value

    @builtins.property
    def gnss_velocity_latency(self):
        """Message field 'gnss_velocity_latency'."""
        return self._gnss_velocity_latency

    @gnss_velocity_latency.setter
    def gnss_velocity_latency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_velocity_latency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gnss_velocity_latency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gnss_velocity_latency = value

    @builtins.property
    def gnss_angles_position_type(self):
        """Message field 'gnss_angles_position_type'."""
        return self._gnss_angles_position_type

    @gnss_angles_position_type.setter
    def gnss_angles_position_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gnss_angles_position_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gnss_angles_position_type' field must be an integer in [-128, 127]"
        self._gnss_angles_position_type = value

    @builtins.property
    def gnss_heading(self):
        """Message field 'gnss_heading'."""
        return self._gnss_heading

    @gnss_heading.setter
    def gnss_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gnss_heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gnss_heading = value

    @builtins.property
    def gnss_pitch(self):
        """Message field 'gnss_pitch'."""
        return self._gnss_pitch

    @gnss_pitch.setter
    def gnss_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gnss_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gnss_pitch = value

    @builtins.property
    def gnss_gdop(self):
        """Message field 'gnss_gdop'."""
        return self._gnss_gdop

    @gnss_gdop.setter
    def gnss_gdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_gdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gnss_gdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gnss_gdop = value

    @builtins.property
    def gnss_pdop(self):
        """Message field 'gnss_pdop'."""
        return self._gnss_pdop

    @gnss_pdop.setter
    def gnss_pdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_pdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gnss_pdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gnss_pdop = value

    @builtins.property
    def gnss_hdop(self):
        """Message field 'gnss_hdop'."""
        return self._gnss_hdop

    @gnss_hdop.setter
    def gnss_hdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_hdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gnss_hdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gnss_hdop = value

    @builtins.property
    def gnss_vdop(self):
        """Message field 'gnss_vdop'."""
        return self._gnss_vdop

    @gnss_vdop.setter
    def gnss_vdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_vdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gnss_vdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gnss_vdop = value

    @builtins.property
    def gnss_tdop(self):
        """Message field 'gnss_tdop'."""
        return self._gnss_tdop

    @gnss_tdop.setter
    def gnss_tdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gnss_tdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gnss_tdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gnss_tdop = value

    @builtins.property
    def new_gnss_flags(self):
        """Message field 'new_gnss_flags'."""
        return self._new_gnss_flags

    @new_gnss_flags.setter
    def new_gnss_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'new_gnss_flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'new_gnss_flags' field must be an unsigned integer in [0, 255]"
        self._new_gnss_flags = value

    @builtins.property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_age' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'diff_age' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._diff_age = value

    @builtins.property
    def pos_std(self):
        """Message field 'pos_std'."""
        return self._pos_std

    @pos_std.setter
    def pos_std(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'pos_std' field must be a sub message of type 'Vector3'"
        self._pos_std = value

    @builtins.property
    def heading_std(self):
        """Message field 'heading_std'."""
        return self._heading_std

    @heading_std.setter
    def heading_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_std = value

    @builtins.property
    def pitch_std(self):
        """Message field 'pitch_std'."""
        return self._pitch_std

    @pitch_std.setter
    def pitch_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_std = value
