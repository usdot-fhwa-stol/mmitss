# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_msgs:msg/SystemAlert.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemAlert(type):
    """Metaclass of message 'SystemAlert'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CAUTION': 1,
        'WARNING': 2,
        'FATAL': 3,
        'NOT_READY': 4,
        'DRIVERS_READY': 5,
        'SHUTDOWN': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.msg.SystemAlert')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_alert
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_alert
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_alert
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_alert
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_alert

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CAUTION': cls.__constants['CAUTION'],
            'WARNING': cls.__constants['WARNING'],
            'FATAL': cls.__constants['FATAL'],
            'NOT_READY': cls.__constants['NOT_READY'],
            'DRIVERS_READY': cls.__constants['DRIVERS_READY'],
            'SHUTDOWN': cls.__constants['SHUTDOWN'],
        }

    @property
    def CAUTION(self):
        """Message constant 'CAUTION'."""
        return Metaclass_SystemAlert.__constants['CAUTION']

    @property
    def WARNING(self):
        """Message constant 'WARNING'."""
        return Metaclass_SystemAlert.__constants['WARNING']

    @property
    def FATAL(self):
        """Message constant 'FATAL'."""
        return Metaclass_SystemAlert.__constants['FATAL']

    @property
    def NOT_READY(self):
        """Message constant 'NOT_READY'."""
        return Metaclass_SystemAlert.__constants['NOT_READY']

    @property
    def DRIVERS_READY(self):
        """Message constant 'DRIVERS_READY'."""
        return Metaclass_SystemAlert.__constants['DRIVERS_READY']

    @property
    def SHUTDOWN(self):
        """Message constant 'SHUTDOWN'."""
        return Metaclass_SystemAlert.__constants['SHUTDOWN']


class SystemAlert(metaclass=Metaclass_SystemAlert):
    """
    Message class 'SystemAlert'.

    Constants:
      CAUTION
      WARNING
      FATAL
      NOT_READY
      DRIVERS_READY
      SHUTDOWN
    """

    __slots__ = [
        '_type',
        '_description',
        '_source_node',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'description': 'string',
        'source_node': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.description = kwargs.get('description', str())
        self.source_node = kwargs.get('source_node', str())

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
        if self.type != other.type:
            return False
        if self.description != other.description:
            return False
        if self.source_node != other.source_node:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @property
    def source_node(self):
        """Message field 'source_node'."""
        return self._source_node

    @source_node.setter
    def source_node(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'source_node' field must be of type 'str'"
        self._source_node = value
