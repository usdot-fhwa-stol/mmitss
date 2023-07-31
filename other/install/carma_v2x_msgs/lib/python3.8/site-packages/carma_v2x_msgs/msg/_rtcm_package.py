# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/RTCMPackage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'messages'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RTCMPackage(type):
    """Metaclass of message 'RTCMPackage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_RTCM_HEADER': 1,
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
                'carma_v2x_msgs.msg.RTCMPackage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtcm_package
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtcm_package
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtcm_package
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtcm_package
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtcm_package

            from carma_v2x_msgs.msg import RTCMHeader
            if RTCMHeader.__class__._TYPE_SUPPORT is None:
                RTCMHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_RTCM_HEADER': cls.__constants['HAS_RTCM_HEADER'],
        }

    @property
    def HAS_RTCM_HEADER(self):
        """Message constant 'HAS_RTCM_HEADER'."""
        return Metaclass_RTCMPackage.__constants['HAS_RTCM_HEADER']


class RTCMPackage(metaclass=Metaclass_RTCMPackage):
    """
    Message class 'RTCMPackage'.

    Constants:
      HAS_RTCM_HEADER
    """

    __slots__ = [
        '_presence_vector',
        '_rtcm_header',
        '_messages',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'rtcm_header': 'carma_v2x_msgs/RTCMHeader',
        'messages': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'RTCMHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from carma_v2x_msgs.msg import RTCMHeader
        self.rtcm_header = kwargs.get('rtcm_header', RTCMHeader())
        self.messages = array.array('B', kwargs.get('messages', []))

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
        if self.rtcm_header != other.rtcm_header:
            return False
        if self.messages != other.messages:
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
    def rtcm_header(self):
        """Message field 'rtcm_header'."""
        return self._rtcm_header

    @rtcm_header.setter
    def rtcm_header(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import RTCMHeader
            assert \
                isinstance(value, RTCMHeader), \
                "The 'rtcm_header' field must be a sub message of type 'RTCMHeader'"
        self._rtcm_header = value

    @property
    def messages(self):
        """Message field 'messages'."""
        return self._messages

    @messages.setter
    def messages(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'messages' array.array() must have the type code of 'B'"
            self._messages = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'messages' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._messages = array.array('B', value)
