# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConnectionManeuverAssist(type):
    """Metaclass of message 'ConnectionManeuverAssist'."""

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
                'j2735_v2x_msgs.msg.ConnectionManeuverAssist')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__connection_maneuver_assist
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__connection_maneuver_assist
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__connection_maneuver_assist
            cls._TYPE_SUPPORT = module.type_support_msg__msg__connection_maneuver_assist
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__connection_maneuver_assist

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConnectionManeuverAssist(metaclass=Metaclass_ConnectionManeuverAssist):
    """Message class 'ConnectionManeuverAssist'."""

    __slots__ = [
        '_connection_id',
        '_queue_length',
        '_queue_length_exists',
        '_available_storage_length',
        '_available_storage_length_exists',
        '_wait_on_stop',
        '_wait_on_stop_exists',
        '_ped_bicycle_detect',
        '_ped_bicycle_detect_exists',
    ]

    _fields_and_field_types = {
        'connection_id': 'uint8',
        'queue_length': 'uint16',
        'queue_length_exists': 'boolean',
        'available_storage_length': 'uint16',
        'available_storage_length_exists': 'boolean',
        'wait_on_stop': 'boolean',
        'wait_on_stop_exists': 'boolean',
        'ped_bicycle_detect': 'boolean',
        'ped_bicycle_detect_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.connection_id = kwargs.get('connection_id', int())
        self.queue_length = kwargs.get('queue_length', int())
        self.queue_length_exists = kwargs.get('queue_length_exists', bool())
        self.available_storage_length = kwargs.get('available_storage_length', int())
        self.available_storage_length_exists = kwargs.get('available_storage_length_exists', bool())
        self.wait_on_stop = kwargs.get('wait_on_stop', bool())
        self.wait_on_stop_exists = kwargs.get('wait_on_stop_exists', bool())
        self.ped_bicycle_detect = kwargs.get('ped_bicycle_detect', bool())
        self.ped_bicycle_detect_exists = kwargs.get('ped_bicycle_detect_exists', bool())

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
        if self.connection_id != other.connection_id:
            return False
        if self.queue_length != other.queue_length:
            return False
        if self.queue_length_exists != other.queue_length_exists:
            return False
        if self.available_storage_length != other.available_storage_length:
            return False
        if self.available_storage_length_exists != other.available_storage_length_exists:
            return False
        if self.wait_on_stop != other.wait_on_stop:
            return False
        if self.wait_on_stop_exists != other.wait_on_stop_exists:
            return False
        if self.ped_bicycle_detect != other.ped_bicycle_detect:
            return False
        if self.ped_bicycle_detect_exists != other.ped_bicycle_detect_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def connection_id(self):
        """Message field 'connection_id'."""
        return self._connection_id

    @connection_id.setter
    def connection_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'connection_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'connection_id' field must be an unsigned integer in [0, 255]"
        self._connection_id = value

    @property
    def queue_length(self):
        """Message field 'queue_length'."""
        return self._queue_length

    @queue_length.setter
    def queue_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'queue_length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'queue_length' field must be an unsigned integer in [0, 65535]"
        self._queue_length = value

    @property
    def queue_length_exists(self):
        """Message field 'queue_length_exists'."""
        return self._queue_length_exists

    @queue_length_exists.setter
    def queue_length_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'queue_length_exists' field must be of type 'bool'"
        self._queue_length_exists = value

    @property
    def available_storage_length(self):
        """Message field 'available_storage_length'."""
        return self._available_storage_length

    @available_storage_length.setter
    def available_storage_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'available_storage_length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'available_storage_length' field must be an unsigned integer in [0, 65535]"
        self._available_storage_length = value

    @property
    def available_storage_length_exists(self):
        """Message field 'available_storage_length_exists'."""
        return self._available_storage_length_exists

    @available_storage_length_exists.setter
    def available_storage_length_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'available_storage_length_exists' field must be of type 'bool'"
        self._available_storage_length_exists = value

    @property
    def wait_on_stop(self):
        """Message field 'wait_on_stop'."""
        return self._wait_on_stop

    @wait_on_stop.setter
    def wait_on_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wait_on_stop' field must be of type 'bool'"
        self._wait_on_stop = value

    @property
    def wait_on_stop_exists(self):
        """Message field 'wait_on_stop_exists'."""
        return self._wait_on_stop_exists

    @wait_on_stop_exists.setter
    def wait_on_stop_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wait_on_stop_exists' field must be of type 'bool'"
        self._wait_on_stop_exists = value

    @property
    def ped_bicycle_detect(self):
        """Message field 'ped_bicycle_detect'."""
        return self._ped_bicycle_detect

    @ped_bicycle_detect.setter
    def ped_bicycle_detect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ped_bicycle_detect' field must be of type 'bool'"
        self._ped_bicycle_detect = value

    @property
    def ped_bicycle_detect_exists(self):
        """Message field 'ped_bicycle_detect_exists'."""
        return self._ped_bicycle_detect_exists

    @ped_bicycle_detect_exists.setter
    def ped_bicycle_detect_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ped_bicycle_detect_exists' field must be of type 'bool'"
        self._ped_bicycle_detect_exists = value
