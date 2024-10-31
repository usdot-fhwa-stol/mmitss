# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/SensorDataSharingMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorDataSharingMessage(type):
    """Metaclass of message 'SensorDataSharingMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_REF_POS_XY_CONF': 1,
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
                'carma_v2x_msgs.msg.SensorDataSharingMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_data_sharing_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_data_sharing_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_data_sharing_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_data_sharing_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_data_sharing_message

            from carma_v2x_msgs.msg import DetectedObjectList
            if DetectedObjectList.__class__._TYPE_SUPPORT is None:
                DetectedObjectList.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DDateTime
            if DDateTime.__class__._TYPE_SUPPORT is None:
                DDateTime.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ElevationConfidence
            if ElevationConfidence.__class__._TYPE_SUPPORT is None:
                ElevationConfidence.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import MsgCount
            if MsgCount.__class__._TYPE_SUPPORT is None:
                MsgCount.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TemporaryID
            if TemporaryID.__class__._TYPE_SUPPORT is None:
                TemporaryID.__class__.__import_type_support__()

            from j3224_v2x_msgs.msg import EquipmentType
            if EquipmentType.__class__._TYPE_SUPPORT is None:
                EquipmentType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_REF_POS_XY_CONF': cls.__constants['HAS_REF_POS_XY_CONF'],
        }

    @property
    def HAS_REF_POS_XY_CONF(self):
        """Message constant 'HAS_REF_POS_XY_CONF'."""
        return Metaclass_SensorDataSharingMessage.__constants['HAS_REF_POS_XY_CONF']


class SensorDataSharingMessage(metaclass=Metaclass_SensorDataSharingMessage):
    """
    Message class 'SensorDataSharingMessage'.

    Constants:
      HAS_REF_POS_XY_CONF
    """

    __slots__ = [
        '_msg_cnt',
        '_source_id',
        '_equipment_type',
        '_sdsm_time_stamp',
        '_ref_pos',
        '_ref_pos_xy_conf',
        '_objects',
        '_presence_vector',
        '_ref_pos_el_conf',
    ]

    _fields_and_field_types = {
        'msg_cnt': 'j2735_v2x_msgs/MsgCount',
        'source_id': 'j2735_v2x_msgs/TemporaryID',
        'equipment_type': 'j3224_v2x_msgs/EquipmentType',
        'sdsm_time_stamp': 'j2735_v2x_msgs/DDateTime',
        'ref_pos': 'carma_v2x_msgs/Position3D',
        'ref_pos_xy_conf': 'carma_v2x_msgs/PositionalAccuracy',
        'objects': 'carma_v2x_msgs/DetectedObjectList',
        'presence_vector': 'uint8',
        'ref_pos_el_conf': 'j2735_v2x_msgs/ElevationConfidence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'MsgCount'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TemporaryID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j3224_v2x_msgs', 'msg'], 'EquipmentType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DDateTime'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'DetectedObjectList'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ElevationConfidence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import MsgCount
        self.msg_cnt = kwargs.get('msg_cnt', MsgCount())
        from j2735_v2x_msgs.msg import TemporaryID
        self.source_id = kwargs.get('source_id', TemporaryID())
        from j3224_v2x_msgs.msg import EquipmentType
        self.equipment_type = kwargs.get('equipment_type', EquipmentType())
        from j2735_v2x_msgs.msg import DDateTime
        self.sdsm_time_stamp = kwargs.get('sdsm_time_stamp', DDateTime())
        from carma_v2x_msgs.msg import Position3D
        self.ref_pos = kwargs.get('ref_pos', Position3D())
        from carma_v2x_msgs.msg import PositionalAccuracy
        self.ref_pos_xy_conf = kwargs.get('ref_pos_xy_conf', PositionalAccuracy())
        from carma_v2x_msgs.msg import DetectedObjectList
        self.objects = kwargs.get('objects', DetectedObjectList())
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import ElevationConfidence
        self.ref_pos_el_conf = kwargs.get('ref_pos_el_conf', ElevationConfidence())

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
        if self.msg_cnt != other.msg_cnt:
            return False
        if self.source_id != other.source_id:
            return False
        if self.equipment_type != other.equipment_type:
            return False
        if self.sdsm_time_stamp != other.sdsm_time_stamp:
            return False
        if self.ref_pos != other.ref_pos:
            return False
        if self.ref_pos_xy_conf != other.ref_pos_xy_conf:
            return False
        if self.objects != other.objects:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.ref_pos_el_conf != other.ref_pos_el_conf:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def msg_cnt(self):
        """Message field 'msg_cnt'."""
        return self._msg_cnt

    @msg_cnt.setter
    def msg_cnt(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import MsgCount
            assert \
                isinstance(value, MsgCount), \
                "The 'msg_cnt' field must be a sub message of type 'MsgCount'"
        self._msg_cnt = value

    @property
    def source_id(self):
        """Message field 'source_id'."""
        return self._source_id

    @source_id.setter
    def source_id(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TemporaryID
            assert \
                isinstance(value, TemporaryID), \
                "The 'source_id' field must be a sub message of type 'TemporaryID'"
        self._source_id = value

    @property
    def equipment_type(self):
        """Message field 'equipment_type'."""
        return self._equipment_type

    @equipment_type.setter
    def equipment_type(self, value):
        if __debug__:
            from j3224_v2x_msgs.msg import EquipmentType
            assert \
                isinstance(value, EquipmentType), \
                "The 'equipment_type' field must be a sub message of type 'EquipmentType'"
        self._equipment_type = value

    @property
    def sdsm_time_stamp(self):
        """Message field 'sdsm_time_stamp'."""
        return self._sdsm_time_stamp

    @sdsm_time_stamp.setter
    def sdsm_time_stamp(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DDateTime
            assert \
                isinstance(value, DDateTime), \
                "The 'sdsm_time_stamp' field must be a sub message of type 'DDateTime'"
        self._sdsm_time_stamp = value

    @property
    def ref_pos(self):
        """Message field 'ref_pos'."""
        return self._ref_pos

    @ref_pos.setter
    def ref_pos(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import Position3D
            assert \
                isinstance(value, Position3D), \
                "The 'ref_pos' field must be a sub message of type 'Position3D'"
        self._ref_pos = value

    @property
    def ref_pos_xy_conf(self):
        """Message field 'ref_pos_xy_conf'."""
        return self._ref_pos_xy_conf

    @ref_pos_xy_conf.setter
    def ref_pos_xy_conf(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'ref_pos_xy_conf' field must be a sub message of type 'PositionalAccuracy'"
        self._ref_pos_xy_conf = value

    @property
    def objects(self):
        """Message field 'objects'."""
        return self._objects

    @objects.setter
    def objects(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import DetectedObjectList
            assert \
                isinstance(value, DetectedObjectList), \
                "The 'objects' field must be a sub message of type 'DetectedObjectList'"
        self._objects = value

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
            assert value >= 0 and value < 256, \
                "The 'presence_vector' field must be an unsigned integer in [0, 255]"
        self._presence_vector = value

    @property
    def ref_pos_el_conf(self):
        """Message field 'ref_pos_el_conf'."""
        return self._ref_pos_el_conf

    @ref_pos_el_conf.setter
    def ref_pos_el_conf(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ElevationConfidence
            assert \
                isinstance(value, ElevationConfidence), \
                "The 'ref_pos_el_conf' field must be a sub message of type 'ElevationConfidence'"
        self._ref_pos_el_conf = value
