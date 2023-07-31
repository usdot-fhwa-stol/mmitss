# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EmergencyDetails(type):
    """Metaclass of message 'EmergencyDetails'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_EVENTS': 1,
        'HAS_RESPONSE_TYPE': 2,
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
                'j2735_v2x_msgs.msg.EmergencyDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__emergency_details
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__emergency_details
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__emergency_details
            cls._TYPE_SUPPORT = module.type_support_msg__msg__emergency_details
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__emergency_details

            from j2735_v2x_msgs.msg import LightbarInUse
            if LightbarInUse.__class__._TYPE_SUPPORT is None:
                LightbarInUse.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import MultiVehicleResponse
            if MultiVehicleResponse.__class__._TYPE_SUPPORT is None:
                MultiVehicleResponse.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PrivilegedEvents
            if PrivilegedEvents.__class__._TYPE_SUPPORT is None:
                PrivilegedEvents.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ResponseType
            if ResponseType.__class__._TYPE_SUPPORT is None:
                ResponseType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import SirenInUse
            if SirenInUse.__class__._TYPE_SUPPORT is None:
                SirenInUse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_EVENTS': cls.__constants['HAS_EVENTS'],
            'HAS_RESPONSE_TYPE': cls.__constants['HAS_RESPONSE_TYPE'],
        }

    @property
    def HAS_EVENTS(self):
        """Message constant 'HAS_EVENTS'."""
        return Metaclass_EmergencyDetails.__constants['HAS_EVENTS']

    @property
    def HAS_RESPONSE_TYPE(self):
        """Message constant 'HAS_RESPONSE_TYPE'."""
        return Metaclass_EmergencyDetails.__constants['HAS_RESPONSE_TYPE']


class EmergencyDetails(metaclass=Metaclass_EmergencyDetails):
    """
    Message class 'EmergencyDetails'.

    Constants:
      HAS_EVENTS
      HAS_RESPONSE_TYPE
    """

    __slots__ = [
        '_presence_vector',
        '_ssp_index',
        '_siren_use',
        '_lights_use',
        '_multi',
        '_events',
        '_response_type',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'ssp_index': 'uint8',
        'siren_use': 'j2735_v2x_msgs/SirenInUse',
        'lights_use': 'j2735_v2x_msgs/LightbarInUse',
        'multi': 'j2735_v2x_msgs/MultiVehicleResponse',
        'events': 'j2735_v2x_msgs/PrivilegedEvents',
        'response_type': 'j2735_v2x_msgs/ResponseType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'SirenInUse'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LightbarInUse'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'MultiVehicleResponse'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PrivilegedEvents'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ResponseType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        self.ssp_index = kwargs.get('ssp_index', int())
        from j2735_v2x_msgs.msg import SirenInUse
        self.siren_use = kwargs.get('siren_use', SirenInUse())
        from j2735_v2x_msgs.msg import LightbarInUse
        self.lights_use = kwargs.get('lights_use', LightbarInUse())
        from j2735_v2x_msgs.msg import MultiVehicleResponse
        self.multi = kwargs.get('multi', MultiVehicleResponse())
        from j2735_v2x_msgs.msg import PrivilegedEvents
        self.events = kwargs.get('events', PrivilegedEvents())
        from j2735_v2x_msgs.msg import ResponseType
        self.response_type = kwargs.get('response_type', ResponseType())

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
        if self.ssp_index != other.ssp_index:
            return False
        if self.siren_use != other.siren_use:
            return False
        if self.lights_use != other.lights_use:
            return False
        if self.multi != other.multi:
            return False
        if self.events != other.events:
            return False
        if self.response_type != other.response_type:
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
    def ssp_index(self):
        """Message field 'ssp_index'."""
        return self._ssp_index

    @ssp_index.setter
    def ssp_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ssp_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ssp_index' field must be an unsigned integer in [0, 255]"
        self._ssp_index = value

    @property
    def siren_use(self):
        """Message field 'siren_use'."""
        return self._siren_use

    @siren_use.setter
    def siren_use(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import SirenInUse
            assert \
                isinstance(value, SirenInUse), \
                "The 'siren_use' field must be a sub message of type 'SirenInUse'"
        self._siren_use = value

    @property
    def lights_use(self):
        """Message field 'lights_use'."""
        return self._lights_use

    @lights_use.setter
    def lights_use(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LightbarInUse
            assert \
                isinstance(value, LightbarInUse), \
                "The 'lights_use' field must be a sub message of type 'LightbarInUse'"
        self._lights_use = value

    @property
    def multi(self):
        """Message field 'multi'."""
        return self._multi

    @multi.setter
    def multi(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import MultiVehicleResponse
            assert \
                isinstance(value, MultiVehicleResponse), \
                "The 'multi' field must be a sub message of type 'MultiVehicleResponse'"
        self._multi = value

    @property
    def events(self):
        """Message field 'events'."""
        return self._events

    @events.setter
    def events(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PrivilegedEvents
            assert \
                isinstance(value, PrivilegedEvents), \
                "The 'events' field must be a sub message of type 'PrivilegedEvents'"
        self._events = value

    @property
    def response_type(self):
        """Message field 'response_type'."""
        return self._response_type

    @response_type.setter
    def response_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ResponseType
            assert \
                isinstance(value, ResponseType), \
                "The 'response_type' field must be a sub message of type 'ResponseType'"
        self._response_type = value
