# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrailerUnitDescription(type):
    """Metaclass of message 'TrailerUnitDescription'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_HEIGHT': 1,
        'HAS_MASS': 2,
        'HAS_BUMPER_HEIGHTS': 4,
        'HAS_CENTER_OF_GRAVITY': 8,
        'HAS_REAR_PIVOT': 16,
        'HAS_REAR_WHEEL_OFFSET': 32,
        'HAS_ELEVATION_OFFSET': 64,
        'HAS_CRUMB_DATA': 128,
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
                'j2735_v2x_msgs.msg.TrailerUnitDescription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trailer_unit_description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trailer_unit_description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trailer_unit_description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trailer_unit_description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trailer_unit_description

            from j2735_v2x_msgs.msg import BumperHeights
            if BumperHeights.__class__._TYPE_SUPPORT is None:
                BumperHeights.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import IsDolly
            if IsDolly.__class__._TYPE_SUPPORT is None:
                IsDolly.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NodeXY24b
            if NodeXY24b.__class__._TYPE_SUPPORT is None:
                NodeXY24b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import OffsetB12
            if OffsetB12.__class__._TYPE_SUPPORT is None:
                OffsetB12.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PivotPointDescription
            if PivotPointDescription.__class__._TYPE_SUPPORT is None:
                PivotPointDescription.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrailerHistoryPointList
            if TrailerHistoryPointList.__class__._TYPE_SUPPORT is None:
                TrailerHistoryPointList.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrailerMass
            if TrailerMass.__class__._TYPE_SUPPORT is None:
                TrailerMass.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleHeight
            if VehicleHeight.__class__._TYPE_SUPPORT is None:
                VehicleHeight.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleLength
            if VehicleLength.__class__._TYPE_SUPPORT is None:
                VehicleLength.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VehicleWidth
            if VehicleWidth.__class__._TYPE_SUPPORT is None:
                VehicleWidth.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import VertOffsetB07
            if VertOffsetB07.__class__._TYPE_SUPPORT is None:
                VertOffsetB07.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_HEIGHT': cls.__constants['HAS_HEIGHT'],
            'HAS_MASS': cls.__constants['HAS_MASS'],
            'HAS_BUMPER_HEIGHTS': cls.__constants['HAS_BUMPER_HEIGHTS'],
            'HAS_CENTER_OF_GRAVITY': cls.__constants['HAS_CENTER_OF_GRAVITY'],
            'HAS_REAR_PIVOT': cls.__constants['HAS_REAR_PIVOT'],
            'HAS_REAR_WHEEL_OFFSET': cls.__constants['HAS_REAR_WHEEL_OFFSET'],
            'HAS_ELEVATION_OFFSET': cls.__constants['HAS_ELEVATION_OFFSET'],
            'HAS_CRUMB_DATA': cls.__constants['HAS_CRUMB_DATA'],
        }

    @property
    def HAS_HEIGHT(self):
        """Message constant 'HAS_HEIGHT'."""
        return Metaclass_TrailerUnitDescription.__constants['HAS_HEIGHT']

    @property
    def HAS_MASS(self):
        """Message constant 'HAS_MASS'."""
        return Metaclass_TrailerUnitDescription.__constants['HAS_MASS']

    @property
    def HAS_BUMPER_HEIGHTS(self):
        """Message constant 'HAS_BUMPER_HEIGHTS'."""
        return Metaclass_TrailerUnitDescription.__constants['HAS_BUMPER_HEIGHTS']

    @property
    def HAS_CENTER_OF_GRAVITY(self):
        """Message constant 'HAS_CENTER_OF_GRAVITY'."""
        return Metaclass_TrailerUnitDescription.__constants['HAS_CENTER_OF_GRAVITY']

    @property
    def HAS_REAR_PIVOT(self):
        """Message constant 'HAS_REAR_PIVOT'."""
        return Metaclass_TrailerUnitDescription.__constants['HAS_REAR_PIVOT']

    @property
    def HAS_REAR_WHEEL_OFFSET(self):
        """Message constant 'HAS_REAR_WHEEL_OFFSET'."""
        return Metaclass_TrailerUnitDescription.__constants['HAS_REAR_WHEEL_OFFSET']

    @property
    def HAS_ELEVATION_OFFSET(self):
        """Message constant 'HAS_ELEVATION_OFFSET'."""
        return Metaclass_TrailerUnitDescription.__constants['HAS_ELEVATION_OFFSET']

    @property
    def HAS_CRUMB_DATA(self):
        """Message constant 'HAS_CRUMB_DATA'."""
        return Metaclass_TrailerUnitDescription.__constants['HAS_CRUMB_DATA']


class TrailerUnitDescription(metaclass=Metaclass_TrailerUnitDescription):
    """
    Message class 'TrailerUnitDescription'.

    Constants:
      HAS_HEIGHT
      HAS_MASS
      HAS_BUMPER_HEIGHTS
      HAS_CENTER_OF_GRAVITY
      HAS_REAR_PIVOT
      HAS_REAR_WHEEL_OFFSET
      HAS_ELEVATION_OFFSET
      HAS_CRUMB_DATA
    """

    __slots__ = [
        '_presence_vector',
        '_is_dolly',
        '_width',
        '_length',
        '_height',
        '_mass',
        '_bumper_heights',
        '_center_of_gravity',
        '_front_pivot',
        '_rear_pivot',
        '_rear_wheel_offset',
        '_position_offset',
        '_elevation_offset',
        '_crumb_data',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint32',
        'is_dolly': 'j2735_v2x_msgs/IsDolly',
        'width': 'j2735_v2x_msgs/VehicleWidth',
        'length': 'j2735_v2x_msgs/VehicleLength',
        'height': 'j2735_v2x_msgs/VehicleHeight',
        'mass': 'j2735_v2x_msgs/TrailerMass',
        'bumper_heights': 'j2735_v2x_msgs/BumperHeights',
        'center_of_gravity': 'j2735_v2x_msgs/VehicleHeight',
        'front_pivot': 'j2735_v2x_msgs/PivotPointDescription',
        'rear_pivot': 'j2735_v2x_msgs/PivotPointDescription',
        'rear_wheel_offset': 'j2735_v2x_msgs/OffsetB12',
        'position_offset': 'j2735_v2x_msgs/NodeXY24b',
        'elevation_offset': 'j2735_v2x_msgs/VertOffsetB07',
        'crumb_data': 'j2735_v2x_msgs/TrailerHistoryPointList',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'IsDolly'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleWidth'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleLength'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleHeight'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrailerMass'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'BumperHeights'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VehicleHeight'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PivotPointDescription'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PivotPointDescription'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'OffsetB12'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NodeXY24b'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'VertOffsetB07'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrailerHistoryPointList'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import IsDolly
        self.is_dolly = kwargs.get('is_dolly', IsDolly())
        from j2735_v2x_msgs.msg import VehicleWidth
        self.width = kwargs.get('width', VehicleWidth())
        from j2735_v2x_msgs.msg import VehicleLength
        self.length = kwargs.get('length', VehicleLength())
        from j2735_v2x_msgs.msg import VehicleHeight
        self.height = kwargs.get('height', VehicleHeight())
        from j2735_v2x_msgs.msg import TrailerMass
        self.mass = kwargs.get('mass', TrailerMass())
        from j2735_v2x_msgs.msg import BumperHeights
        self.bumper_heights = kwargs.get('bumper_heights', BumperHeights())
        from j2735_v2x_msgs.msg import VehicleHeight
        self.center_of_gravity = kwargs.get('center_of_gravity', VehicleHeight())
        from j2735_v2x_msgs.msg import PivotPointDescription
        self.front_pivot = kwargs.get('front_pivot', PivotPointDescription())
        from j2735_v2x_msgs.msg import PivotPointDescription
        self.rear_pivot = kwargs.get('rear_pivot', PivotPointDescription())
        from j2735_v2x_msgs.msg import OffsetB12
        self.rear_wheel_offset = kwargs.get('rear_wheel_offset', OffsetB12())
        from j2735_v2x_msgs.msg import NodeXY24b
        self.position_offset = kwargs.get('position_offset', NodeXY24b())
        from j2735_v2x_msgs.msg import VertOffsetB07
        self.elevation_offset = kwargs.get('elevation_offset', VertOffsetB07())
        from j2735_v2x_msgs.msg import TrailerHistoryPointList
        self.crumb_data = kwargs.get('crumb_data', TrailerHistoryPointList())

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
        if self.is_dolly != other.is_dolly:
            return False
        if self.width != other.width:
            return False
        if self.length != other.length:
            return False
        if self.height != other.height:
            return False
        if self.mass != other.mass:
            return False
        if self.bumper_heights != other.bumper_heights:
            return False
        if self.center_of_gravity != other.center_of_gravity:
            return False
        if self.front_pivot != other.front_pivot:
            return False
        if self.rear_pivot != other.rear_pivot:
            return False
        if self.rear_wheel_offset != other.rear_wheel_offset:
            return False
        if self.position_offset != other.position_offset:
            return False
        if self.elevation_offset != other.elevation_offset:
            return False
        if self.crumb_data != other.crumb_data:
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
            assert value >= 0 and value < 4294967296, \
                "The 'presence_vector' field must be an unsigned integer in [0, 4294967295]"
        self._presence_vector = value

    @property
    def is_dolly(self):
        """Message field 'is_dolly'."""
        return self._is_dolly

    @is_dolly.setter
    def is_dolly(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import IsDolly
            assert \
                isinstance(value, IsDolly), \
                "The 'is_dolly' field must be a sub message of type 'IsDolly'"
        self._is_dolly = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleWidth
            assert \
                isinstance(value, VehicleWidth), \
                "The 'width' field must be a sub message of type 'VehicleWidth'"
        self._width = value

    @property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleLength
            assert \
                isinstance(value, VehicleLength), \
                "The 'length' field must be a sub message of type 'VehicleLength'"
        self._length = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleHeight
            assert \
                isinstance(value, VehicleHeight), \
                "The 'height' field must be a sub message of type 'VehicleHeight'"
        self._height = value

    @property
    def mass(self):
        """Message field 'mass'."""
        return self._mass

    @mass.setter
    def mass(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrailerMass
            assert \
                isinstance(value, TrailerMass), \
                "The 'mass' field must be a sub message of type 'TrailerMass'"
        self._mass = value

    @property
    def bumper_heights(self):
        """Message field 'bumper_heights'."""
        return self._bumper_heights

    @bumper_heights.setter
    def bumper_heights(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import BumperHeights
            assert \
                isinstance(value, BumperHeights), \
                "The 'bumper_heights' field must be a sub message of type 'BumperHeights'"
        self._bumper_heights = value

    @property
    def center_of_gravity(self):
        """Message field 'center_of_gravity'."""
        return self._center_of_gravity

    @center_of_gravity.setter
    def center_of_gravity(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VehicleHeight
            assert \
                isinstance(value, VehicleHeight), \
                "The 'center_of_gravity' field must be a sub message of type 'VehicleHeight'"
        self._center_of_gravity = value

    @property
    def front_pivot(self):
        """Message field 'front_pivot'."""
        return self._front_pivot

    @front_pivot.setter
    def front_pivot(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PivotPointDescription
            assert \
                isinstance(value, PivotPointDescription), \
                "The 'front_pivot' field must be a sub message of type 'PivotPointDescription'"
        self._front_pivot = value

    @property
    def rear_pivot(self):
        """Message field 'rear_pivot'."""
        return self._rear_pivot

    @rear_pivot.setter
    def rear_pivot(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PivotPointDescription
            assert \
                isinstance(value, PivotPointDescription), \
                "The 'rear_pivot' field must be a sub message of type 'PivotPointDescription'"
        self._rear_pivot = value

    @property
    def rear_wheel_offset(self):
        """Message field 'rear_wheel_offset'."""
        return self._rear_wheel_offset

    @rear_wheel_offset.setter
    def rear_wheel_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import OffsetB12
            assert \
                isinstance(value, OffsetB12), \
                "The 'rear_wheel_offset' field must be a sub message of type 'OffsetB12'"
        self._rear_wheel_offset = value

    @property
    def position_offset(self):
        """Message field 'position_offset'."""
        return self._position_offset

    @position_offset.setter
    def position_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NodeXY24b
            assert \
                isinstance(value, NodeXY24b), \
                "The 'position_offset' field must be a sub message of type 'NodeXY24b'"
        self._position_offset = value

    @property
    def elevation_offset(self):
        """Message field 'elevation_offset'."""
        return self._elevation_offset

    @elevation_offset.setter
    def elevation_offset(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import VertOffsetB07
            assert \
                isinstance(value, VertOffsetB07), \
                "The 'elevation_offset' field must be a sub message of type 'VertOffsetB07'"
        self._elevation_offset = value

    @property
    def crumb_data(self):
        """Message field 'crumb_data'."""
        return self._crumb_data

    @crumb_data.setter
    def crumb_data(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrailerHistoryPointList
            assert \
                isinstance(value, TrailerHistoryPointList), \
                "The 'crumb_data' field must be a sub message of type 'TrailerHistoryPointList'"
        self._crumb_data = value
