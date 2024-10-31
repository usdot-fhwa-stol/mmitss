# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/RollRateConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RollRateConfidence(type):
    """Metaclass of message 'RollRateConfidence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'DEG_SEC_100_0': 1,
        'DEG_SEC_010_00': 2,
        'DEG_SEC_005_00': 3,
        'DEG_SEC_001_00': 4,
        'DEG_SEC_000_10': 5,
        'DEG_SEC_000_05': 6,
        'DEG_SEC_000_01': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j3224_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j3224_v2x_msgs.msg.RollRateConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roll_rate_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roll_rate_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roll_rate_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roll_rate_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roll_rate_confidence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'DEG_SEC_100_0': cls.__constants['DEG_SEC_100_0'],
            'DEG_SEC_010_00': cls.__constants['DEG_SEC_010_00'],
            'DEG_SEC_005_00': cls.__constants['DEG_SEC_005_00'],
            'DEG_SEC_001_00': cls.__constants['DEG_SEC_001_00'],
            'DEG_SEC_000_10': cls.__constants['DEG_SEC_000_10'],
            'DEG_SEC_000_05': cls.__constants['DEG_SEC_000_05'],
            'DEG_SEC_000_01': cls.__constants['DEG_SEC_000_01'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_RollRateConfidence.__constants['UNAVAILABLE']

    @property
    def DEG_SEC_100_0(self):
        """Message constant 'DEG_SEC_100_0'."""
        return Metaclass_RollRateConfidence.__constants['DEG_SEC_100_0']

    @property
    def DEG_SEC_010_00(self):
        """Message constant 'DEG_SEC_010_00'."""
        return Metaclass_RollRateConfidence.__constants['DEG_SEC_010_00']

    @property
    def DEG_SEC_005_00(self):
        """Message constant 'DEG_SEC_005_00'."""
        return Metaclass_RollRateConfidence.__constants['DEG_SEC_005_00']

    @property
    def DEG_SEC_001_00(self):
        """Message constant 'DEG_SEC_001_00'."""
        return Metaclass_RollRateConfidence.__constants['DEG_SEC_001_00']

    @property
    def DEG_SEC_000_10(self):
        """Message constant 'DEG_SEC_000_10'."""
        return Metaclass_RollRateConfidence.__constants['DEG_SEC_000_10']

    @property
    def DEG_SEC_000_05(self):
        """Message constant 'DEG_SEC_000_05'."""
        return Metaclass_RollRateConfidence.__constants['DEG_SEC_000_05']

    @property
    def DEG_SEC_000_01(self):
        """Message constant 'DEG_SEC_000_01'."""
        return Metaclass_RollRateConfidence.__constants['DEG_SEC_000_01']


class RollRateConfidence(metaclass=Metaclass_RollRateConfidence):
    """
    Message class 'RollRateConfidence'.

    Constants:
      UNAVAILABLE
      DEG_SEC_100_0
      DEG_SEC_010_00
      DEG_SEC_005_00
      DEG_SEC_001_00
      DEG_SEC_000_10
      DEG_SEC_000_05
      DEG_SEC_000_01
    """

    __slots__ = [
        '_roll_rate_confidence',
    ]

    _fields_and_field_types = {
        'roll_rate_confidence': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.roll_rate_confidence = kwargs.get('roll_rate_confidence', int())

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
        if self.roll_rate_confidence != other.roll_rate_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def roll_rate_confidence(self):
        """Message field 'roll_rate_confidence'."""
        return self._roll_rate_confidence

    @roll_rate_confidence.setter
    def roll_rate_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roll_rate_confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'roll_rate_confidence' field must be an unsigned integer in [0, 255]"
        self._roll_rate_confidence = value
