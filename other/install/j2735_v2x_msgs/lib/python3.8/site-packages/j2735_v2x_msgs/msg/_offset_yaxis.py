# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/OffsetYaxis.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OffsetYaxis(type):
    """Metaclass of message 'OffsetYaxis'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SMALL': 0,
        'LARGE': 1,
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
                'j2735_v2x_msgs.msg.OffsetYaxis')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__offset_yaxis
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__offset_yaxis
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__offset_yaxis
            cls._TYPE_SUPPORT = module.type_support_msg__msg__offset_yaxis
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__offset_yaxis

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SMALL': cls.__constants['SMALL'],
            'LARGE': cls.__constants['LARGE'],
        }

    @property
    def SMALL(self):
        """Message constant 'SMALL'."""
        return Metaclass_OffsetYaxis.__constants['SMALL']

    @property
    def LARGE(self):
        """Message constant 'LARGE'."""
        return Metaclass_OffsetYaxis.__constants['LARGE']


class OffsetYaxis(metaclass=Metaclass_OffsetYaxis):
    """
    Message class 'OffsetYaxis'.

    Constants:
      SMALL
      LARGE
    """

    __slots__ = [
        '_choice',
        '_small',
        '_large',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'small': 'int16',
        'large': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        self.small = kwargs.get('small', int())
        self.large = kwargs.get('large', int())

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
        if self.choice != other.choice:
            return False
        if self.small != other.small:
            return False
        if self.large != other.large:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def choice(self):
        """Message field 'choice'."""
        return self._choice

    @choice.setter
    def choice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'choice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'choice' field must be an unsigned integer in [0, 255]"
        self._choice = value

    @property
    def small(self):
        """Message field 'small'."""
        return self._small

    @small.setter
    def small(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'small' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'small' field must be an integer in [-32768, 32767]"
        self._small = value

    @property
    def large(self):
        """Message field 'large'."""
        return self._large

    @large.setter
    def large(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'large' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'large' field must be an integer in [-32768, 32767]"
        self._large = value
