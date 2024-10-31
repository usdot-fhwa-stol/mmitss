# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ExteriorLights.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExteriorLights(type):
    """Metaclass of message 'ExteriorLights'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALL_LIGHTS_OFF': 0,
        'LOW_BEAM_HEADLIGHTS_ON': 1,
        'HIGH_BEAM_HEADLIGHTS_ON': 2,
        'LEFT_TURN_SIGNAL_ON': 4,
        'RIGHT_TURN_SIGNAL_ON': 8,
        'HAZARD_SIGNAL_ON': 16,
        'AUTOMATIC_LIGHT_CONTROL_ON': 32,
        'DAYTIME_RUNNING_LIGHTS_ON': 64,
        'FOG_LIGHT_ON': 128,
        'PARKING_LIGHTS_ON': 256,
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
                'j2735_v2x_msgs.msg.ExteriorLights')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__exterior_lights
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__exterior_lights
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__exterior_lights
            cls._TYPE_SUPPORT = module.type_support_msg__msg__exterior_lights
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__exterior_lights

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALL_LIGHTS_OFF': cls.__constants['ALL_LIGHTS_OFF'],
            'LOW_BEAM_HEADLIGHTS_ON': cls.__constants['LOW_BEAM_HEADLIGHTS_ON'],
            'HIGH_BEAM_HEADLIGHTS_ON': cls.__constants['HIGH_BEAM_HEADLIGHTS_ON'],
            'LEFT_TURN_SIGNAL_ON': cls.__constants['LEFT_TURN_SIGNAL_ON'],
            'RIGHT_TURN_SIGNAL_ON': cls.__constants['RIGHT_TURN_SIGNAL_ON'],
            'HAZARD_SIGNAL_ON': cls.__constants['HAZARD_SIGNAL_ON'],
            'AUTOMATIC_LIGHT_CONTROL_ON': cls.__constants['AUTOMATIC_LIGHT_CONTROL_ON'],
            'DAYTIME_RUNNING_LIGHTS_ON': cls.__constants['DAYTIME_RUNNING_LIGHTS_ON'],
            'FOG_LIGHT_ON': cls.__constants['FOG_LIGHT_ON'],
            'PARKING_LIGHTS_ON': cls.__constants['PARKING_LIGHTS_ON'],
        }

    @property
    def ALL_LIGHTS_OFF(self):
        """Message constant 'ALL_LIGHTS_OFF'."""
        return Metaclass_ExteriorLights.__constants['ALL_LIGHTS_OFF']

    @property
    def LOW_BEAM_HEADLIGHTS_ON(self):
        """Message constant 'LOW_BEAM_HEADLIGHTS_ON'."""
        return Metaclass_ExteriorLights.__constants['LOW_BEAM_HEADLIGHTS_ON']

    @property
    def HIGH_BEAM_HEADLIGHTS_ON(self):
        """Message constant 'HIGH_BEAM_HEADLIGHTS_ON'."""
        return Metaclass_ExteriorLights.__constants['HIGH_BEAM_HEADLIGHTS_ON']

    @property
    def LEFT_TURN_SIGNAL_ON(self):
        """Message constant 'LEFT_TURN_SIGNAL_ON'."""
        return Metaclass_ExteriorLights.__constants['LEFT_TURN_SIGNAL_ON']

    @property
    def RIGHT_TURN_SIGNAL_ON(self):
        """Message constant 'RIGHT_TURN_SIGNAL_ON'."""
        return Metaclass_ExteriorLights.__constants['RIGHT_TURN_SIGNAL_ON']

    @property
    def HAZARD_SIGNAL_ON(self):
        """Message constant 'HAZARD_SIGNAL_ON'."""
        return Metaclass_ExteriorLights.__constants['HAZARD_SIGNAL_ON']

    @property
    def AUTOMATIC_LIGHT_CONTROL_ON(self):
        """Message constant 'AUTOMATIC_LIGHT_CONTROL_ON'."""
        return Metaclass_ExteriorLights.__constants['AUTOMATIC_LIGHT_CONTROL_ON']

    @property
    def DAYTIME_RUNNING_LIGHTS_ON(self):
        """Message constant 'DAYTIME_RUNNING_LIGHTS_ON'."""
        return Metaclass_ExteriorLights.__constants['DAYTIME_RUNNING_LIGHTS_ON']

    @property
    def FOG_LIGHT_ON(self):
        """Message constant 'FOG_LIGHT_ON'."""
        return Metaclass_ExteriorLights.__constants['FOG_LIGHT_ON']

    @property
    def PARKING_LIGHTS_ON(self):
        """Message constant 'PARKING_LIGHTS_ON'."""
        return Metaclass_ExteriorLights.__constants['PARKING_LIGHTS_ON']


class ExteriorLights(metaclass=Metaclass_ExteriorLights):
    """
    Message class 'ExteriorLights'.

    Constants:
      ALL_LIGHTS_OFF
      LOW_BEAM_HEADLIGHTS_ON
      HIGH_BEAM_HEADLIGHTS_ON
      LEFT_TURN_SIGNAL_ON
      RIGHT_TURN_SIGNAL_ON
      HAZARD_SIGNAL_ON
      AUTOMATIC_LIGHT_CONTROL_ON
      DAYTIME_RUNNING_LIGHTS_ON
      FOG_LIGHT_ON
      PARKING_LIGHTS_ON
    """

    __slots__ = [
        '_exterior_lights',
    ]

    _fields_and_field_types = {
        'exterior_lights': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.exterior_lights = kwargs.get('exterior_lights', int())

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
        if self.exterior_lights != other.exterior_lights:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def exterior_lights(self):
        """Message field 'exterior_lights'."""
        return self._exterior_lights

    @exterior_lights.setter
    def exterior_lights(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exterior_lights' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'exterior_lights' field must be an unsigned integer in [0, 65535]"
        self._exterior_lights = value
