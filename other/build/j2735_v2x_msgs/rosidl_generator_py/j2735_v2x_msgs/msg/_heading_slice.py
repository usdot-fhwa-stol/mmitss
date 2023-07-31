# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/HeadingSlice.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HeadingSlice(type):
    """Metaclass of message 'HeadingSlice'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_HEADING': 0,
        'FROM_000_0_TO_022_5_DEGREES': 1,
        'FROM_022_5_TO_045_0_DEGREES': 2,
        'FROM_045_0_TO_067_5_DEGREES': 4,
        'FROM_067_5_TO_090_0_DEGREES': 8,
        'FROM_090_0_TO_112_5_DEGREES': 16,
        'FROM_112_5_TO_135_0_DEGREES': 32,
        'FROM_135_0_TO_157_5_DEGREES': 64,
        'FROM_157_5_TO_180_0_DEGREES': 128,
        'FROM_180_0_TO_202_5_DEGREES': 256,
        'FROM_202_5_TO_225_0_DEGREES': 512,
        'FROM_225_0_TO_247_5_DEGREES': 1024,
        'FROM_247_5_TO_270_0_DEGREES': 2048,
        'FROM_270_0_TO_292_5_DEGREES': 4096,
        'FROM_292_5_TO_315_0_DEGREES': 8192,
        'FROM_315_0_TO_337_5_DEGREES': 16384,
        'FROM_337_5_TO_360_0_DEGREES': 32768,
        'ALL_HEADINGS': 65535,
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
                'j2735_v2x_msgs.msg.HeadingSlice')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__heading_slice
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__heading_slice
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__heading_slice
            cls._TYPE_SUPPORT = module.type_support_msg__msg__heading_slice
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__heading_slice

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_HEADING': cls.__constants['NO_HEADING'],
            'FROM_000_0_TO_022_5_DEGREES': cls.__constants['FROM_000_0_TO_022_5_DEGREES'],
            'FROM_022_5_TO_045_0_DEGREES': cls.__constants['FROM_022_5_TO_045_0_DEGREES'],
            'FROM_045_0_TO_067_5_DEGREES': cls.__constants['FROM_045_0_TO_067_5_DEGREES'],
            'FROM_067_5_TO_090_0_DEGREES': cls.__constants['FROM_067_5_TO_090_0_DEGREES'],
            'FROM_090_0_TO_112_5_DEGREES': cls.__constants['FROM_090_0_TO_112_5_DEGREES'],
            'FROM_112_5_TO_135_0_DEGREES': cls.__constants['FROM_112_5_TO_135_0_DEGREES'],
            'FROM_135_0_TO_157_5_DEGREES': cls.__constants['FROM_135_0_TO_157_5_DEGREES'],
            'FROM_157_5_TO_180_0_DEGREES': cls.__constants['FROM_157_5_TO_180_0_DEGREES'],
            'FROM_180_0_TO_202_5_DEGREES': cls.__constants['FROM_180_0_TO_202_5_DEGREES'],
            'FROM_202_5_TO_225_0_DEGREES': cls.__constants['FROM_202_5_TO_225_0_DEGREES'],
            'FROM_225_0_TO_247_5_DEGREES': cls.__constants['FROM_225_0_TO_247_5_DEGREES'],
            'FROM_247_5_TO_270_0_DEGREES': cls.__constants['FROM_247_5_TO_270_0_DEGREES'],
            'FROM_270_0_TO_292_5_DEGREES': cls.__constants['FROM_270_0_TO_292_5_DEGREES'],
            'FROM_292_5_TO_315_0_DEGREES': cls.__constants['FROM_292_5_TO_315_0_DEGREES'],
            'FROM_315_0_TO_337_5_DEGREES': cls.__constants['FROM_315_0_TO_337_5_DEGREES'],
            'FROM_337_5_TO_360_0_DEGREES': cls.__constants['FROM_337_5_TO_360_0_DEGREES'],
            'ALL_HEADINGS': cls.__constants['ALL_HEADINGS'],
        }

    @property
    def NO_HEADING(self):
        """Message constant 'NO_HEADING'."""
        return Metaclass_HeadingSlice.__constants['NO_HEADING']

    @property
    def FROM_000_0_TO_022_5_DEGREES(self):
        """Message constant 'FROM_000_0_TO_022_5_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_000_0_TO_022_5_DEGREES']

    @property
    def FROM_022_5_TO_045_0_DEGREES(self):
        """Message constant 'FROM_022_5_TO_045_0_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_022_5_TO_045_0_DEGREES']

    @property
    def FROM_045_0_TO_067_5_DEGREES(self):
        """Message constant 'FROM_045_0_TO_067_5_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_045_0_TO_067_5_DEGREES']

    @property
    def FROM_067_5_TO_090_0_DEGREES(self):
        """Message constant 'FROM_067_5_TO_090_0_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_067_5_TO_090_0_DEGREES']

    @property
    def FROM_090_0_TO_112_5_DEGREES(self):
        """Message constant 'FROM_090_0_TO_112_5_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_090_0_TO_112_5_DEGREES']

    @property
    def FROM_112_5_TO_135_0_DEGREES(self):
        """Message constant 'FROM_112_5_TO_135_0_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_112_5_TO_135_0_DEGREES']

    @property
    def FROM_135_0_TO_157_5_DEGREES(self):
        """Message constant 'FROM_135_0_TO_157_5_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_135_0_TO_157_5_DEGREES']

    @property
    def FROM_157_5_TO_180_0_DEGREES(self):
        """Message constant 'FROM_157_5_TO_180_0_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_157_5_TO_180_0_DEGREES']

    @property
    def FROM_180_0_TO_202_5_DEGREES(self):
        """Message constant 'FROM_180_0_TO_202_5_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_180_0_TO_202_5_DEGREES']

    @property
    def FROM_202_5_TO_225_0_DEGREES(self):
        """Message constant 'FROM_202_5_TO_225_0_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_202_5_TO_225_0_DEGREES']

    @property
    def FROM_225_0_TO_247_5_DEGREES(self):
        """Message constant 'FROM_225_0_TO_247_5_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_225_0_TO_247_5_DEGREES']

    @property
    def FROM_247_5_TO_270_0_DEGREES(self):
        """Message constant 'FROM_247_5_TO_270_0_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_247_5_TO_270_0_DEGREES']

    @property
    def FROM_270_0_TO_292_5_DEGREES(self):
        """Message constant 'FROM_270_0_TO_292_5_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_270_0_TO_292_5_DEGREES']

    @property
    def FROM_292_5_TO_315_0_DEGREES(self):
        """Message constant 'FROM_292_5_TO_315_0_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_292_5_TO_315_0_DEGREES']

    @property
    def FROM_315_0_TO_337_5_DEGREES(self):
        """Message constant 'FROM_315_0_TO_337_5_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_315_0_TO_337_5_DEGREES']

    @property
    def FROM_337_5_TO_360_0_DEGREES(self):
        """Message constant 'FROM_337_5_TO_360_0_DEGREES'."""
        return Metaclass_HeadingSlice.__constants['FROM_337_5_TO_360_0_DEGREES']

    @property
    def ALL_HEADINGS(self):
        """Message constant 'ALL_HEADINGS'."""
        return Metaclass_HeadingSlice.__constants['ALL_HEADINGS']


class HeadingSlice(metaclass=Metaclass_HeadingSlice):
    """
    Message class 'HeadingSlice'.

    Constants:
      NO_HEADING
      FROM_000_0_TO_022_5_DEGREES
      FROM_022_5_TO_045_0_DEGREES
      FROM_045_0_TO_067_5_DEGREES
      FROM_067_5_TO_090_0_DEGREES
      FROM_090_0_TO_112_5_DEGREES
      FROM_112_5_TO_135_0_DEGREES
      FROM_135_0_TO_157_5_DEGREES
      FROM_157_5_TO_180_0_DEGREES
      FROM_180_0_TO_202_5_DEGREES
      FROM_202_5_TO_225_0_DEGREES
      FROM_225_0_TO_247_5_DEGREES
      FROM_247_5_TO_270_0_DEGREES
      FROM_270_0_TO_292_5_DEGREES
      FROM_292_5_TO_315_0_DEGREES
      FROM_315_0_TO_337_5_DEGREES
      FROM_337_5_TO_360_0_DEGREES
      ALL_HEADINGS
    """

    __slots__ = [
        '_heading_slice',
    ]

    _fields_and_field_types = {
        'heading_slice': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.heading_slice = kwargs.get('heading_slice', int())

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
        if self.heading_slice != other.heading_slice:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def heading_slice(self):
        """Message field 'heading_slice'."""
        return self._heading_slice

    @heading_slice.setter
    def heading_slice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading_slice' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'heading_slice' field must be an unsigned integer in [0, 65535]"
        self._heading_slice = value
