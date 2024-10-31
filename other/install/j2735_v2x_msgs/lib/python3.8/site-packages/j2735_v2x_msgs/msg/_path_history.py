# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PathHistory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathHistory(type):
    """Metaclass of message 'PathHistory'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_CURR_GNSS_STATUS': 1,
        'HAS_INITIAL_POSITION': 2,
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
                'j2735_v2x_msgs.msg.PathHistory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_history
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_history
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_history
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_history
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_history

            from j2735_v2x_msgs.msg import FullPositionVector
            if FullPositionVector.__class__._TYPE_SUPPORT is None:
                FullPositionVector.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import GNSSStatus
            if GNSSStatus.__class__._TYPE_SUPPORT is None:
                GNSSStatus.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PathHistoryPointList
            if PathHistoryPointList.__class__._TYPE_SUPPORT is None:
                PathHistoryPointList.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_CURR_GNSS_STATUS': cls.__constants['HAS_CURR_GNSS_STATUS'],
            'HAS_INITIAL_POSITION': cls.__constants['HAS_INITIAL_POSITION'],
        }

    @property
    def HAS_CURR_GNSS_STATUS(self):
        """Message constant 'HAS_CURR_GNSS_STATUS'."""
        return Metaclass_PathHistory.__constants['HAS_CURR_GNSS_STATUS']

    @property
    def HAS_INITIAL_POSITION(self):
        """Message constant 'HAS_INITIAL_POSITION'."""
        return Metaclass_PathHistory.__constants['HAS_INITIAL_POSITION']


class PathHistory(metaclass=Metaclass_PathHistory):
    """
    Message class 'PathHistory'.

    Constants:
      HAS_CURR_GNSS_STATUS
      HAS_INITIAL_POSITION
    """

    __slots__ = [
        '_presence_vector',
        '_crumb_data',
        '_initial_position',
        '_curr_gnss_status',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint8',
        'crumb_data': 'j2735_v2x_msgs/PathHistoryPointList',
        'initial_position': 'j2735_v2x_msgs/FullPositionVector',
        'curr_gnss_status': 'j2735_v2x_msgs/GNSSStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PathHistoryPointList'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'FullPositionVector'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'GNSSStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import PathHistoryPointList
        self.crumb_data = kwargs.get('crumb_data', PathHistoryPointList())
        from j2735_v2x_msgs.msg import FullPositionVector
        self.initial_position = kwargs.get('initial_position', FullPositionVector())
        from j2735_v2x_msgs.msg import GNSSStatus
        self.curr_gnss_status = kwargs.get('curr_gnss_status', GNSSStatus())

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
        if self.crumb_data != other.crumb_data:
            return False
        if self.initial_position != other.initial_position:
            return False
        if self.curr_gnss_status != other.curr_gnss_status:
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
            assert value >= 0 and value < 256, \
                "The 'presence_vector' field must be an unsigned integer in [0, 255]"
        self._presence_vector = value

    @property
    def crumb_data(self):
        """Message field 'crumb_data'."""
        return self._crumb_data

    @crumb_data.setter
    def crumb_data(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PathHistoryPointList
            assert \
                isinstance(value, PathHistoryPointList), \
                "The 'crumb_data' field must be a sub message of type 'PathHistoryPointList'"
        self._crumb_data = value

    @property
    def initial_position(self):
        """Message field 'initial_position'."""
        return self._initial_position

    @initial_position.setter
    def initial_position(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import FullPositionVector
            assert \
                isinstance(value, FullPositionVector), \
                "The 'initial_position' field must be a sub message of type 'FullPositionVector'"
        self._initial_position = value

    @property
    def curr_gnss_status(self):
        """Message field 'curr_gnss_status'."""
        return self._curr_gnss_status

    @curr_gnss_status.setter
    def curr_gnss_status(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import GNSSStatus
            assert \
                isinstance(value, GNSSStatus), \
                "The 'curr_gnss_status' field must be a sub message of type 'GNSSStatus'"
        self._curr_gnss_status = value
