# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/VehicleSafetyExtensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleSafetyExtensions(type):
    """Metaclass of message 'VehicleSafetyExtensions'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_EVENTS': 1,
        'HAS_PATH_HISTORY': 2,
        'HAS_PATH_PREDICTION': 4,
        'HAS_LIGHTS': 8,
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
                'j2735_v2x_msgs.msg.VehicleSafetyExtensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_safety_extensions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_safety_extensions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_safety_extensions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_safety_extensions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_safety_extensions

            from j2735_v2x_msgs.msg import ExteriorLights
            if ExteriorLights.__class__._TYPE_SUPPORT is None:
                ExteriorLights.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PathHistory
            if PathHistory.__class__._TYPE_SUPPORT is None:
                PathHistory.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PathPrediction
            if PathPrediction.__class__._TYPE_SUPPORT is None:
                PathPrediction.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleEventFlags
            if VehicleEventFlags.__class__._TYPE_SUPPORT is None:
                VehicleEventFlags.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_EVENTS': cls.__constants['HAS_EVENTS'],
            'HAS_PATH_HISTORY': cls.__constants['HAS_PATH_HISTORY'],
            'HAS_PATH_PREDICTION': cls.__constants['HAS_PATH_PREDICTION'],
            'HAS_LIGHTS': cls.__constants['HAS_LIGHTS'],
        }

    @property
    def HAS_EVENTS(self):
        """Message constant 'HAS_EVENTS'."""
        return Metaclass_VehicleSafetyExtensions.__constants['HAS_EVENTS']

    @property
    def HAS_PATH_HISTORY(self):
        """Message constant 'HAS_PATH_HISTORY'."""
        return Metaclass_VehicleSafetyExtensions.__constants['HAS_PATH_HISTORY']

    @property
    def HAS_PATH_PREDICTION(self):
        """Message constant 'HAS_PATH_PREDICTION'."""
        return Metaclass_VehicleSafetyExtensions.__constants['HAS_PATH_PREDICTION']

    @property
    def HAS_LIGHTS(self):
        """Message constant 'HAS_LIGHTS'."""
        return Metaclass_VehicleSafetyExtensions.__constants['HAS_LIGHTS']


class VehicleSafetyExtensions(metaclass=Metaclass_VehicleSafetyExtensions):
    """
    Message class 'VehicleSafetyExtensions'.

    Constants:
      HAS_EVENTS
      HAS_PATH_HISTORY
      HAS_PATH_PREDICTION
      HAS_LIGHTS
    """

    __slots__ = [
        '_presence_vector',
        '_events',
        '_path_history',
        '_path_prediction',
        '_lights',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'events': 'j2735_v2x_msgs/VehicleEventFlags',
        'path_history': 'j2735_v2x_msgs/PathHistory',
        'path_prediction': 'j2735_v2x_msgs/PathPrediction',
        'lights': 'j2735_v2x_msgs/ExteriorLights',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleEventFlags'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PathHistory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PathPrediction'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ExteriorLights'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import VehicleEventFlags
        self.events = kwargs.get('events', VehicleEventFlags())
        from j2735_v2x_msgs.msg import PathHistory
        self.path_history = kwargs.get('path_history', PathHistory())
        from j2735_v2x_msgs.msg import PathPrediction
        self.path_prediction = kwargs.get('path_prediction', PathPrediction())
        from j2735_v2x_msgs.msg import ExteriorLights
        self.lights = kwargs.get('lights', ExteriorLights())

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
        if self.events != other.events:
            return False
        if self.path_history != other.path_history:
            return False
        if self.path_prediction != other.path_prediction:
            return False
        if self.lights != other.lights:
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
    def events(self):
        """Message field 'events'."""
        return self._events

    @events.setter
    def events(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleEventFlags
            assert \
                isinstance(value, VehicleEventFlags), \
                "The 'events' field must be a sub message of type 'VehicleEventFlags'"
        self._events = value

    @property
    def path_history(self):
        """Message field 'path_history'."""
        return self._path_history

    @path_history.setter
    def path_history(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PathHistory
            assert \
                isinstance(value, PathHistory), \
                "The 'path_history' field must be a sub message of type 'PathHistory'"
        self._path_history = value

    @property
    def path_prediction(self):
        """Message field 'path_prediction'."""
        return self._path_prediction

    @path_prediction.setter
    def path_prediction(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PathPrediction
            assert \
                isinstance(value, PathPrediction), \
                "The 'path_prediction' field must be a sub message of type 'PathPrediction'"
        self._path_prediction = value

    @property
    def lights(self):
        """Message field 'lights'."""
        return self._lights

    @lights.setter
    def lights(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ExteriorLights
            assert \
                isinstance(value, ExteriorLights), \
                "The 'lights' field must be a sub message of type 'ExteriorLights'"
        self._lights = value
