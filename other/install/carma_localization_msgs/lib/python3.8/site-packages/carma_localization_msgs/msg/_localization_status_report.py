# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_localization_msgs:msg/LocalizationStatusReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalizationStatusReport(type):
    """Metaclass of message 'LocalizationStatusReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNINITIALIZED': 0,
        'INITIALIZING': 1,
        'OPERATIONAL': 2,
        'DEGRADED': 3,
        'DEGRADED_NO_LIDAR_FIX': 4,
        'AWAIT_MANUAL_INITIALIZATION': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_localization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_localization_msgs.msg.LocalizationStatusReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__localization_status_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__localization_status_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__localization_status_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__localization_status_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__localization_status_report

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNINITIALIZED': cls.__constants['UNINITIALIZED'],
            'INITIALIZING': cls.__constants['INITIALIZING'],
            'OPERATIONAL': cls.__constants['OPERATIONAL'],
            'DEGRADED': cls.__constants['DEGRADED'],
            'DEGRADED_NO_LIDAR_FIX': cls.__constants['DEGRADED_NO_LIDAR_FIX'],
            'AWAIT_MANUAL_INITIALIZATION': cls.__constants['AWAIT_MANUAL_INITIALIZATION'],
        }

    @property
    def UNINITIALIZED(self):
        """Message constant 'UNINITIALIZED'."""
        return Metaclass_LocalizationStatusReport.__constants['UNINITIALIZED']

    @property
    def INITIALIZING(self):
        """Message constant 'INITIALIZING'."""
        return Metaclass_LocalizationStatusReport.__constants['INITIALIZING']

    @property
    def OPERATIONAL(self):
        """Message constant 'OPERATIONAL'."""
        return Metaclass_LocalizationStatusReport.__constants['OPERATIONAL']

    @property
    def DEGRADED(self):
        """Message constant 'DEGRADED'."""
        return Metaclass_LocalizationStatusReport.__constants['DEGRADED']

    @property
    def DEGRADED_NO_LIDAR_FIX(self):
        """Message constant 'DEGRADED_NO_LIDAR_FIX'."""
        return Metaclass_LocalizationStatusReport.__constants['DEGRADED_NO_LIDAR_FIX']

    @property
    def AWAIT_MANUAL_INITIALIZATION(self):
        """Message constant 'AWAIT_MANUAL_INITIALIZATION'."""
        return Metaclass_LocalizationStatusReport.__constants['AWAIT_MANUAL_INITIALIZATION']


class LocalizationStatusReport(metaclass=Metaclass_LocalizationStatusReport):
    """
    Message class 'LocalizationStatusReport'.

    Constants:
      UNINITIALIZED
      INITIALIZING
      OPERATIONAL
      DEGRADED
      DEGRADED_NO_LIDAR_FIX
      AWAIT_MANUAL_INITIALIZATION
    """

    __slots__ = [
        '_header',
        '_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.status = kwargs.get('status', int())

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
        if self.header != other.header:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
