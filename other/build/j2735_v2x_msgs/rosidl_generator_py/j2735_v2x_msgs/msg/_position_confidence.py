# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PositionConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionConfidence(type):
    """Metaclass of message 'PositionConfidence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'A500M': 1,
        'A200M': 2,
        'A100M': 3,
        'A50M': 4,
        'A20M': 5,
        'A10M': 6,
        'A5M': 7,
        'A2M': 8,
        'A1M': 9,
        'A50CM': 10,
        'A20CM': 11,
        'A10CM': 12,
        'A5CM': 13,
        'A2CM': 14,
        'A1CM': 15,
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
                'j2735_v2x_msgs.msg.PositionConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_confidence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'A500M': cls.__constants['A500M'],
            'A200M': cls.__constants['A200M'],
            'A100M': cls.__constants['A100M'],
            'A50M': cls.__constants['A50M'],
            'A20M': cls.__constants['A20M'],
            'A10M': cls.__constants['A10M'],
            'A5M': cls.__constants['A5M'],
            'A2M': cls.__constants['A2M'],
            'A1M': cls.__constants['A1M'],
            'A50CM': cls.__constants['A50CM'],
            'A20CM': cls.__constants['A20CM'],
            'A10CM': cls.__constants['A10CM'],
            'A5CM': cls.__constants['A5CM'],
            'A2CM': cls.__constants['A2CM'],
            'A1CM': cls.__constants['A1CM'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_PositionConfidence.__constants['UNAVAILABLE']

    @property
    def A500M(self):
        """Message constant 'A500M'."""
        return Metaclass_PositionConfidence.__constants['A500M']

    @property
    def A200M(self):
        """Message constant 'A200M'."""
        return Metaclass_PositionConfidence.__constants['A200M']

    @property
    def A100M(self):
        """Message constant 'A100M'."""
        return Metaclass_PositionConfidence.__constants['A100M']

    @property
    def A50M(self):
        """Message constant 'A50M'."""
        return Metaclass_PositionConfidence.__constants['A50M']

    @property
    def A20M(self):
        """Message constant 'A20M'."""
        return Metaclass_PositionConfidence.__constants['A20M']

    @property
    def A10M(self):
        """Message constant 'A10M'."""
        return Metaclass_PositionConfidence.__constants['A10M']

    @property
    def A5M(self):
        """Message constant 'A5M'."""
        return Metaclass_PositionConfidence.__constants['A5M']

    @property
    def A2M(self):
        """Message constant 'A2M'."""
        return Metaclass_PositionConfidence.__constants['A2M']

    @property
    def A1M(self):
        """Message constant 'A1M'."""
        return Metaclass_PositionConfidence.__constants['A1M']

    @property
    def A50CM(self):
        """Message constant 'A50CM'."""
        return Metaclass_PositionConfidence.__constants['A50CM']

    @property
    def A20CM(self):
        """Message constant 'A20CM'."""
        return Metaclass_PositionConfidence.__constants['A20CM']

    @property
    def A10CM(self):
        """Message constant 'A10CM'."""
        return Metaclass_PositionConfidence.__constants['A10CM']

    @property
    def A5CM(self):
        """Message constant 'A5CM'."""
        return Metaclass_PositionConfidence.__constants['A5CM']

    @property
    def A2CM(self):
        """Message constant 'A2CM'."""
        return Metaclass_PositionConfidence.__constants['A2CM']

    @property
    def A1CM(self):
        """Message constant 'A1CM'."""
        return Metaclass_PositionConfidence.__constants['A1CM']


class PositionConfidence(metaclass=Metaclass_PositionConfidence):
    """
    Message class 'PositionConfidence'.

    Constants:
      UNAVAILABLE
      A500M
      A200M
      A100M
      A50M
      A20M
      A10M
      A5M
      A2M
      A1M
      A50CM
      A20CM
      A10CM
      A5CM
      A2CM
      A1CM
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
