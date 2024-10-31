# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/MapData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapData(type):
    """Metaclass of message 'MapData'."""

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
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.MapData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_data

            from carma_v2x_msgs.msg import IntersectionGeometry
            if IntersectionGeometry.__class__._TYPE_SUPPORT is None:
                IntersectionGeometry.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import RoadSegment
            if RoadSegment.__class__._TYPE_SUPPORT is None:
                RoadSegment.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DataParameters
            if DataParameters.__class__._TYPE_SUPPORT is None:
                DataParameters.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import LayerType
            if LayerType.__class__._TYPE_SUPPORT is None:
                LayerType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import RestrictionClassAssignment
            if RestrictionClassAssignment.__class__._TYPE_SUPPORT is None:
                RestrictionClassAssignment.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapData(metaclass=Metaclass_MapData):
    """Message class 'MapData'."""

    __slots__ = [
        '_header',
        '_time_stamp',
        '_time_stamp_exists',
        '_msg_issue_revision',
        '_layer_type',
        '_layer_id',
        '_layer_id_exists',
        '_intersections',
        '_intersections_exists',
        '_road_segment_list',
        '_road_segments_exists',
        '_data_parameters',
        '_data_parameters_exists',
        '_restriction_class_list',
        '_restriction_list_exists',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_stamp': 'uint32',
        'time_stamp_exists': 'boolean',
        'msg_issue_revision': 'uint8',
        'layer_type': 'j2735_v2x_msgs/LayerType',
        'layer_id': 'uint8',
        'layer_id_exists': 'boolean',
        'intersections': 'sequence<carma_v2x_msgs/IntersectionGeometry>',
        'intersections_exists': 'boolean',
        'road_segment_list': 'sequence<carma_v2x_msgs/RoadSegment>',
        'road_segments_exists': 'boolean',
        'data_parameters': 'j2735_v2x_msgs/DataParameters',
        'data_parameters_exists': 'boolean',
        'restriction_class_list': 'sequence<j2735_v2x_msgs/RestrictionClassAssignment>',
        'restriction_list_exists': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'LayerType'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'IntersectionGeometry')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'RoadSegment')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DataParameters'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'RestrictionClassAssignment')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_stamp = kwargs.get('time_stamp', int())
        self.time_stamp_exists = kwargs.get('time_stamp_exists', bool())
        self.msg_issue_revision = kwargs.get('msg_issue_revision', int())
        from j2735_v2x_msgs.msg import LayerType
        self.layer_type = kwargs.get('layer_type', LayerType())
        self.layer_id = kwargs.get('layer_id', int())
        self.layer_id_exists = kwargs.get('layer_id_exists', bool())
        self.intersections = kwargs.get('intersections', [])
        self.intersections_exists = kwargs.get('intersections_exists', bool())
        self.road_segment_list = kwargs.get('road_segment_list', [])
        self.road_segments_exists = kwargs.get('road_segments_exists', bool())
        from j2735_v2x_msgs.msg import DataParameters
        self.data_parameters = kwargs.get('data_parameters', DataParameters())
        self.data_parameters_exists = kwargs.get('data_parameters_exists', bool())
        self.restriction_class_list = kwargs.get('restriction_class_list', [])
        self.restriction_list_exists = kwargs.get('restriction_list_exists', bool())

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
        if self.header != other.header:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.time_stamp_exists != other.time_stamp_exists:
            return False
        if self.msg_issue_revision != other.msg_issue_revision:
            return False
        if self.layer_type != other.layer_type:
            return False
        if self.layer_id != other.layer_id:
            return False
        if self.layer_id_exists != other.layer_id_exists:
            return False
        if self.intersections != other.intersections:
            return False
        if self.intersections_exists != other.intersections_exists:
            return False
        if self.road_segment_list != other.road_segment_list:
            return False
        if self.road_segments_exists != other.road_segments_exists:
            return False
        if self.data_parameters != other.data_parameters:
            return False
        if self.data_parameters_exists != other.data_parameters_exists:
            return False
        if self.restriction_class_list != other.restriction_class_list:
            return False
        if self.restriction_list_exists != other.restriction_list_exists:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_stamp' field must be an unsigned integer in [0, 4294967295]"
        self._time_stamp = value

    @property
    def time_stamp_exists(self):
        """Message field 'time_stamp_exists'."""
        return self._time_stamp_exists

    @time_stamp_exists.setter
    def time_stamp_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'time_stamp_exists' field must be of type 'bool'"
        self._time_stamp_exists = value

    @property
    def msg_issue_revision(self):
        """Message field 'msg_issue_revision'."""
        return self._msg_issue_revision

    @msg_issue_revision.setter
    def msg_issue_revision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_issue_revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_issue_revision' field must be an unsigned integer in [0, 255]"
        self._msg_issue_revision = value

    @property
    def layer_type(self):
        """Message field 'layer_type'."""
        return self._layer_type

    @layer_type.setter
    def layer_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import LayerType
            assert \
                isinstance(value, LayerType), \
                "The 'layer_type' field must be a sub message of type 'LayerType'"
        self._layer_type = value

    @property
    def layer_id(self):
        """Message field 'layer_id'."""
        return self._layer_id

    @layer_id.setter
    def layer_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'layer_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'layer_id' field must be an unsigned integer in [0, 255]"
        self._layer_id = value

    @property
    def layer_id_exists(self):
        """Message field 'layer_id_exists'."""
        return self._layer_id_exists

    @layer_id_exists.setter
    def layer_id_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'layer_id_exists' field must be of type 'bool'"
        self._layer_id_exists = value

    @property
    def intersections(self):
        """Message field 'intersections'."""
        return self._intersections

    @intersections.setter
    def intersections(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import IntersectionGeometry
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
                 all(isinstance(v, IntersectionGeometry) for v in value) and
                 True), \
                "The 'intersections' field must be a set or sequence and each value of type 'IntersectionGeometry'"
        self._intersections = value

    @property
    def intersections_exists(self):
        """Message field 'intersections_exists'."""
        return self._intersections_exists

    @intersections_exists.setter
    def intersections_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'intersections_exists' field must be of type 'bool'"
        self._intersections_exists = value

    @property
    def road_segment_list(self):
        """Message field 'road_segment_list'."""
        return self._road_segment_list

    @road_segment_list.setter
    def road_segment_list(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import RoadSegment
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
                 all(isinstance(v, RoadSegment) for v in value) and
                 True), \
                "The 'road_segment_list' field must be a set or sequence and each value of type 'RoadSegment'"
        self._road_segment_list = value

    @property
    def road_segments_exists(self):
        """Message field 'road_segments_exists'."""
        return self._road_segments_exists

    @road_segments_exists.setter
    def road_segments_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'road_segments_exists' field must be of type 'bool'"
        self._road_segments_exists = value

    @property
    def data_parameters(self):
        """Message field 'data_parameters'."""
        return self._data_parameters

    @data_parameters.setter
    def data_parameters(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DataParameters
            assert \
                isinstance(value, DataParameters), \
                "The 'data_parameters' field must be a sub message of type 'DataParameters'"
        self._data_parameters = value

    @property
    def data_parameters_exists(self):
        """Message field 'data_parameters_exists'."""
        return self._data_parameters_exists

    @data_parameters_exists.setter
    def data_parameters_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'data_parameters_exists' field must be of type 'bool'"
        self._data_parameters_exists = value

    @property
    def restriction_class_list(self):
        """Message field 'restriction_class_list'."""
        return self._restriction_class_list

    @restriction_class_list.setter
    def restriction_class_list(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import RestrictionClassAssignment
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
                 all(isinstance(v, RestrictionClassAssignment) for v in value) and
                 True), \
                "The 'restriction_class_list' field must be a set or sequence and each value of type 'RestrictionClassAssignment'"
        self._restriction_class_list = value

    @property
    def restriction_list_exists(self):
        """Message field 'restriction_list_exists'."""
        return self._restriction_list_exists

    @restriction_list_exists.setter
    def restriction_list_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'restriction_list_exists' field must be of type 'bool'"
        self._restriction_list_exists = value
