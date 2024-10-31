# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/RouteEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RouteEvent(type):
    """Metaclass of message 'RouteEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROUTE_LOADED': 0,
        'ROUTE_SELECTED': 1,
        'ROUTE_STARTED': 2,
        'ROUTE_COMPLETED': 3,
        'ROUTE_DEPARTED': 4,
        'ROUTE_ABORTED': 5,
        'ROUTE_GEN_FAILED': 6,
        'ROUTE_INVALIDATION': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_planning_msgs.msg.RouteEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__route_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__route_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__route_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__route_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__route_event

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROUTE_LOADED': cls.__constants['ROUTE_LOADED'],
            'ROUTE_SELECTED': cls.__constants['ROUTE_SELECTED'],
            'ROUTE_STARTED': cls.__constants['ROUTE_STARTED'],
            'ROUTE_COMPLETED': cls.__constants['ROUTE_COMPLETED'],
            'ROUTE_DEPARTED': cls.__constants['ROUTE_DEPARTED'],
            'ROUTE_ABORTED': cls.__constants['ROUTE_ABORTED'],
            'ROUTE_GEN_FAILED': cls.__constants['ROUTE_GEN_FAILED'],
            'ROUTE_INVALIDATION': cls.__constants['ROUTE_INVALIDATION'],
        }

    @property
    def ROUTE_LOADED(self):
        """Message constant 'ROUTE_LOADED'."""
        return Metaclass_RouteEvent.__constants['ROUTE_LOADED']

    @property
    def ROUTE_SELECTED(self):
        """Message constant 'ROUTE_SELECTED'."""
        return Metaclass_RouteEvent.__constants['ROUTE_SELECTED']

    @property
    def ROUTE_STARTED(self):
        """Message constant 'ROUTE_STARTED'."""
        return Metaclass_RouteEvent.__constants['ROUTE_STARTED']

    @property
    def ROUTE_COMPLETED(self):
        """Message constant 'ROUTE_COMPLETED'."""
        return Metaclass_RouteEvent.__constants['ROUTE_COMPLETED']

    @property
    def ROUTE_DEPARTED(self):
        """Message constant 'ROUTE_DEPARTED'."""
        return Metaclass_RouteEvent.__constants['ROUTE_DEPARTED']

    @property
    def ROUTE_ABORTED(self):
        """Message constant 'ROUTE_ABORTED'."""
        return Metaclass_RouteEvent.__constants['ROUTE_ABORTED']

    @property
    def ROUTE_GEN_FAILED(self):
        """Message constant 'ROUTE_GEN_FAILED'."""
        return Metaclass_RouteEvent.__constants['ROUTE_GEN_FAILED']

    @property
    def ROUTE_INVALIDATION(self):
        """Message constant 'ROUTE_INVALIDATION'."""
        return Metaclass_RouteEvent.__constants['ROUTE_INVALIDATION']


class RouteEvent(metaclass=Metaclass_RouteEvent):
    """
    Message class 'RouteEvent'.

    Constants:
      ROUTE_LOADED
      ROUTE_SELECTED
      ROUTE_STARTED
      ROUTE_COMPLETED
      ROUTE_DEPARTED
      ROUTE_ABORTED
      ROUTE_GEN_FAILED
      ROUTE_INVALIDATION
    """

    __slots__ = [
        '_header',
        '_event',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'event': 'uint8',
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
        self.event = kwargs.get('event', int())

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
        if self.event != other.event:
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
    def event(self):
        """Message field 'event'."""
        return self._event

    @event.setter
    def event(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'event' field must be an unsigned integer in [0, 255]"
        self._event = value
