# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/Heading.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Heading(type):
    """Metaclass of message 'Heading'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HEADING_UNAVAILABLE': 28800,
        'HEADING_MAX': 28798,
        'HEADING_MIN': 0,
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
                'j2735_v2x_msgs.msg.Heading')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__heading
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__heading
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__heading
            cls._TYPE_SUPPORT = module.type_support_msg__msg__heading
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__heading

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HEADING_UNAVAILABLE': cls.__constants['HEADING_UNAVAILABLE'],
            'HEADING_MAX': cls.__constants['HEADING_MAX'],
            'HEADING_MIN': cls.__constants['HEADING_MIN'],
        }

    @property
    def HEADING_UNAVAILABLE(self):
        """Message constant 'HEADING_UNAVAILABLE'."""
        return Metaclass_Heading.__constants['HEADING_UNAVAILABLE']

    @property
    def HEADING_MAX(self):
        """Message constant 'HEADING_MAX'."""
        return Metaclass_Heading.__constants['HEADING_MAX']

    @property
    def HEADING_MIN(self):
        """Message constant 'HEADING_MIN'."""
        return Metaclass_Heading.__constants['HEADING_MIN']


class Heading(metaclass=Metaclass_Heading):
    """
    Message class 'Heading'.

    Constants:
      HEADING_UNAVAILABLE
      HEADING_MAX
      HEADING_MIN
    """

    __slots__ = [
        '_heading',
    ]

    _fields_and_field_types = {
        'heading': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.heading = kwargs.get('heading', int())

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
        if self.heading != other.heading:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'heading' field must be an unsigned integer in [0, 65535]"
        self._heading = value
