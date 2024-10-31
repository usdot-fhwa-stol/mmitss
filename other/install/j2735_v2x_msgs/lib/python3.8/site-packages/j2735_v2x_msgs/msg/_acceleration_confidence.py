# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/AccelerationConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AccelerationConfidence(type):
    """Metaclass of message 'AccelerationConfidence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'ACCL_100_00': 1,
        'ACCL_010_00': 2,
        'ACCL_005_00': 3,
        'ACCL_001_00': 4,
        'ACCL_000_10': 5,
        'ACCL_000_05': 6,
        'ACCL_000_01': 7,
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
                'j2735_v2x_msgs.msg.AccelerationConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__acceleration_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__acceleration_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__acceleration_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__acceleration_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__acceleration_confidence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'ACCL_100_00': cls.__constants['ACCL_100_00'],
            'ACCL_010_00': cls.__constants['ACCL_010_00'],
            'ACCL_005_00': cls.__constants['ACCL_005_00'],
            'ACCL_001_00': cls.__constants['ACCL_001_00'],
            'ACCL_000_10': cls.__constants['ACCL_000_10'],
            'ACCL_000_05': cls.__constants['ACCL_000_05'],
            'ACCL_000_01': cls.__constants['ACCL_000_01'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_AccelerationConfidence.__constants['UNAVAILABLE']

    @property
    def ACCL_100_00(self):
        """Message constant 'ACCL_100_00'."""
        return Metaclass_AccelerationConfidence.__constants['ACCL_100_00']

    @property
    def ACCL_010_00(self):
        """Message constant 'ACCL_010_00'."""
        return Metaclass_AccelerationConfidence.__constants['ACCL_010_00']

    @property
    def ACCL_005_00(self):
        """Message constant 'ACCL_005_00'."""
        return Metaclass_AccelerationConfidence.__constants['ACCL_005_00']

    @property
    def ACCL_001_00(self):
        """Message constant 'ACCL_001_00'."""
        return Metaclass_AccelerationConfidence.__constants['ACCL_001_00']

    @property
    def ACCL_000_10(self):
        """Message constant 'ACCL_000_10'."""
        return Metaclass_AccelerationConfidence.__constants['ACCL_000_10']

    @property
    def ACCL_000_05(self):
        """Message constant 'ACCL_000_05'."""
        return Metaclass_AccelerationConfidence.__constants['ACCL_000_05']

    @property
    def ACCL_000_01(self):
        """Message constant 'ACCL_000_01'."""
        return Metaclass_AccelerationConfidence.__constants['ACCL_000_01']


class AccelerationConfidence(metaclass=Metaclass_AccelerationConfidence):
    """
    Message class 'AccelerationConfidence'.

    Constants:
      UNAVAILABLE
      ACCL_100_00
      ACCL_010_00
      ACCL_005_00
      ACCL_001_00
      ACCL_000_10
      ACCL_000_05
      ACCL_000_01
    """

    __slots__ = [
        '_acceleration_confidence',
    ]

    _fields_and_field_types = {
        'acceleration_confidence': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.acceleration_confidence = kwargs.get('acceleration_confidence', int())

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
        if self.acceleration_confidence != other.acceleration_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def acceleration_confidence(self):
        """Message field 'acceleration_confidence'."""
        return self._acceleration_confidence

    @acceleration_confidence.setter
    def acceleration_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acceleration_confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acceleration_confidence' field must be an unsigned integer in [0, 255]"
        self._acceleration_confidence = value
