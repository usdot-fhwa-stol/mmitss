# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TrafficControlMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlMessage(type):
    """Metaclass of message 'TrafficControlMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESERVED': 0,
        'TCMV01': 1,
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
                'j2735_v2x_msgs.msg.TrafficControlMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_message

            from j2735_v2x_msgs.msg import TrafficControlMessageV01
            if TrafficControlMessageV01.__class__._TYPE_SUPPORT is None:
                TrafficControlMessageV01.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESERVED': cls.__constants['RESERVED'],
            'TCMV01': cls.__constants['TCMV01'],
        }

    @property
    def RESERVED(self):
        """Message constant 'RESERVED'."""
        return Metaclass_TrafficControlMessage.__constants['RESERVED']

    @property
    def TCMV01(self):
        """Message constant 'TCMV01'."""
        return Metaclass_TrafficControlMessage.__constants['TCMV01']


class TrafficControlMessage(metaclass=Metaclass_TrafficControlMessage):
    """
    Message class 'TrafficControlMessage'.

    Constants:
      RESERVED
      TCMV01
    """

    __slots__ = [
        '_choice',
        '_tcm_v01',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'tcm_v01': 'j2735_v2x_msgs/TrafficControlMessageV01',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrafficControlMessageV01'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        from j2735_v2x_msgs.msg import TrafficControlMessageV01
        self.tcm_v01 = kwargs.get('tcm_v01', TrafficControlMessageV01())

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
        if self.choice != other.choice:
            return False
        if self.tcm_v01 != other.tcm_v01:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def choice(self):
        """Message field 'choice'."""
        return self._choice

    @choice.setter
    def choice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'choice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'choice' field must be an unsigned integer in [0, 255]"
        self._choice = value

    @property
    def tcm_v01(self):
        """Message field 'tcm_v01'."""
        return self._tcm_v01

    @tcm_v01.setter
    def tcm_v01(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrafficControlMessageV01
            assert \
                isinstance(value, TrafficControlMessageV01), \
                "The 'tcm_v01' field must be a sub message of type 'TrafficControlMessageV01'"
        self._tcm_v01 = value
