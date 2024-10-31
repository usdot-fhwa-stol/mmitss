# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/DataParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DataParameters(type):
    """Metaclass of message 'DataParameters'."""

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
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.DataParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__data_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__data_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__data_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__data_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__data_parameters

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DataParameters(metaclass=Metaclass_DataParameters):
    """Message class 'DataParameters'."""

    __slots__ = [
        '_process_method',
        '_process_agency',
        '_last_checked_date',
        '_geoid_used',
    ]

    _fields_and_field_types = {
        'process_method': 'string',
        'process_agency': 'string',
        'last_checked_date': 'string',
        'geoid_used': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.process_method = kwargs.get('process_method', str())
        self.process_agency = kwargs.get('process_agency', str())
        self.last_checked_date = kwargs.get('last_checked_date', str())
        self.geoid_used = kwargs.get('geoid_used', str())

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
        if self.process_method != other.process_method:
            return False
        if self.process_agency != other.process_agency:
            return False
        if self.last_checked_date != other.last_checked_date:
            return False
        if self.geoid_used != other.geoid_used:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def process_method(self):
        """Message field 'process_method'."""
        return self._process_method

    @process_method.setter
    def process_method(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'process_method' field must be of type 'str'"
        self._process_method = value

    @property
    def process_agency(self):
        """Message field 'process_agency'."""
        return self._process_agency

    @process_agency.setter
    def process_agency(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'process_agency' field must be of type 'str'"
        self._process_agency = value

    @property
    def last_checked_date(self):
        """Message field 'last_checked_date'."""
        return self._last_checked_date

    @last_checked_date.setter
    def last_checked_date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'last_checked_date' field must be of type 'str'"
        self._last_checked_date = value

    @property
    def geoid_used(self):
        """Message field 'geoid_used'."""
        return self._geoid_used

    @geoid_used.setter
    def geoid_used(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'geoid_used' field must be of type 'str'"
        self._geoid_used = value
