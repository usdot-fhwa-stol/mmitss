# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/VehicleEventFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleEventFlags(type):
    """Metaclass of message 'VehicleEventFlags'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EVENT_HAZARD_LIGHTS': 0,
        'EVENT_STOP_LINE_VIOLATION': 1,
        'EVENT_ABS_ACTIVATED': 2,
        'EVENT_TRACTION_CONTROL_LOSS': 4,
        'EVENT_STABILITY_CONTROL_ACTIVATED': 8,
        'EVENT_HAZARDOUS_MATERIALS': 16,
        'EVENT_RESERVED1': 32,
        'EVENT_HARD_BRAKING': 64,
        'EVENT_LIGHTS_CHANGED': 128,
        'EVENT_WIPERS_CHANGED': 256,
        'EVENT_FLAT_TIRE': 512,
        'EVENT_DISABLED_VEHICLE': 1024,
        'EVENT_AIR_BAG_DEPLOYMENT': 2048,
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
                'j2735_v2x_msgs.msg.VehicleEventFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_event_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_event_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_event_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_event_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_event_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EVENT_HAZARD_LIGHTS': cls.__constants['EVENT_HAZARD_LIGHTS'],
            'EVENT_STOP_LINE_VIOLATION': cls.__constants['EVENT_STOP_LINE_VIOLATION'],
            'EVENT_ABS_ACTIVATED': cls.__constants['EVENT_ABS_ACTIVATED'],
            'EVENT_TRACTION_CONTROL_LOSS': cls.__constants['EVENT_TRACTION_CONTROL_LOSS'],
            'EVENT_STABILITY_CONTROL_ACTIVATED': cls.__constants['EVENT_STABILITY_CONTROL_ACTIVATED'],
            'EVENT_HAZARDOUS_MATERIALS': cls.__constants['EVENT_HAZARDOUS_MATERIALS'],
            'EVENT_RESERVED1': cls.__constants['EVENT_RESERVED1'],
            'EVENT_HARD_BRAKING': cls.__constants['EVENT_HARD_BRAKING'],
            'EVENT_LIGHTS_CHANGED': cls.__constants['EVENT_LIGHTS_CHANGED'],
            'EVENT_WIPERS_CHANGED': cls.__constants['EVENT_WIPERS_CHANGED'],
            'EVENT_FLAT_TIRE': cls.__constants['EVENT_FLAT_TIRE'],
            'EVENT_DISABLED_VEHICLE': cls.__constants['EVENT_DISABLED_VEHICLE'],
            'EVENT_AIR_BAG_DEPLOYMENT': cls.__constants['EVENT_AIR_BAG_DEPLOYMENT'],
        }

    @property
    def EVENT_HAZARD_LIGHTS(self):
        """Message constant 'EVENT_HAZARD_LIGHTS'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_HAZARD_LIGHTS']

    @property
    def EVENT_STOP_LINE_VIOLATION(self):
        """Message constant 'EVENT_STOP_LINE_VIOLATION'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_STOP_LINE_VIOLATION']

    @property
    def EVENT_ABS_ACTIVATED(self):
        """Message constant 'EVENT_ABS_ACTIVATED'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_ABS_ACTIVATED']

    @property
    def EVENT_TRACTION_CONTROL_LOSS(self):
        """Message constant 'EVENT_TRACTION_CONTROL_LOSS'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_TRACTION_CONTROL_LOSS']

    @property
    def EVENT_STABILITY_CONTROL_ACTIVATED(self):
        """Message constant 'EVENT_STABILITY_CONTROL_ACTIVATED'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_STABILITY_CONTROL_ACTIVATED']

    @property
    def EVENT_HAZARDOUS_MATERIALS(self):
        """Message constant 'EVENT_HAZARDOUS_MATERIALS'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_HAZARDOUS_MATERIALS']

    @property
    def EVENT_RESERVED1(self):
        """Message constant 'EVENT_RESERVED1'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_RESERVED1']

    @property
    def EVENT_HARD_BRAKING(self):
        """Message constant 'EVENT_HARD_BRAKING'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_HARD_BRAKING']

    @property
    def EVENT_LIGHTS_CHANGED(self):
        """Message constant 'EVENT_LIGHTS_CHANGED'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_LIGHTS_CHANGED']

    @property
    def EVENT_WIPERS_CHANGED(self):
        """Message constant 'EVENT_WIPERS_CHANGED'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_WIPERS_CHANGED']

    @property
    def EVENT_FLAT_TIRE(self):
        """Message constant 'EVENT_FLAT_TIRE'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_FLAT_TIRE']

    @property
    def EVENT_DISABLED_VEHICLE(self):
        """Message constant 'EVENT_DISABLED_VEHICLE'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_DISABLED_VEHICLE']

    @property
    def EVENT_AIR_BAG_DEPLOYMENT(self):
        """Message constant 'EVENT_AIR_BAG_DEPLOYMENT'."""
        return Metaclass_VehicleEventFlags.__constants['EVENT_AIR_BAG_DEPLOYMENT']


class VehicleEventFlags(metaclass=Metaclass_VehicleEventFlags):
    """
    Message class 'VehicleEventFlags'.

    Constants:
      EVENT_HAZARD_LIGHTS
      EVENT_STOP_LINE_VIOLATION
      EVENT_ABS_ACTIVATED
      EVENT_TRACTION_CONTROL_LOSS
      EVENT_STABILITY_CONTROL_ACTIVATED
      EVENT_HAZARDOUS_MATERIALS
      EVENT_RESERVED1
      EVENT_HARD_BRAKING
      EVENT_LIGHTS_CHANGED
      EVENT_WIPERS_CHANGED
      EVENT_FLAT_TIRE
      EVENT_DISABLED_VEHICLE
      EVENT_AIR_BAG_DEPLOYMENT
    """

    __slots__ = [
        '_vehicle_event_flag',
    ]

    _fields_and_field_types = {
        'vehicle_event_flag': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_event_flag = kwargs.get('vehicle_event_flag', int())

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
        if self.vehicle_event_flag != other.vehicle_event_flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vehicle_event_flag(self):
        """Message field 'vehicle_event_flag'."""
        return self._vehicle_event_flag

    @vehicle_event_flag.setter
    def vehicle_event_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_event_flag' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'vehicle_event_flag' field must be an unsigned integer in [0, 65535]"
        self._vehicle_event_flag = value
