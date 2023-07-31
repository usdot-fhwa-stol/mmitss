# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_msgs:msg/UIInstructions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UIInstructions(type):
    """Metaclass of message 'UIInstructions'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INFO': 0,
        'ACK_REQUIRED': 1,
        'NO_ACK_REQUIRED': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.msg.UIInstructions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ui_instructions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ui_instructions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ui_instructions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ui_instructions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ui_instructions

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INFO': cls.__constants['INFO'],
            'ACK_REQUIRED': cls.__constants['ACK_REQUIRED'],
            'NO_ACK_REQUIRED': cls.__constants['NO_ACK_REQUIRED'],
        }

    @property
    def INFO(self):
        """Message constant 'INFO'."""
        return Metaclass_UIInstructions.__constants['INFO']

    @property
    def ACK_REQUIRED(self):
        """Message constant 'ACK_REQUIRED'."""
        return Metaclass_UIInstructions.__constants['ACK_REQUIRED']

    @property
    def NO_ACK_REQUIRED(self):
        """Message constant 'NO_ACK_REQUIRED'."""
        return Metaclass_UIInstructions.__constants['NO_ACK_REQUIRED']


class UIInstructions(metaclass=Metaclass_UIInstructions):
    """
    Message class 'UIInstructions'.

    Constants:
      INFO
      ACK_REQUIRED
      NO_ACK_REQUIRED
    """

    __slots__ = [
        '_stamp',
        '_msg',
        '_type',
        '_response_service',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'msg': 'string',
        'type': 'uint8',
        'response_service': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.msg = kwargs.get('msg', str())
        self.type = kwargs.get('type', int())
        self.response_service = kwargs.get('response_service', str())

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
        if self.stamp != other.stamp:
            return False
        if self.msg != other.msg:
            return False
        if self.type != other.type:
            return False
        if self.response_service != other.response_service:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg' field must be of type 'str'"
        self._msg = value

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
    def response_service(self):
        """Message field 'response_service'."""
        return self._response_service

    @response_service.setter
    def response_service(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response_service' field must be of type 'str'"
        self._response_service = value
