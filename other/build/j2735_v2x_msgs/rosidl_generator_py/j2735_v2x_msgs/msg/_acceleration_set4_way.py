# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/AccelerationSet4Way.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AccelerationSet4Way(type):
    """Metaclass of message 'AccelerationSet4Way'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACCELERATION_UNAVAILABLE': 2001,
        'ACCELERATION_MAX': 2000,
        'ACCELERATION_MIN': -2000,
        'ACCELERATION_VERTICAL_UNAVAILABLE': -127,
        'ACCELERATION_VERTICAL_MAX': 127,
        'ACCELERATION_VERTICAL_MIN': -126,
        'YAWRATE_UNAVAILABLE': 0,
        'YAWRATE_MAX': 32767,
        'YAWRATE_MIN': -32767,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.AccelerationSet4Way')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__acceleration_set4_way
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__acceleration_set4_way
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__acceleration_set4_way
            cls._TYPE_SUPPORT = module.type_support_msg__msg__acceleration_set4_way
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__acceleration_set4_way

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACCELERATION_UNAVAILABLE': cls.__constants['ACCELERATION_UNAVAILABLE'],
            'ACCELERATION_MAX': cls.__constants['ACCELERATION_MAX'],
            'ACCELERATION_MIN': cls.__constants['ACCELERATION_MIN'],
            'ACCELERATION_VERTICAL_UNAVAILABLE': cls.__constants['ACCELERATION_VERTICAL_UNAVAILABLE'],
            'ACCELERATION_VERTICAL_MAX': cls.__constants['ACCELERATION_VERTICAL_MAX'],
            'ACCELERATION_VERTICAL_MIN': cls.__constants['ACCELERATION_VERTICAL_MIN'],
            'YAWRATE_UNAVAILABLE': cls.__constants['YAWRATE_UNAVAILABLE'],
            'YAWRATE_MAX': cls.__constants['YAWRATE_MAX'],
            'YAWRATE_MIN': cls.__constants['YAWRATE_MIN'],
        }

    @property
    def ACCELERATION_UNAVAILABLE(self):
        """Message constant 'ACCELERATION_UNAVAILABLE'."""
        return Metaclass_AccelerationSet4Way.__constants['ACCELERATION_UNAVAILABLE']

    @property
    def ACCELERATION_MAX(self):
        """Message constant 'ACCELERATION_MAX'."""
        return Metaclass_AccelerationSet4Way.__constants['ACCELERATION_MAX']

    @property
    def ACCELERATION_MIN(self):
        """Message constant 'ACCELERATION_MIN'."""
        return Metaclass_AccelerationSet4Way.__constants['ACCELERATION_MIN']

    @property
    def ACCELERATION_VERTICAL_UNAVAILABLE(self):
        """Message constant 'ACCELERATION_VERTICAL_UNAVAILABLE'."""
        return Metaclass_AccelerationSet4Way.__constants['ACCELERATION_VERTICAL_UNAVAILABLE']

    @property
    def ACCELERATION_VERTICAL_MAX(self):
        """Message constant 'ACCELERATION_VERTICAL_MAX'."""
        return Metaclass_AccelerationSet4Way.__constants['ACCELERATION_VERTICAL_MAX']

    @property
    def ACCELERATION_VERTICAL_MIN(self):
        """Message constant 'ACCELERATION_VERTICAL_MIN'."""
        return Metaclass_AccelerationSet4Way.__constants['ACCELERATION_VERTICAL_MIN']

    @property
    def YAWRATE_UNAVAILABLE(self):
        """Message constant 'YAWRATE_UNAVAILABLE'."""
        return Metaclass_AccelerationSet4Way.__constants['YAWRATE_UNAVAILABLE']

    @property
    def YAWRATE_MAX(self):
        """Message constant 'YAWRATE_MAX'."""
        return Metaclass_AccelerationSet4Way.__constants['YAWRATE_MAX']

    @property
    def YAWRATE_MIN(self):
        """Message constant 'YAWRATE_MIN'."""
        return Metaclass_AccelerationSet4Way.__constants['YAWRATE_MIN']


class AccelerationSet4Way(metaclass=Metaclass_AccelerationSet4Way):
    """
    Message class 'AccelerationSet4Way'.

    Constants:
      ACCELERATION_UNAVAILABLE
      ACCELERATION_MAX
      ACCELERATION_MIN
      ACCELERATION_VERTICAL_UNAVAILABLE
      ACCELERATION_VERTICAL_MAX
      ACCELERATION_VERTICAL_MIN
      YAWRATE_UNAVAILABLE
      YAWRATE_MAX
      YAWRATE_MIN
    """

    __slots__ = [
        '_longitudinal',
        '_lateral',
        '_vert',
        '_yaw_rate',
    ]

    _fields_and_field_types = {
        'longitudinal': 'int16',
        'lateral': 'int16',
        'vert': 'int8',
        'yaw_rate': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.longitudinal = kwargs.get('longitudinal', int())
        self.lateral = kwargs.get('lateral', int())
        self.vert = kwargs.get('vert', int())
        self.yaw_rate = kwargs.get('yaw_rate', int())

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
        if self.longitudinal != other.longitudinal:
            return False
        if self.lateral != other.lateral:
            return False
        if self.vert != other.vert:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def longitudinal(self):
        """Message field 'longitudinal'."""
        return self._longitudinal

    @longitudinal.setter
    def longitudinal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'longitudinal' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'longitudinal' field must be an integer in [-32768, 32767]"
        self._longitudinal = value

    @property
    def lateral(self):
        """Message field 'lateral'."""
        return self._lateral

    @lateral.setter
    def lateral(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lateral' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'lateral' field must be an integer in [-32768, 32767]"
        self._lateral = value

    @property
    def vert(self):
        """Message field 'vert'."""
        return self._vert

    @vert.setter
    def vert(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vert' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'vert' field must be an integer in [-128, 127]"
        self._vert = value

    @property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw_rate' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'yaw_rate' field must be an integer in [-32768, 32767]"
        self._yaw_rate = value
