# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TrafficControlVehClass.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlVehClass(type):
    """Metaclass of message 'TrafficControlVehClass'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ANY': 0,
        'PEDESTRIAN': 1,
        'BICYCLE': 2,
        'MICROMOBILE': 3,
        'MOTORCYCLE': 4,
        'PASSENGER_CAR': 5,
        'LIGHT_TRUCK_VAN': 6,
        'BUS': 7,
        'TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK': 8,
        'THREE_AXLE_SINGLE_UNIT_TRUCK': 9,
        'FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK': 10,
        'FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK': 11,
        'FIVE_AXLE_SINGLE_TRAILER_TRUCK': 12,
        'SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK': 13,
        'FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK': 14,
        'SIX_AXLE_MULTI_TRAILER_TRUCK': 15,
        'SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK': 16,
        'RAIL': 17,
        'UNCLASSIFIED': 18,
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
                'j2735_v2x_msgs.msg.TrafficControlVehClass')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_veh_class
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_veh_class
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_veh_class
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_veh_class
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_veh_class

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ANY': cls.__constants['ANY'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'MICROMOBILE': cls.__constants['MICROMOBILE'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'PASSENGER_CAR': cls.__constants['PASSENGER_CAR'],
            'LIGHT_TRUCK_VAN': cls.__constants['LIGHT_TRUCK_VAN'],
            'BUS': cls.__constants['BUS'],
            'TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK': cls.__constants['TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK'],
            'THREE_AXLE_SINGLE_UNIT_TRUCK': cls.__constants['THREE_AXLE_SINGLE_UNIT_TRUCK'],
            'FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK': cls.__constants['FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK'],
            'FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK': cls.__constants['FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK'],
            'FIVE_AXLE_SINGLE_TRAILER_TRUCK': cls.__constants['FIVE_AXLE_SINGLE_TRAILER_TRUCK'],
            'SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK': cls.__constants['SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK'],
            'FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK': cls.__constants['FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK'],
            'SIX_AXLE_MULTI_TRAILER_TRUCK': cls.__constants['SIX_AXLE_MULTI_TRAILER_TRUCK'],
            'SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK': cls.__constants['SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK'],
            'RAIL': cls.__constants['RAIL'],
            'UNCLASSIFIED': cls.__constants['UNCLASSIFIED'],
        }

    @property
    def ANY(self):
        """Message constant 'ANY'."""
        return Metaclass_TrafficControlVehClass.__constants['ANY']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_TrafficControlVehClass.__constants['PEDESTRIAN']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_TrafficControlVehClass.__constants['BICYCLE']

    @property
    def MICROMOBILE(self):
        """Message constant 'MICROMOBILE'."""
        return Metaclass_TrafficControlVehClass.__constants['MICROMOBILE']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_TrafficControlVehClass.__constants['MOTORCYCLE']

    @property
    def PASSENGER_CAR(self):
        """Message constant 'PASSENGER_CAR'."""
        return Metaclass_TrafficControlVehClass.__constants['PASSENGER_CAR']

    @property
    def LIGHT_TRUCK_VAN(self):
        """Message constant 'LIGHT_TRUCK_VAN'."""
        return Metaclass_TrafficControlVehClass.__constants['LIGHT_TRUCK_VAN']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_TrafficControlVehClass.__constants['BUS']

    @property
    def TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK(self):
        """Message constant 'TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK']

    @property
    def THREE_AXLE_SINGLE_UNIT_TRUCK(self):
        """Message constant 'THREE_AXLE_SINGLE_UNIT_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['THREE_AXLE_SINGLE_UNIT_TRUCK']

    @property
    def FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK(self):
        """Message constant 'FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK']

    @property
    def FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK(self):
        """Message constant 'FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK']

    @property
    def FIVE_AXLE_SINGLE_TRAILER_TRUCK(self):
        """Message constant 'FIVE_AXLE_SINGLE_TRAILER_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['FIVE_AXLE_SINGLE_TRAILER_TRUCK']

    @property
    def SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK(self):
        """Message constant 'SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK']

    @property
    def FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK(self):
        """Message constant 'FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK']

    @property
    def SIX_AXLE_MULTI_TRAILER_TRUCK(self):
        """Message constant 'SIX_AXLE_MULTI_TRAILER_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['SIX_AXLE_MULTI_TRAILER_TRUCK']

    @property
    def SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK(self):
        """Message constant 'SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK'."""
        return Metaclass_TrafficControlVehClass.__constants['SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK']

    @property
    def RAIL(self):
        """Message constant 'RAIL'."""
        return Metaclass_TrafficControlVehClass.__constants['RAIL']

    @property
    def UNCLASSIFIED(self):
        """Message constant 'UNCLASSIFIED'."""
        return Metaclass_TrafficControlVehClass.__constants['UNCLASSIFIED']


class TrafficControlVehClass(metaclass=Metaclass_TrafficControlVehClass):
    """
    Message class 'TrafficControlVehClass'.

    Constants:
      ANY
      PEDESTRIAN
      BICYCLE
      MICROMOBILE
      MOTORCYCLE
      PASSENGER_CAR
      LIGHT_TRUCK_VAN
      BUS
      TWO_AXLE_SIX_TIRE_SINGLE_UNIT_TRUCK
      THREE_AXLE_SINGLE_UNIT_TRUCK
      FOUR_OR_MORE_AXLE_SINGLE_UNIT_TRUCK
      FOUR_OR_FEWER_AXLE_SINGLE_TRAILER_TRUCK
      FIVE_AXLE_SINGLE_TRAILER_TRUCK
      SIX_OR_MORE_AXLE_SINGLE_TRAILER_TRUCK
      FIVE_OR_FEWER_AXLE_MULTI_TRAILER_TRUCK
      SIX_AXLE_MULTI_TRAILER_TRUCK
      SEVEN_OR_MORE_AXLE_MULTI_TRAILER_TRUCK
      RAIL
      UNCLASSIFIED
    """

    __slots__ = [
        '_vehicle_class',
    ]

    _fields_and_field_types = {
        'vehicle_class': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_class = kwargs.get('vehicle_class', int())

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
        if self.vehicle_class != other.vehicle_class:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vehicle_class(self):
        """Message field 'vehicle_class'."""
        return self._vehicle_class

    @vehicle_class.setter
    def vehicle_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicle_class' field must be an unsigned integer in [0, 255]"
        self._vehicle_class = value
