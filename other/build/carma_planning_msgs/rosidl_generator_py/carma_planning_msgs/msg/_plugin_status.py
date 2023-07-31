# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/PluginStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PluginStatus(type):
    """Metaclass of message 'PluginStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DISABLED': 0,
        'ENABLED': 1,
        'AVAILABLE': 2,
        'FAULT': 3,
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
                'carma_planning_msgs.msg.PluginStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plugin_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plugin_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plugin_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plugin_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plugin_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DISABLED': cls.__constants['DISABLED'],
            'ENABLED': cls.__constants['ENABLED'],
            'AVAILABLE': cls.__constants['AVAILABLE'],
            'FAULT': cls.__constants['FAULT'],
        }

    @property
    def DISABLED(self):
        """Message constant 'DISABLED'."""
        return Metaclass_PluginStatus.__constants['DISABLED']

    @property
    def ENABLED(self):
        """Message constant 'ENABLED'."""
        return Metaclass_PluginStatus.__constants['ENABLED']

    @property
    def AVAILABLE(self):
        """Message constant 'AVAILABLE'."""
        return Metaclass_PluginStatus.__constants['AVAILABLE']

    @property
    def FAULT(self):
        """Message constant 'FAULT'."""
        return Metaclass_PluginStatus.__constants['FAULT']


class PluginStatus(metaclass=Metaclass_PluginStatus):
    """
    Message class 'PluginStatus'.

    Constants:
      DISABLED
      ENABLED
      AVAILABLE
      FAULT
    """

    __slots__ = [
        '_name',
        '_status',
        '_is_strategic_plugin',
        '_is_tactical_plugin',
        '_is_control_plugin',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'status': 'uint8',
        'is_strategic_plugin': 'boolean',
        'is_tactical_plugin': 'boolean',
        'is_control_plugin': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.status = kwargs.get('status', int())
        self.is_strategic_plugin = kwargs.get('is_strategic_plugin', bool())
        self.is_tactical_plugin = kwargs.get('is_tactical_plugin', bool())
        self.is_control_plugin = kwargs.get('is_control_plugin', bool())

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
        if self.name != other.name:
            return False
        if self.status != other.status:
            return False
        if self.is_strategic_plugin != other.is_strategic_plugin:
            return False
        if self.is_tactical_plugin != other.is_tactical_plugin:
            return False
        if self.is_control_plugin != other.is_control_plugin:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

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

    @property
    def is_strategic_plugin(self):
        """Message field 'is_strategic_plugin'."""
        return self._is_strategic_plugin

    @is_strategic_plugin.setter
    def is_strategic_plugin(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_strategic_plugin' field must be of type 'bool'"
        self._is_strategic_plugin = value

    @property
    def is_tactical_plugin(self):
        """Message field 'is_tactical_plugin'."""
        return self._is_tactical_plugin

    @is_tactical_plugin.setter
    def is_tactical_plugin(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_tactical_plugin' field must be of type 'bool'"
        self._is_tactical_plugin = value

    @property
    def is_control_plugin(self):
        """Message field 'is_control_plugin'."""
        return self._is_control_plugin

    @is_control_plugin.setter
    def is_control_plugin(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_control_plugin' field must be of type 'bool'"
        self._is_control_plugin = value
