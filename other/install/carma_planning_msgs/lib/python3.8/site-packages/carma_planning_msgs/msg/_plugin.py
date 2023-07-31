# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/Plugin.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Plugin(type):
    """Metaclass of message 'Plugin'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'STRATEGIC': 1,
        'TACTICAL': 2,
        'CONTROL': 3,
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
                'carma_planning_msgs.msg.Plugin')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plugin
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plugin
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plugin
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plugin
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plugin

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'STRATEGIC': cls.__constants['STRATEGIC'],
            'TACTICAL': cls.__constants['TACTICAL'],
            'CONTROL': cls.__constants['CONTROL'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_Plugin.__constants['UNKNOWN']

    @property
    def STRATEGIC(self):
        """Message constant 'STRATEGIC'."""
        return Metaclass_Plugin.__constants['STRATEGIC']

    @property
    def TACTICAL(self):
        """Message constant 'TACTICAL'."""
        return Metaclass_Plugin.__constants['TACTICAL']

    @property
    def CONTROL(self):
        """Message constant 'CONTROL'."""
        return Metaclass_Plugin.__constants['CONTROL']


class Plugin(metaclass=Metaclass_Plugin):
    """
    Message class 'Plugin'.

    Constants:
      UNKNOWN
      STRATEGIC
      TACTICAL
      CONTROL
    """

    __slots__ = [
        '_name',
        '_version_id',
        '_type',
        '_available',
        '_activated',
        '_capability',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'version_id': 'string',
        'type': 'uint8',
        'available': 'boolean',
        'activated': 'boolean',
        'capability': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.version_id = kwargs.get('version_id', str())
        self.type = kwargs.get('type', int())
        self.available = kwargs.get('available', bool())
        self.activated = kwargs.get('activated', bool())
        self.capability = kwargs.get('capability', str())

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
        if self.version_id != other.version_id:
            return False
        if self.type != other.type:
            return False
        if self.available != other.available:
            return False
        if self.activated != other.activated:
            return False
        if self.capability != other.capability:
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
    def version_id(self):
        """Message field 'version_id'."""
        return self._version_id

    @version_id.setter
    def version_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'version_id' field must be of type 'str'"
        self._version_id = value

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
    def available(self):
        """Message field 'available'."""
        return self._available

    @available.setter
    def available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available' field must be of type 'bool'"
        self._available = value

    @property
    def activated(self):
        """Message field 'activated'."""
        return self._activated

    @activated.setter
    def activated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'activated' field must be of type 'bool'"
        self._activated = value

    @property
    def capability(self):
        """Message field 'capability'."""
        return self._capability

    @capability.setter
    def capability(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'capability' field must be of type 'str'"
        self._capability = value
