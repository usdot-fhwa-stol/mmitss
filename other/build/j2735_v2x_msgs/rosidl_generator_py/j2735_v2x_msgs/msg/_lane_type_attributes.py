# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneTypeAttributes(type):
    """Metaclass of message 'LaneTypeAttributes'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE': 0,
        'CROSSWALK': 1,
        'BIKE_LANE': 2,
        'SIDEWALK': 3,
        'MEDIAN': 4,
        'STRIPING': 5,
        'TRACKED_VEHICLE': 6,
        'PARKING': 7,
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
                'j2735_v2x_msgs.msg.LaneTypeAttributes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_type_attributes
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_type_attributes
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_type_attributes
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_type_attributes
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_type_attributes

            from j2735_v2x_msgs.msg import LaneAttributesBarrier
            if LaneAttributesBarrier.__class__._TYPE_SUPPORT is None:
                LaneAttributesBarrier.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneAttributesBike
            if LaneAttributesBike.__class__._TYPE_SUPPORT is None:
                LaneAttributesBike.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneAttributesCrosswalk
            if LaneAttributesCrosswalk.__class__._TYPE_SUPPORT is None:
                LaneAttributesCrosswalk.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneAttributesParking
            if LaneAttributesParking.__class__._TYPE_SUPPORT is None:
                LaneAttributesParking.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneAttributesSidewalk
            if LaneAttributesSidewalk.__class__._TYPE_SUPPORT is None:
                LaneAttributesSidewalk.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneAttributesStriping
            if LaneAttributesStriping.__class__._TYPE_SUPPORT is None:
                LaneAttributesStriping.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneAttributesTrackedVehicle
            if LaneAttributesTrackedVehicle.__class__._TYPE_SUPPORT is None:
                LaneAttributesTrackedVehicle.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LaneAttributesVehicle
            if LaneAttributesVehicle.__class__._TYPE_SUPPORT is None:
                LaneAttributesVehicle.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE': cls.__constants['VEHICLE'],
            'CROSSWALK': cls.__constants['CROSSWALK'],
            'BIKE_LANE': cls.__constants['BIKE_LANE'],
            'SIDEWALK': cls.__constants['SIDEWALK'],
            'MEDIAN': cls.__constants['MEDIAN'],
            'STRIPING': cls.__constants['STRIPING'],
            'TRACKED_VEHICLE': cls.__constants['TRACKED_VEHICLE'],
            'PARKING': cls.__constants['PARKING'],
        }

    @property
    def VEHICLE(self):
        """Message constant 'VEHICLE'."""
        return Metaclass_LaneTypeAttributes.__constants['VEHICLE']

    @property
    def CROSSWALK(self):
        """Message constant 'CROSSWALK'."""
        return Metaclass_LaneTypeAttributes.__constants['CROSSWALK']

    @property
    def BIKE_LANE(self):
        """Message constant 'BIKE_LANE'."""
        return Metaclass_LaneTypeAttributes.__constants['BIKE_LANE']

    @property
    def SIDEWALK(self):
        """Message constant 'SIDEWALK'."""
        return Metaclass_LaneTypeAttributes.__constants['SIDEWALK']

    @property
    def MEDIAN(self):
        """Message constant 'MEDIAN'."""
        return Metaclass_LaneTypeAttributes.__constants['MEDIAN']

    @property
    def STRIPING(self):
        """Message constant 'STRIPING'."""
        return Metaclass_LaneTypeAttributes.__constants['STRIPING']

    @property
    def TRACKED_VEHICLE(self):
        """Message constant 'TRACKED_VEHICLE'."""
        return Metaclass_LaneTypeAttributes.__constants['TRACKED_VEHICLE']

    @property
    def PARKING(self):
        """Message constant 'PARKING'."""
        return Metaclass_LaneTypeAttributes.__constants['PARKING']


class LaneTypeAttributes(metaclass=Metaclass_LaneTypeAttributes):
    """
    Message class 'LaneTypeAttributes'.

    Constants:
      VEHICLE
      CROSSWALK
      BIKE_LANE
      SIDEWALK
      MEDIAN
      STRIPING
      TRACKED_VEHICLE
      PARKING
    """

    __slots__ = [
        '_choice',
        '_vehicle',
        '_crosswalk',
        '_bike_lane',
        '_sidewalk',
        '_median',
        '_striping',
        '_tracked_vehicle',
        '_parking',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'vehicle': 'j2735_v2x_msgs/LaneAttributesVehicle',
        'crosswalk': 'j2735_v2x_msgs/LaneAttributesCrosswalk',
        'bike_lane': 'j2735_v2x_msgs/LaneAttributesBike',
        'sidewalk': 'j2735_v2x_msgs/LaneAttributesSidewalk',
        'median': 'j2735_v2x_msgs/LaneAttributesBarrier',
        'striping': 'j2735_v2x_msgs/LaneAttributesStriping',
        'tracked_vehicle': 'j2735_v2x_msgs/LaneAttributesTrackedVehicle',
        'parking': 'j2735_v2x_msgs/LaneAttributesParking',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributesVehicle'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributesCrosswalk'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributesBike'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributesSidewalk'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributesBarrier'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributesStriping'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributesTrackedVehicle'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LaneAttributesParking'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        from j2735_v2x_msgs.msg import LaneAttributesVehicle
        self.vehicle = kwargs.get('vehicle', LaneAttributesVehicle())
        from j2735_v2x_msgs.msg import LaneAttributesCrosswalk
        self.crosswalk = kwargs.get('crosswalk', LaneAttributesCrosswalk())
        from j2735_v2x_msgs.msg import LaneAttributesBike
        self.bike_lane = kwargs.get('bike_lane', LaneAttributesBike())
        from j2735_v2x_msgs.msg import LaneAttributesSidewalk
        self.sidewalk = kwargs.get('sidewalk', LaneAttributesSidewalk())
        from j2735_v2x_msgs.msg import LaneAttributesBarrier
        self.median = kwargs.get('median', LaneAttributesBarrier())
        from j2735_v2x_msgs.msg import LaneAttributesStriping
        self.striping = kwargs.get('striping', LaneAttributesStriping())
        from j2735_v2x_msgs.msg import LaneAttributesTrackedVehicle
        self.tracked_vehicle = kwargs.get('tracked_vehicle', LaneAttributesTrackedVehicle())
        from j2735_v2x_msgs.msg import LaneAttributesParking
        self.parking = kwargs.get('parking', LaneAttributesParking())

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
        if self.vehicle != other.vehicle:
            return False
        if self.crosswalk != other.crosswalk:
            return False
        if self.bike_lane != other.bike_lane:
            return False
        if self.sidewalk != other.sidewalk:
            return False
        if self.median != other.median:
            return False
        if self.striping != other.striping:
            return False
        if self.tracked_vehicle != other.tracked_vehicle:
            return False
        if self.parking != other.parking:
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
    def vehicle(self):
        """Message field 'vehicle'."""
        return self._vehicle

    @vehicle.setter
    def vehicle(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributesVehicle
            assert \
                isinstance(value, LaneAttributesVehicle), \
                "The 'vehicle' field must be a sub message of type 'LaneAttributesVehicle'"
        self._vehicle = value

    @property
    def crosswalk(self):
        """Message field 'crosswalk'."""
        return self._crosswalk

    @crosswalk.setter
    def crosswalk(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributesCrosswalk
            assert \
                isinstance(value, LaneAttributesCrosswalk), \
                "The 'crosswalk' field must be a sub message of type 'LaneAttributesCrosswalk'"
        self._crosswalk = value

    @property
    def bike_lane(self):
        """Message field 'bike_lane'."""
        return self._bike_lane

    @bike_lane.setter
    def bike_lane(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributesBike
            assert \
                isinstance(value, LaneAttributesBike), \
                "The 'bike_lane' field must be a sub message of type 'LaneAttributesBike'"
        self._bike_lane = value

    @property
    def sidewalk(self):
        """Message field 'sidewalk'."""
        return self._sidewalk

    @sidewalk.setter
    def sidewalk(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributesSidewalk
            assert \
                isinstance(value, LaneAttributesSidewalk), \
                "The 'sidewalk' field must be a sub message of type 'LaneAttributesSidewalk'"
        self._sidewalk = value

    @property
    def median(self):
        """Message field 'median'."""
        return self._median

    @median.setter
    def median(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributesBarrier
            assert \
                isinstance(value, LaneAttributesBarrier), \
                "The 'median' field must be a sub message of type 'LaneAttributesBarrier'"
        self._median = value

    @property
    def striping(self):
        """Message field 'striping'."""
        return self._striping

    @striping.setter
    def striping(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributesStriping
            assert \
                isinstance(value, LaneAttributesStriping), \
                "The 'striping' field must be a sub message of type 'LaneAttributesStriping'"
        self._striping = value

    @property
    def tracked_vehicle(self):
        """Message field 'tracked_vehicle'."""
        return self._tracked_vehicle

    @tracked_vehicle.setter
    def tracked_vehicle(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributesTrackedVehicle
            assert \
                isinstance(value, LaneAttributesTrackedVehicle), \
                "The 'tracked_vehicle' field must be a sub message of type 'LaneAttributesTrackedVehicle'"
        self._tracked_vehicle = value

    @property
    def parking(self):
        """Message field 'parking'."""
        return self._parking

    @parking.setter
    def parking(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LaneAttributesParking
            assert \
                isinstance(value, LaneAttributesParking), \
                "The 'parking' field must be a sub message of type 'LaneAttributesParking'"
        self._parking = value
