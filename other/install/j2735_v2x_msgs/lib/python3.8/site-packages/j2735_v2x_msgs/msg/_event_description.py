# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/EventDescription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EventDescription(type):
    """Metaclass of message 'EventDescription'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_PRIORITY': 1,
        'HAS_HEADING': 2,
        'HAS_EXTENT': 4,
        'HAS_DESCRIPTION': 8,
        'DESCRIPTION_SIZE_MIN': 1,
        'DESCRIPTION_SIZE_MAX': 8,
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
                'j2735_v2x_msgs.msg.EventDescription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__event_description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__event_description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__event_description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__event_description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__event_description

            from j2735_v2x_msgs.msg import Extent
            if Extent.__class__._TYPE_SUPPORT is None:
                Extent.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import HeadingSlice
            if HeadingSlice.__class__._TYPE_SUPPORT is None:
                HeadingSlice.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ITIScodes
            if ITIScodes.__class__._TYPE_SUPPORT is None:
                ITIScodes.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Priority
            if Priority.__class__._TYPE_SUPPORT is None:
                Priority.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_PRIORITY': cls.__constants['HAS_PRIORITY'],
            'HAS_HEADING': cls.__constants['HAS_HEADING'],
            'HAS_EXTENT': cls.__constants['HAS_EXTENT'],
            'HAS_DESCRIPTION': cls.__constants['HAS_DESCRIPTION'],
            'DESCRIPTION_SIZE_MIN': cls.__constants['DESCRIPTION_SIZE_MIN'],
            'DESCRIPTION_SIZE_MAX': cls.__constants['DESCRIPTION_SIZE_MAX'],
        }

    @property
    def HAS_PRIORITY(self):
        """Message constant 'HAS_PRIORITY'."""
        return Metaclass_EventDescription.__constants['HAS_PRIORITY']

    @property
    def HAS_HEADING(self):
        """Message constant 'HAS_HEADING'."""
        return Metaclass_EventDescription.__constants['HAS_HEADING']

    @property
    def HAS_EXTENT(self):
        """Message constant 'HAS_EXTENT'."""
        return Metaclass_EventDescription.__constants['HAS_EXTENT']

    @property
    def HAS_DESCRIPTION(self):
        """Message constant 'HAS_DESCRIPTION'."""
        return Metaclass_EventDescription.__constants['HAS_DESCRIPTION']

    @property
    def DESCRIPTION_SIZE_MIN(self):
        """Message constant 'DESCRIPTION_SIZE_MIN'."""
        return Metaclass_EventDescription.__constants['DESCRIPTION_SIZE_MIN']

    @property
    def DESCRIPTION_SIZE_MAX(self):
        """Message constant 'DESCRIPTION_SIZE_MAX'."""
        return Metaclass_EventDescription.__constants['DESCRIPTION_SIZE_MAX']


class EventDescription(metaclass=Metaclass_EventDescription):
    """
    Message class 'EventDescription'.

    Constants:
      HAS_PRIORITY
      HAS_HEADING
      HAS_EXTENT
      HAS_DESCRIPTION
      DESCRIPTION_SIZE_MIN
      DESCRIPTION_SIZE_MAX
    """

    __slots__ = [
        '_presence_vector',
        '_type_event',
        '_priority',
        '_heading',
        '_extent',
        '_description',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'type_event': 'j2735_v2x_msgs/ITIScodes',
        'priority': 'j2735_v2x_msgs/Priority',
        'heading': 'j2735_v2x_msgs/HeadingSlice',
        'extent': 'j2735_v2x_msgs/Extent',
        'description': 'sequence<j2735_v2x_msgs/ITIScodes>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITIScodes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Priority'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'HeadingSlice'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Extent'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITIScodes')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import ITIScodes
        self.type_event = kwargs.get('type_event', ITIScodes())
        from j2735_v2x_msgs.msg import Priority
        self.priority = kwargs.get('priority', Priority())
        from j2735_v2x_msgs.msg import HeadingSlice
        self.heading = kwargs.get('heading', HeadingSlice())
        from j2735_v2x_msgs.msg import Extent
        self.extent = kwargs.get('extent', Extent())
        self.description = kwargs.get('description', [])

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
        if self.type_event != other.type_event:
            return False
        if self.priority != other.priority:
            return False
        if self.heading != other.heading:
            return False
        if self.extent != other.extent:
            return False
        if self.description != other.description:
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
    def type_event(self):
        """Message field 'type_event'."""
        return self._type_event

    @type_event.setter
    def type_event(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITIScodes
            assert \
                isinstance(value, ITIScodes), \
                "The 'type_event' field must be a sub message of type 'ITIScodes'"
        self._type_event = value

    @property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Priority
            assert \
                isinstance(value, Priority), \
                "The 'priority' field must be a sub message of type 'Priority'"
        self._priority = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import HeadingSlice
            assert \
                isinstance(value, HeadingSlice), \
                "The 'heading' field must be a sub message of type 'HeadingSlice'"
        self._heading = value

    @property
    def extent(self):
        """Message field 'extent'."""
        return self._extent

    @extent.setter
    def extent(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Extent
            assert \
                isinstance(value, Extent), \
                "The 'extent' field must be a sub message of type 'Extent'"
        self._extent = value

    @property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITIScodes
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ITIScodes) for v in value) and
                 True), \
                "The 'description' field must be a set or sequence and each value of type 'ITIScodes'"
        self._description = value
