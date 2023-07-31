# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/OffsetB11.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OffsetB11(type):
    """Metaclass of message 'OffsetB11'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFFSET_UNKNOWN': -1024,
        'OFFSET_MIN': -1023,
        'OFFSET_MAX': 1023,
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
                'j2735_v2x_msgs.msg.OffsetB11')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__offset_b11
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__offset_b11
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__offset_b11
            cls._TYPE_SUPPORT = module.type_support_msg__msg__offset_b11
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__offset_b11

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFFSET_UNKNOWN': cls.__constants['OFFSET_UNKNOWN'],
            'OFFSET_MIN': cls.__constants['OFFSET_MIN'],
            'OFFSET_MAX': cls.__constants['OFFSET_MAX'],
        }

    @property
    def OFFSET_UNKNOWN(self):
        """Message constant 'OFFSET_UNKNOWN'."""
        return Metaclass_OffsetB11.__constants['OFFSET_UNKNOWN']

    @property
    def OFFSET_MIN(self):
        """Message constant 'OFFSET_MIN'."""
        return Metaclass_OffsetB11.__constants['OFFSET_MIN']

    @property
    def OFFSET_MAX(self):
        """Message constant 'OFFSET_MAX'."""
        return Metaclass_OffsetB11.__constants['OFFSET_MAX']


class OffsetB11(metaclass=Metaclass_OffsetB11):
    """
    Message class 'OffsetB11'.

    Constants:
      OFFSET_UNKNOWN
      OFFSET_MIN
      OFFSET_MAX
    """

    __slots__ = [
        '_offset',
    ]

    _fields_and_field_types = {
        'offset': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.offset = kwargs.get('offset', int())

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
        if self.offset != other.offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'offset' field must be an integer in [-32768, 32767]"
        self._offset = value
