# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/Connection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Connection(type):
    """Metaclass of message 'Connection'."""

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
                'j2735_v2x_msgs.msg.Connection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__connection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__connection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__connection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__connection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__connection

            from j2735_v2x_msgs.msg import ConnectingLane
            if ConnectingLane.__class__._TYPE_SUPPORT is None:
                ConnectingLane.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import IntersectionReferenceID
            if IntersectionReferenceID.__class__._TYPE_SUPPORT is None:
                IntersectionReferenceID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Connection(metaclass=Metaclass_Connection):
    """Message class 'Connection'."""

    __slots__ = [
        '_connecting_lane',
        '_remote_intersection',
        '_remote_intersection_exists',
        '_signal_group',
        '_signal_group_exists',
        '_user_class',
        '_user_class_exists',
        '_connection_id',
        '_connection_id_exists',
    ]

    _fields_and_field_types = {
        'connecting_lane': 'j2735_v2x_msgs/ConnectingLane',
        'remote_intersection': 'j2735_v2x_msgs/IntersectionReferenceID',
        'remote_intersection_exists': 'boolean',
        'signal_group': 'uint8',
        'signal_group_exists': 'boolean',
        'user_class': 'uint8',
        'user_class_exists': 'boolean',
        'connection_id': 'uint8',
        'connection_id_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ConnectingLane'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'IntersectionReferenceID'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import ConnectingLane
        self.connecting_lane = kwargs.get('connecting_lane', ConnectingLane())
        from j2735_v2x_msgs.msg import IntersectionReferenceID
        self.remote_intersection = kwargs.get('remote_intersection', IntersectionReferenceID())
        self.remote_intersection_exists = kwargs.get('remote_intersection_exists', bool())
        self.signal_group = kwargs.get('signal_group', int())
        self.signal_group_exists = kwargs.get('signal_group_exists', bool())
        self.user_class = kwargs.get('user_class', int())
        self.user_class_exists = kwargs.get('user_class_exists', bool())
        self.connection_id = kwargs.get('connection_id', int())
        self.connection_id_exists = kwargs.get('connection_id_exists', bool())

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
        if self.connecting_lane != other.connecting_lane:
            return False
        if self.remote_intersection != other.remote_intersection:
            return False
        if self.remote_intersection_exists != other.remote_intersection_exists:
            return False
        if self.signal_group != other.signal_group:
            return False
        if self.signal_group_exists != other.signal_group_exists:
            return False
        if self.user_class != other.user_class:
            return False
        if self.user_class_exists != other.user_class_exists:
            return False
        if self.connection_id != other.connection_id:
            return False
        if self.connection_id_exists != other.connection_id_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def connecting_lane(self):
        """Message field 'connecting_lane'."""
        return self._connecting_lane

    @connecting_lane.setter
    def connecting_lane(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ConnectingLane
            assert \
                isinstance(value, ConnectingLane), \
                "The 'connecting_lane' field must be a sub message of type 'ConnectingLane'"
        self._connecting_lane = value

    @property
    def remote_intersection(self):
        """Message field 'remote_intersection'."""
        return self._remote_intersection

    @remote_intersection.setter
    def remote_intersection(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import IntersectionReferenceID
            assert \
                isinstance(value, IntersectionReferenceID), \
                "The 'remote_intersection' field must be a sub message of type 'IntersectionReferenceID'"
        self._remote_intersection = value

    @property
    def remote_intersection_exists(self):
        """Message field 'remote_intersection_exists'."""
        return self._remote_intersection_exists

    @remote_intersection_exists.setter
    def remote_intersection_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'remote_intersection_exists' field must be of type 'bool'"
        self._remote_intersection_exists = value

    @property
    def signal_group(self):
        """Message field 'signal_group'."""
        return self._signal_group

    @signal_group.setter
    def signal_group(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_group' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signal_group' field must be an unsigned integer in [0, 255]"
        self._signal_group = value

    @property
    def signal_group_exists(self):
        """Message field 'signal_group_exists'."""
        return self._signal_group_exists

    @signal_group_exists.setter
    def signal_group_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'signal_group_exists' field must be of type 'bool'"
        self._signal_group_exists = value

    @property
    def user_class(self):
        """Message field 'user_class'."""
        return self._user_class

    @user_class.setter
    def user_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'user_class' field must be an unsigned integer in [0, 255]"
        self._user_class = value

    @property
    def user_class_exists(self):
        """Message field 'user_class_exists'."""
        return self._user_class_exists

    @user_class_exists.setter
    def user_class_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user_class_exists' field must be of type 'bool'"
        self._user_class_exists = value

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
    def connection_id_exists(self):
        """Message field 'connection_id_exists'."""
        return self._connection_id_exists

    @connection_id_exists.setter
    def connection_id_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connection_id_exists' field must be of type 'bool'"
        self._connection_id_exists = value
