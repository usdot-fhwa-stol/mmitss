# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/WiperSet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WiperSet(type):
    """Metaclass of message 'WiperSet'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_STATUS_REAR': 1,
        'HAS_RATE_REAR': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.WiperSet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wiper_set
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wiper_set
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wiper_set
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wiper_set
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wiper_set

            from carma_v2x_msgs.msg import WiperRate
            if WiperRate.__class__._TYPE_SUPPORT is None:
                WiperRate.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import WiperStatus
            if WiperStatus.__class__._TYPE_SUPPORT is None:
                WiperStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_STATUS_REAR': cls.__constants['HAS_STATUS_REAR'],
            'HAS_RATE_REAR': cls.__constants['HAS_RATE_REAR'],
        }

    @property
    def HAS_STATUS_REAR(self):
        """Message constant 'HAS_STATUS_REAR'."""
        return Metaclass_WiperSet.__constants['HAS_STATUS_REAR']

    @property
    def HAS_RATE_REAR(self):
        """Message constant 'HAS_RATE_REAR'."""
        return Metaclass_WiperSet.__constants['HAS_RATE_REAR']


class WiperSet(metaclass=Metaclass_WiperSet):
    """
    Message class 'WiperSet'.

    Constants:
      HAS_STATUS_REAR
      HAS_RATE_REAR
    """

    __slots__ = [
        '_presence_vector',
        '_status_front',
        '_rate_front',
        '_status_rear',
        '_rate_rear',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'status_front': 'j2735_v2x_msgs/WiperStatus',
        'rate_front': 'carma_v2x_msgs/WiperRate',
        'status_rear': 'j2735_v2x_msgs/WiperStatus',
        'rate_rear': 'carma_v2x_msgs/WiperRate',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'WiperStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'WiperRate'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'WiperStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'WiperRate'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import WiperStatus
        self.status_front = kwargs.get('status_front', WiperStatus())
        from carma_v2x_msgs.msg import WiperRate
        self.rate_front = kwargs.get('rate_front', WiperRate())
        from j2735_v2x_msgs.msg import WiperStatus
        self.status_rear = kwargs.get('status_rear', WiperStatus())
        from carma_v2x_msgs.msg import WiperRate
        self.rate_rear = kwargs.get('rate_rear', WiperRate())

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
        if self.presence_vector != other.presence_vector:
            return False
        if self.status_front != other.status_front:
            return False
        if self.rate_front != other.rate_front:
            return False
        if self.status_rear != other.status_rear:
            return False
        if self.rate_rear != other.rate_rear:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def presence_vector(self):
        """Message field 'presence_vector'."""
        return self._presence_vector

    @presence_vector.setter
    def presence_vector(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'presence_vector' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'presence_vector' field must be an unsigned integer in [0, 65535]"
        self._presence_vector = value

    @property
    def status_front(self):
        """Message field 'status_front'."""
        return self._status_front

    @status_front.setter
    def status_front(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import WiperStatus
            assert \
                isinstance(value, WiperStatus), \
                "The 'status_front' field must be a sub message of type 'WiperStatus'"
        self._status_front = value

    @property
    def rate_front(self):
        """Message field 'rate_front'."""
        return self._rate_front

    @rate_front.setter
    def rate_front(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import WiperRate
            assert \
                isinstance(value, WiperRate), \
                "The 'rate_front' field must be a sub message of type 'WiperRate'"
        self._rate_front = value

    @property
    def status_rear(self):
        """Message field 'status_rear'."""
        return self._status_rear

    @status_rear.setter
    def status_rear(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import WiperStatus
            assert \
                isinstance(value, WiperStatus), \
                "The 'status_rear' field must be a sub message of type 'WiperStatus'"
        self._status_rear = value

    @property
    def rate_rear(self):
        """Message field 'rate_rear'."""
        return self._rate_rear

    @rate_rear.setter
    def rate_rear(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import WiperRate
            assert \
                isinstance(value, WiperRate), \
                "The 'rate_rear' field must be a sub message of type 'WiperRate'"
        self._rate_rear = value
