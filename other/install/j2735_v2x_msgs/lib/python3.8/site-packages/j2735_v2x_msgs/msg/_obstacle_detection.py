# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ObstacleDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleDetection(type):
    """Metaclass of message 'ObstacleDetection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_DESCRIPTION': 1,
        'HAS_LOCATION_DETAILS': 2,
        'HAS_VERT_EVENT': 4,
        'DESCRIPTION_MIN': 523,
        'DESCRIPTION_MAX': 541,
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
                'j2735_v2x_msgs.msg.ObstacleDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_detection

            from j2735_v2x_msgs.msg import DDateTime
            if DDateTime.__class__._TYPE_SUPPORT is None:
                DDateTime.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ITISGenericLocations
            if ITISGenericLocations.__class__._TYPE_SUPPORT is None:
                ITISGenericLocations.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ITIScodes
            if ITIScodes.__class__._TYPE_SUPPORT is None:
                ITIScodes.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ObstacleDirection
            if ObstacleDirection.__class__._TYPE_SUPPORT is None:
                ObstacleDirection.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ObstacleDistance
            if ObstacleDistance.__class__._TYPE_SUPPORT is None:
                ObstacleDistance.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VerticalAccelerationThreshold
            if VerticalAccelerationThreshold.__class__._TYPE_SUPPORT is None:
                VerticalAccelerationThreshold.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_DESCRIPTION': cls.__constants['HAS_DESCRIPTION'],
            'HAS_LOCATION_DETAILS': cls.__constants['HAS_LOCATION_DETAILS'],
            'HAS_VERT_EVENT': cls.__constants['HAS_VERT_EVENT'],
            'DESCRIPTION_MIN': cls.__constants['DESCRIPTION_MIN'],
            'DESCRIPTION_MAX': cls.__constants['DESCRIPTION_MAX'],
        }

    @property
    def HAS_DESCRIPTION(self):
        """Message constant 'HAS_DESCRIPTION'."""
        return Metaclass_ObstacleDetection.__constants['HAS_DESCRIPTION']

    @property
    def HAS_LOCATION_DETAILS(self):
        """Message constant 'HAS_LOCATION_DETAILS'."""
        return Metaclass_ObstacleDetection.__constants['HAS_LOCATION_DETAILS']

    @property
    def HAS_VERT_EVENT(self):
        """Message constant 'HAS_VERT_EVENT'."""
        return Metaclass_ObstacleDetection.__constants['HAS_VERT_EVENT']

    @property
    def DESCRIPTION_MIN(self):
        """Message constant 'DESCRIPTION_MIN'."""
        return Metaclass_ObstacleDetection.__constants['DESCRIPTION_MIN']

    @property
    def DESCRIPTION_MAX(self):
        """Message constant 'DESCRIPTION_MAX'."""
        return Metaclass_ObstacleDetection.__constants['DESCRIPTION_MAX']


class ObstacleDetection(metaclass=Metaclass_ObstacleDetection):
    """
    Message class 'ObstacleDetection'.

    Constants:
      HAS_DESCRIPTION
      HAS_LOCATION_DETAILS
      HAS_VERT_EVENT
      DESCRIPTION_MIN
      DESCRIPTION_MAX
    """

    __slots__ = [
        '_presence_vector',
        '_ob_dist',
        '_ob_direct',
        '_date_time',
        '_description',
        '_location_details',
        '_vert_event',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'ob_dist': 'j2735_v2x_msgs/ObstacleDistance',
        'ob_direct': 'j2735_v2x_msgs/ObstacleDirection',
        'date_time': 'j2735_v2x_msgs/DDateTime',
        'description': 'j2735_v2x_msgs/ITIScodes',
        'location_details': 'j2735_v2x_msgs/ITISGenericLocations',
        'vert_event': 'j2735_v2x_msgs/VerticalAccelerationThreshold',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ObstacleDistance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ObstacleDirection'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DDateTime'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITIScodes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITISGenericLocations'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VerticalAccelerationThreshold'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import ObstacleDistance
        self.ob_dist = kwargs.get('ob_dist', ObstacleDistance())
        from j2735_v2x_msgs.msg import ObstacleDirection
        self.ob_direct = kwargs.get('ob_direct', ObstacleDirection())
        from j2735_v2x_msgs.msg import DDateTime
        self.date_time = kwargs.get('date_time', DDateTime())
        from j2735_v2x_msgs.msg import ITIScodes
        self.description = kwargs.get('description', ITIScodes())
        from j2735_v2x_msgs.msg import ITISGenericLocations
        self.location_details = kwargs.get('location_details', ITISGenericLocations())
        from j2735_v2x_msgs.msg import VerticalAccelerationThreshold
        self.vert_event = kwargs.get('vert_event', VerticalAccelerationThreshold())

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
        if self.ob_dist != other.ob_dist:
            return False
        if self.ob_direct != other.ob_direct:
            return False
        if self.date_time != other.date_time:
            return False
        if self.description != other.description:
            return False
        if self.location_details != other.location_details:
            return False
        if self.vert_event != other.vert_event:
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
    def ob_dist(self):
        """Message field 'ob_dist'."""
        return self._ob_dist

    @ob_dist.setter
    def ob_dist(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ObstacleDistance
            assert \
                isinstance(value, ObstacleDistance), \
                "The 'ob_dist' field must be a sub message of type 'ObstacleDistance'"
        self._ob_dist = value

    @property
    def ob_direct(self):
        """Message field 'ob_direct'."""
        return self._ob_direct

    @ob_direct.setter
    def ob_direct(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ObstacleDirection
            assert \
                isinstance(value, ObstacleDirection), \
                "The 'ob_direct' field must be a sub message of type 'ObstacleDirection'"
        self._ob_direct = value

    @property
    def date_time(self):
        """Message field 'date_time'."""
        return self._date_time

    @date_time.setter
    def date_time(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DDateTime
            assert \
                isinstance(value, DDateTime), \
                "The 'date_time' field must be a sub message of type 'DDateTime'"
        self._date_time = value

    @property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITIScodes
            assert \
                isinstance(value, ITIScodes), \
                "The 'description' field must be a sub message of type 'ITIScodes'"
        self._description = value

    @property
    def location_details(self):
        """Message field 'location_details'."""
        return self._location_details

    @location_details.setter
    def location_details(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITISGenericLocations
            assert \
                isinstance(value, ITISGenericLocations), \
                "The 'location_details' field must be a sub message of type 'ITISGenericLocations'"
        self._location_details = value

    @property
    def vert_event(self):
        """Message field 'vert_event'."""
        return self._vert_event

    @vert_event.setter
    def vert_event(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VerticalAccelerationThreshold
            assert \
                isinstance(value, VerticalAccelerationThreshold), \
                "The 'vert_event' field must be a sub message of type 'VerticalAccelerationThreshold'"
        self._vert_event = value
