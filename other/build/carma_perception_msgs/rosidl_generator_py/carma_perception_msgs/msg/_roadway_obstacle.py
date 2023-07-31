# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_perception_msgs:msg/RoadwayObstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'predicted_lanelet_ids'
# Member 'predicted_lanelet_id_confidences'
# Member 'predicted_cross_tracks'
# Member 'predicted_cross_track_confidences'
# Member 'predicted_down_tracks'
# Member 'predicted_down_track_confidences'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoadwayObstacle(type):
    """Metaclass of message 'RoadwayObstacle'."""

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
            module = import_type_support('carma_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_perception_msgs.msg.RoadwayObstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roadway_obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roadway_obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roadway_obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roadway_obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roadway_obstacle

            from carma_perception_msgs.msg import ConnectedVehicleType
            if ConnectedVehicleType.__class__._TYPE_SUPPORT is None:
                ConnectedVehicleType.__class__.__import_type_support__()

            from carma_perception_msgs.msg import ExternalObject
            if ExternalObject.__class__._TYPE_SUPPORT is None:
                ExternalObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoadwayObstacle(metaclass=Metaclass_RoadwayObstacle):
    """Message class 'RoadwayObstacle'."""

    __slots__ = [
        '_object',
        '_connected_vehicle_type',
        '_lanelet_id',
        '_cross_track',
        '_down_track',
        '_predicted_lanelet_ids',
        '_predicted_lanelet_id_confidences',
        '_predicted_cross_tracks',
        '_predicted_cross_track_confidences',
        '_predicted_down_tracks',
        '_predicted_down_track_confidences',
    ]

    _fields_and_field_types = {
        'object': 'carma_perception_msgs/ExternalObject',
        'connected_vehicle_type': 'carma_perception_msgs/ConnectedVehicleType',
        'lanelet_id': 'int64',
        'cross_track': 'double',
        'down_track': 'double',
        'predicted_lanelet_ids': 'sequence<int64>',
        'predicted_lanelet_id_confidences': 'sequence<double>',
        'predicted_cross_tracks': 'sequence<double>',
        'predicted_cross_track_confidences': 'sequence<double>',
        'predicted_down_tracks': 'sequence<double>',
        'predicted_down_track_confidences': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_perception_msgs', 'msg'], 'ExternalObject'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_perception_msgs', 'msg'], 'ConnectedVehicleType'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_perception_msgs.msg import ExternalObject
        self.object = kwargs.get('object', ExternalObject())
        from carma_perception_msgs.msg import ConnectedVehicleType
        self.connected_vehicle_type = kwargs.get('connected_vehicle_type', ConnectedVehicleType())
        self.lanelet_id = kwargs.get('lanelet_id', int())
        self.cross_track = kwargs.get('cross_track', float())
        self.down_track = kwargs.get('down_track', float())
        self.predicted_lanelet_ids = array.array('q', kwargs.get('predicted_lanelet_ids', []))
        self.predicted_lanelet_id_confidences = array.array('d', kwargs.get('predicted_lanelet_id_confidences', []))
        self.predicted_cross_tracks = array.array('d', kwargs.get('predicted_cross_tracks', []))
        self.predicted_cross_track_confidences = array.array('d', kwargs.get('predicted_cross_track_confidences', []))
        self.predicted_down_tracks = array.array('d', kwargs.get('predicted_down_tracks', []))
        self.predicted_down_track_confidences = array.array('d', kwargs.get('predicted_down_track_confidences', []))

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
        if self.object != other.object:
            return False
        if self.connected_vehicle_type != other.connected_vehicle_type:
            return False
        if self.lanelet_id != other.lanelet_id:
            return False
        if self.cross_track != other.cross_track:
            return False
        if self.down_track != other.down_track:
            return False
        if self.predicted_lanelet_ids != other.predicted_lanelet_ids:
            return False
        if self.predicted_lanelet_id_confidences != other.predicted_lanelet_id_confidences:
            return False
        if self.predicted_cross_tracks != other.predicted_cross_tracks:
            return False
        if self.predicted_cross_track_confidences != other.predicted_cross_track_confidences:
            return False
        if self.predicted_down_tracks != other.predicted_down_tracks:
            return False
        if self.predicted_down_track_confidences != other.predicted_down_track_confidences:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if __debug__:
            from carma_perception_msgs.msg import ExternalObject
            assert \
                isinstance(value, ExternalObject), \
                "The 'object' field must be a sub message of type 'ExternalObject'"
        self._object = value

    @property
    def connected_vehicle_type(self):
        """Message field 'connected_vehicle_type'."""
        return self._connected_vehicle_type

    @connected_vehicle_type.setter
    def connected_vehicle_type(self, value):
        if __debug__:
            from carma_perception_msgs.msg import ConnectedVehicleType
            assert \
                isinstance(value, ConnectedVehicleType), \
                "The 'connected_vehicle_type' field must be a sub message of type 'ConnectedVehicleType'"
        self._connected_vehicle_type = value

    @property
    def lanelet_id(self):
        """Message field 'lanelet_id'."""
        return self._lanelet_id

    @lanelet_id.setter
    def lanelet_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanelet_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lanelet_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lanelet_id = value

    @property
    def cross_track(self):
        """Message field 'cross_track'."""
        return self._cross_track

    @cross_track.setter
    def cross_track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cross_track' field must be of type 'float'"
        self._cross_track = value

    @property
    def down_track(self):
        """Message field 'down_track'."""
        return self._down_track

    @down_track.setter
    def down_track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'down_track' field must be of type 'float'"
        self._down_track = value

    @property
    def predicted_lanelet_ids(self):
        """Message field 'predicted_lanelet_ids'."""
        return self._predicted_lanelet_ids

    @predicted_lanelet_ids.setter
    def predicted_lanelet_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'predicted_lanelet_ids' array.array() must have the type code of 'q'"
            self._predicted_lanelet_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'predicted_lanelet_ids' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._predicted_lanelet_ids = array.array('q', value)

    @property
    def predicted_lanelet_id_confidences(self):
        """Message field 'predicted_lanelet_id_confidences'."""
        return self._predicted_lanelet_id_confidences

    @predicted_lanelet_id_confidences.setter
    def predicted_lanelet_id_confidences(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predicted_lanelet_id_confidences' array.array() must have the type code of 'd'"
            self._predicted_lanelet_id_confidences = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'predicted_lanelet_id_confidences' field must be a set or sequence and each value of type 'float'"
        self._predicted_lanelet_id_confidences = array.array('d', value)

    @property
    def predicted_cross_tracks(self):
        """Message field 'predicted_cross_tracks'."""
        return self._predicted_cross_tracks

    @predicted_cross_tracks.setter
    def predicted_cross_tracks(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predicted_cross_tracks' array.array() must have the type code of 'd'"
            self._predicted_cross_tracks = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'predicted_cross_tracks' field must be a set or sequence and each value of type 'float'"
        self._predicted_cross_tracks = array.array('d', value)

    @property
    def predicted_cross_track_confidences(self):
        """Message field 'predicted_cross_track_confidences'."""
        return self._predicted_cross_track_confidences

    @predicted_cross_track_confidences.setter
    def predicted_cross_track_confidences(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predicted_cross_track_confidences' array.array() must have the type code of 'd'"
            self._predicted_cross_track_confidences = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'predicted_cross_track_confidences' field must be a set or sequence and each value of type 'float'"
        self._predicted_cross_track_confidences = array.array('d', value)

    @property
    def predicted_down_tracks(self):
        """Message field 'predicted_down_tracks'."""
        return self._predicted_down_tracks

    @predicted_down_tracks.setter
    def predicted_down_tracks(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predicted_down_tracks' array.array() must have the type code of 'd'"
            self._predicted_down_tracks = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'predicted_down_tracks' field must be a set or sequence and each value of type 'float'"
        self._predicted_down_tracks = array.array('d', value)

    @property
    def predicted_down_track_confidences(self):
        """Message field 'predicted_down_track_confidences'."""
        return self._predicted_down_track_confidences

    @predicted_down_track_confidences.setter
    def predicted_down_track_confidences(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'predicted_down_track_confidences' array.array() must have the type code of 'd'"
            self._predicted_down_track_confidences = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'predicted_down_track_confidences' field must be a set or sequence and each value of type 'float'"
        self._predicted_down_track_confidences = array.array('d', value)
