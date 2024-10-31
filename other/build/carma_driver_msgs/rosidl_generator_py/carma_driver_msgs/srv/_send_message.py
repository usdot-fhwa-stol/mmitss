# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_driver_msgs:srv/SendMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SendMessage_Request(type):
    """Metaclass of message 'SendMessage_Request'."""

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
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.srv.SendMessage_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_message__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_message__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_message__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_message__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_message__request

            from carma_driver_msgs.msg import ByteArray
            if ByteArray.__class__._TYPE_SUPPORT is None:
                ByteArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SendMessage_Request(metaclass=Metaclass_SendMessage_Request):
    """Message class 'SendMessage_Request'."""

    __slots__ = [
        '_message_to_send',
    ]

    _fields_and_field_types = {
        'message_to_send': 'carma_driver_msgs/ByteArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_driver_msgs', 'msg'], 'ByteArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_driver_msgs.msg import ByteArray
        self.message_to_send = kwargs.get('message_to_send', ByteArray())

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
        if self.message_to_send != other.message_to_send:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def message_to_send(self):
        """Message field 'message_to_send'."""
        return self._message_to_send

    @message_to_send.setter
    def message_to_send(self, value):
        if __debug__:
            from carma_driver_msgs.msg import ByteArray
            assert \
                isinstance(value, ByteArray), \
                "The 'message_to_send' field must be a sub message of type 'ByteArray'"
        self._message_to_send = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SendMessage_Response(type):
    """Metaclass of message 'SendMessage_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_ERROR': 0,
        'MSG_FAILURE': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.srv.SendMessage_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__send_message__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__send_message__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__send_message__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__send_message__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__send_message__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_ERROR': cls.__constants['NO_ERROR'],
            'MSG_FAILURE': cls.__constants['MSG_FAILURE'],
        }

    @property
    def NO_ERROR(self):
        """Message constant 'NO_ERROR'."""
        return Metaclass_SendMessage_Response.__constants['NO_ERROR']

    @property
    def MSG_FAILURE(self):
        """Message constant 'MSG_FAILURE'."""
        return Metaclass_SendMessage_Response.__constants['MSG_FAILURE']


class SendMessage_Response(metaclass=Metaclass_SendMessage_Response):
    """
    Message class 'SendMessage_Response'.

    Constants:
      NO_ERROR
      MSG_FAILURE
    """

    __slots__ = [
        '_error_status',
    ]

    _fields_and_field_types = {
        'error_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.error_status = kwargs.get('error_status', int())

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
        if self.error_status != other.error_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def error_status(self):
        """Message field 'error_status'."""
        return self._error_status

    @error_status.setter
    def error_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_status' field must be an unsigned integer in [0, 255]"
        self._error_status = value


class Metaclass_SendMessage(type):
    """Metaclass of service 'SendMessage'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.srv.SendMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__send_message

            from carma_driver_msgs.srv import _send_message
            if _send_message.Metaclass_SendMessage_Request._TYPE_SUPPORT is None:
                _send_message.Metaclass_SendMessage_Request.__import_type_support__()
            if _send_message.Metaclass_SendMessage_Response._TYPE_SUPPORT is None:
                _send_message.Metaclass_SendMessage_Response.__import_type_support__()


class SendMessage(metaclass=Metaclass_SendMessage):
    from carma_driver_msgs.srv._send_message import SendMessage_Request as Request
    from carma_driver_msgs.srv._send_message import SendMessage_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
