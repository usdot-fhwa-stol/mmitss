# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ThrottleConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ThrottleConfidence(type):
    """Metaclass of message 'ThrottleConfidence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'PREC_10_PERCENT': 1,
        'PREC_1_PERCENT': 2,
        'PREC_05_PERCENT': 3,
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
                'j2735_v2x_msgs.msg.ThrottleConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__throttle_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__throttle_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__throttle_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__throttle_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__throttle_confidence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'PREC_10_PERCENT': cls.__constants['PREC_10_PERCENT'],
            'PREC_1_PERCENT': cls.__constants['PREC_1_PERCENT'],
            'PREC_05_PERCENT': cls.__constants['PREC_05_PERCENT'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_ThrottleConfidence.__constants['UNAVAILABLE']

    @property
    def PREC_10_PERCENT(self):
        """Message constant 'PREC_10_PERCENT'."""
        return Metaclass_ThrottleConfidence.__constants['PREC_10_PERCENT']

    @property
    def PREC_1_PERCENT(self):
        """Message constant 'PREC_1_PERCENT'."""
        return Metaclass_ThrottleConfidence.__constants['PREC_1_PERCENT']

    @property
    def PREC_05_PERCENT(self):
        """Message constant 'PREC_05_PERCENT'."""
        return Metaclass_ThrottleConfidence.__constants['PREC_05_PERCENT']


class ThrottleConfidence(metaclass=Metaclass_ThrottleConfidence):
    """
    Message class 'ThrottleConfidence'.

    Constants:
      UNAVAILABLE
      PREC_10_PERCENT
      PREC_1_PERCENT
      PREC_05_PERCENT
    """

    __slots__ = [
        '_confidence',
    ]

    _fields_and_field_types = {
        'confidence': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.confidence = kwargs.get('confidence', int())

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
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confidence' field must be an unsigned integer in [0, 255]"
        self._confidence = value
