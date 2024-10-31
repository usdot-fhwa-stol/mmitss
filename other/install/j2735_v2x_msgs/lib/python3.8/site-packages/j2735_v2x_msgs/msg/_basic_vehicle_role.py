# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/BasicVehicleRole.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BasicVehicleRole(type):
    """Metaclass of message 'BasicVehicleRole'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BASIC_VEHICLE': 0,
        'PUBLIC_TRANSPORT': 1,
        'SPECIAL_TRANSPORT': 2,
        'DANGEROUS_GOODS': 3,
        'ROAD_WORK': 4,
        'ROAD_RESCUE': 5,
        'EMERGENCY': 6,
        'SAFETY_CAR': 7,
        'NONE_UNKNOWN': 8,
        'TRUCK': 9,
        'MOTORCYCLE': 10,
        'ROAD_SIDE_SOURCE': 11,
        'POLICE': 12,
        'FIRE': 13,
        'AMBULANCE': 14,
        'DOT': 15,
        'TRANSIT': 16,
        'SLOW_MOVING': 17,
        'STOP_N_GO': 18,
        'CYCLIST': 19,
        'PEDESTRIAN': 20,
        'NON_MOTORIZED': 21,
        'MILITARY': 22,
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
                'j2735_v2x_msgs.msg.BasicVehicleRole')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__basic_vehicle_role
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__basic_vehicle_role
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__basic_vehicle_role
            cls._TYPE_SUPPORT = module.type_support_msg__msg__basic_vehicle_role
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__basic_vehicle_role

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BASIC_VEHICLE': cls.__constants['BASIC_VEHICLE'],
            'PUBLIC_TRANSPORT': cls.__constants['PUBLIC_TRANSPORT'],
            'SPECIAL_TRANSPORT': cls.__constants['SPECIAL_TRANSPORT'],
            'DANGEROUS_GOODS': cls.__constants['DANGEROUS_GOODS'],
            'ROAD_WORK': cls.__constants['ROAD_WORK'],
            'ROAD_RESCUE': cls.__constants['ROAD_RESCUE'],
            'EMERGENCY': cls.__constants['EMERGENCY'],
            'SAFETY_CAR': cls.__constants['SAFETY_CAR'],
            'NONE_UNKNOWN': cls.__constants['NONE_UNKNOWN'],
            'TRUCK': cls.__constants['TRUCK'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'ROAD_SIDE_SOURCE': cls.__constants['ROAD_SIDE_SOURCE'],
            'POLICE': cls.__constants['POLICE'],
            'FIRE': cls.__constants['FIRE'],
            'AMBULANCE': cls.__constants['AMBULANCE'],
            'DOT': cls.__constants['DOT'],
            'TRANSIT': cls.__constants['TRANSIT'],
            'SLOW_MOVING': cls.__constants['SLOW_MOVING'],
            'STOP_N_GO': cls.__constants['STOP_N_GO'],
            'CYCLIST': cls.__constants['CYCLIST'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'NON_MOTORIZED': cls.__constants['NON_MOTORIZED'],
            'MILITARY': cls.__constants['MILITARY'],
        }

    @property
    def BASIC_VEHICLE(self):
        """Message constant 'BASIC_VEHICLE'."""
        return Metaclass_BasicVehicleRole.__constants['BASIC_VEHICLE']

    @property
    def PUBLIC_TRANSPORT(self):
        """Message constant 'PUBLIC_TRANSPORT'."""
        return Metaclass_BasicVehicleRole.__constants['PUBLIC_TRANSPORT']

    @property
    def SPECIAL_TRANSPORT(self):
        """Message constant 'SPECIAL_TRANSPORT'."""
        return Metaclass_BasicVehicleRole.__constants['SPECIAL_TRANSPORT']

    @property
    def DANGEROUS_GOODS(self):
        """Message constant 'DANGEROUS_GOODS'."""
        return Metaclass_BasicVehicleRole.__constants['DANGEROUS_GOODS']

    @property
    def ROAD_WORK(self):
        """Message constant 'ROAD_WORK'."""
        return Metaclass_BasicVehicleRole.__constants['ROAD_WORK']

    @property
    def ROAD_RESCUE(self):
        """Message constant 'ROAD_RESCUE'."""
        return Metaclass_BasicVehicleRole.__constants['ROAD_RESCUE']

    @property
    def EMERGENCY(self):
        """Message constant 'EMERGENCY'."""
        return Metaclass_BasicVehicleRole.__constants['EMERGENCY']

    @property
    def SAFETY_CAR(self):
        """Message constant 'SAFETY_CAR'."""
        return Metaclass_BasicVehicleRole.__constants['SAFETY_CAR']

    @property
    def NONE_UNKNOWN(self):
        """Message constant 'NONE_UNKNOWN'."""
        return Metaclass_BasicVehicleRole.__constants['NONE_UNKNOWN']

    @property
    def TRUCK(self):
        """Message constant 'TRUCK'."""
        return Metaclass_BasicVehicleRole.__constants['TRUCK']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_BasicVehicleRole.__constants['MOTORCYCLE']

    @property
    def ROAD_SIDE_SOURCE(self):
        """Message constant 'ROAD_SIDE_SOURCE'."""
        return Metaclass_BasicVehicleRole.__constants['ROAD_SIDE_SOURCE']

    @property
    def POLICE(self):
        """Message constant 'POLICE'."""
        return Metaclass_BasicVehicleRole.__constants['POLICE']

    @property
    def FIRE(self):
        """Message constant 'FIRE'."""
        return Metaclass_BasicVehicleRole.__constants['FIRE']

    @property
    def AMBULANCE(self):
        """Message constant 'AMBULANCE'."""
        return Metaclass_BasicVehicleRole.__constants['AMBULANCE']

    @property
    def DOT(self):
        """Message constant 'DOT'."""
        return Metaclass_BasicVehicleRole.__constants['DOT']

    @property
    def TRANSIT(self):
        """Message constant 'TRANSIT'."""
        return Metaclass_BasicVehicleRole.__constants['TRANSIT']

    @property
    def SLOW_MOVING(self):
        """Message constant 'SLOW_MOVING'."""
        return Metaclass_BasicVehicleRole.__constants['SLOW_MOVING']

    @property
    def STOP_N_GO(self):
        """Message constant 'STOP_N_GO'."""
        return Metaclass_BasicVehicleRole.__constants['STOP_N_GO']

    @property
    def CYCLIST(self):
        """Message constant 'CYCLIST'."""
        return Metaclass_BasicVehicleRole.__constants['CYCLIST']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_BasicVehicleRole.__constants['PEDESTRIAN']

    @property
    def NON_MOTORIZED(self):
        """Message constant 'NON_MOTORIZED'."""
        return Metaclass_BasicVehicleRole.__constants['NON_MOTORIZED']

    @property
    def MILITARY(self):
        """Message constant 'MILITARY'."""
        return Metaclass_BasicVehicleRole.__constants['MILITARY']


class BasicVehicleRole(metaclass=Metaclass_BasicVehicleRole):
    """
    Message class 'BasicVehicleRole'.

    Constants:
      BASIC_VEHICLE
      PUBLIC_TRANSPORT
      SPECIAL_TRANSPORT
      DANGEROUS_GOODS
      ROAD_WORK
      ROAD_RESCUE
      EMERGENCY
      SAFETY_CAR
      NONE_UNKNOWN
      TRUCK
      MOTORCYCLE
      ROAD_SIDE_SOURCE
      POLICE
      FIRE
      AMBULANCE
      DOT
      TRANSIT
      SLOW_MOVING
      STOP_N_GO
      CYCLIST
      PEDESTRIAN
      NON_MOTORIZED
      MILITARY
    """

    __slots__ = [
        '_basic_vehicle_role',
    ]

    _fields_and_field_types = {
        'basic_vehicle_role': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.basic_vehicle_role = kwargs.get('basic_vehicle_role', int())

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
        if self.basic_vehicle_role != other.basic_vehicle_role:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def basic_vehicle_role(self):
        """Message field 'basic_vehicle_role'."""
        return self._basic_vehicle_role

    @basic_vehicle_role.setter
    def basic_vehicle_role(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'basic_vehicle_role' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'basic_vehicle_role' field must be an unsigned integer in [0, 255]"
        self._basic_vehicle_role = value
