# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ITISResponderGroupAffected.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ITISResponderGroupAffected(type):
    """Metaclass of message 'ITISResponderGroupAffected'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EMERGENCY_VEHICLE_UNITS': 9729,
        'FEDERAL_LAW_ENFORCEMENT_UNITS': 9730,
        'STATE_POLICE_UNITS': 9731,
        'LOCAL_POLICE_UNITS': 9732,
        'AMBULANCE_UNITS': 9734,
        'RESCUE_UNITS': 9735,
        'FIRE_UNITS': 9736,
        'HAZMAT_UNITS': 9737,
        'LIGHT_TOW_UNIT': 9738,
        'HEAVY_TOW_UNIT': 9739,
        'FREEWAY_SERVICE_PATROLS': 9740,
        'TRANSPORTATION_RESPONSE_UNITS': 9741,
        'PRIVATE_CONTRACTOR_RESPONSE_UNITS': 9742,
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
                'j2735_v2x_msgs.msg.ITISResponderGroupAffected')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__itis_responder_group_affected
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__itis_responder_group_affected
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__itis_responder_group_affected
            cls._TYPE_SUPPORT = module.type_support_msg__msg__itis_responder_group_affected
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__itis_responder_group_affected

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EMERGENCY_VEHICLE_UNITS': cls.__constants['EMERGENCY_VEHICLE_UNITS'],
            'FEDERAL_LAW_ENFORCEMENT_UNITS': cls.__constants['FEDERAL_LAW_ENFORCEMENT_UNITS'],
            'STATE_POLICE_UNITS': cls.__constants['STATE_POLICE_UNITS'],
            'LOCAL_POLICE_UNITS': cls.__constants['LOCAL_POLICE_UNITS'],
            'AMBULANCE_UNITS': cls.__constants['AMBULANCE_UNITS'],
            'RESCUE_UNITS': cls.__constants['RESCUE_UNITS'],
            'FIRE_UNITS': cls.__constants['FIRE_UNITS'],
            'HAZMAT_UNITS': cls.__constants['HAZMAT_UNITS'],
            'LIGHT_TOW_UNIT': cls.__constants['LIGHT_TOW_UNIT'],
            'HEAVY_TOW_UNIT': cls.__constants['HEAVY_TOW_UNIT'],
            'FREEWAY_SERVICE_PATROLS': cls.__constants['FREEWAY_SERVICE_PATROLS'],
            'TRANSPORTATION_RESPONSE_UNITS': cls.__constants['TRANSPORTATION_RESPONSE_UNITS'],
            'PRIVATE_CONTRACTOR_RESPONSE_UNITS': cls.__constants['PRIVATE_CONTRACTOR_RESPONSE_UNITS'],
        }

    @property
    def EMERGENCY_VEHICLE_UNITS(self):
        """Message constant 'EMERGENCY_VEHICLE_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['EMERGENCY_VEHICLE_UNITS']

    @property
    def FEDERAL_LAW_ENFORCEMENT_UNITS(self):
        """Message constant 'FEDERAL_LAW_ENFORCEMENT_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['FEDERAL_LAW_ENFORCEMENT_UNITS']

    @property
    def STATE_POLICE_UNITS(self):
        """Message constant 'STATE_POLICE_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['STATE_POLICE_UNITS']

    @property
    def LOCAL_POLICE_UNITS(self):
        """Message constant 'LOCAL_POLICE_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['LOCAL_POLICE_UNITS']

    @property
    def AMBULANCE_UNITS(self):
        """Message constant 'AMBULANCE_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['AMBULANCE_UNITS']

    @property
    def RESCUE_UNITS(self):
        """Message constant 'RESCUE_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['RESCUE_UNITS']

    @property
    def FIRE_UNITS(self):
        """Message constant 'FIRE_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['FIRE_UNITS']

    @property
    def HAZMAT_UNITS(self):
        """Message constant 'HAZMAT_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['HAZMAT_UNITS']

    @property
    def LIGHT_TOW_UNIT(self):
        """Message constant 'LIGHT_TOW_UNIT'."""
        return Metaclass_ITISResponderGroupAffected.__constants['LIGHT_TOW_UNIT']

    @property
    def HEAVY_TOW_UNIT(self):
        """Message constant 'HEAVY_TOW_UNIT'."""
        return Metaclass_ITISResponderGroupAffected.__constants['HEAVY_TOW_UNIT']

    @property
    def FREEWAY_SERVICE_PATROLS(self):
        """Message constant 'FREEWAY_SERVICE_PATROLS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['FREEWAY_SERVICE_PATROLS']

    @property
    def TRANSPORTATION_RESPONSE_UNITS(self):
        """Message constant 'TRANSPORTATION_RESPONSE_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['TRANSPORTATION_RESPONSE_UNITS']

    @property
    def PRIVATE_CONTRACTOR_RESPONSE_UNITS(self):
        """Message constant 'PRIVATE_CONTRACTOR_RESPONSE_UNITS'."""
        return Metaclass_ITISResponderGroupAffected.__constants['PRIVATE_CONTRACTOR_RESPONSE_UNITS']


class ITISResponderGroupAffected(metaclass=Metaclass_ITISResponderGroupAffected):
    """
    Message class 'ITISResponderGroupAffected'.

    Constants:
      EMERGENCY_VEHICLE_UNITS
      FEDERAL_LAW_ENFORCEMENT_UNITS
      STATE_POLICE_UNITS
      LOCAL_POLICE_UNITS
      AMBULANCE_UNITS
      RESCUE_UNITS
      FIRE_UNITS
      HAZMAT_UNITS
      LIGHT_TOW_UNIT
      HEAVY_TOW_UNIT
      FREEWAY_SERVICE_PATROLS
      TRANSPORTATION_RESPONSE_UNITS
      PRIVATE_CONTRACTOR_RESPONSE_UNITS
    """

    __slots__ = [
        '_responder_group_affected',
    ]

    _fields_and_field_types = {
        'responder_group_affected': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.responder_group_affected = kwargs.get('responder_group_affected', int())

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
        if self.responder_group_affected != other.responder_group_affected:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def responder_group_affected(self):
        """Message field 'responder_group_affected'."""
        return self._responder_group_affected

    @responder_group_affected.setter
    def responder_group_affected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'responder_group_affected' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'responder_group_affected' field must be an unsigned integer in [0, 65535]"
        self._responder_group_affected = value
