# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/PSM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PSM(type):
    """Metaclass of message 'PSM'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_ACCEL_SET': 1,
        'HAS_PATH_HISTORY': 2,
        'HAS_PATH_PREDICTION': 4,
        'HAS_PROPULSION': 8,
        'HAS_USE_STATE': 16,
        'HAS_CROSS_REQUEST': 32,
        'HAS_CROSS_STATE': 64,
        'HAS_CLUSTER_SIZE': 128,
        'HAS_CLUSTER_RADIUS': 256,
        'HAS_EVENT_RESPONDER_TYPE': 512,
        'HAS_ACTIVITY_TYPE': 1024,
        'HAS_ACTIVITY_SUB_TYPE': 2048,
        'HAS_ASSIST_TYPE': 4096,
        'HAS_SIZING': 8192,
        'HAS_ATTACHMENT': 16384,
        'HAS_ATTACHMENT_RADIUS': 32768,
        'HAS_ANIMAL_TYPE': 65536,
        'HAS_REGIONAL_EXTENSION': 131072,
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
                'carma_v2x_msgs.msg.PSM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__psm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__psm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__psm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__psm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__psm

            from carma_v2x_msgs.msg import AccelerationSet4Way
            if AccelerationSet4Way.__class__._TYPE_SUPPORT is None:
                AccelerationSet4Way.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import AttachmentRadius
            if AttachmentRadius.__class__._TYPE_SUPPORT is None:
                AttachmentRadius.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import Heading
            if Heading.__class__._TYPE_SUPPORT is None:
                Heading.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import PathHistory
            if PathHistory.__class__._TYPE_SUPPORT is None:
                PathHistory.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import PathPrediction
            if PathPrediction.__class__._TYPE_SUPPORT is None:
                PathPrediction.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import PositionalAccuracy
            if PositionalAccuracy.__class__._TYPE_SUPPORT is None:
                PositionalAccuracy.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import Velocity
            if Velocity.__class__._TYPE_SUPPORT is None:
                Velocity.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import AnimalType
            if AnimalType.__class__._TYPE_SUPPORT is None:
                AnimalType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import Attachment
            if Attachment.__class__._TYPE_SUPPORT is None:
                Attachment.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import DSecond
            if DSecond.__class__._TYPE_SUPPORT is None:
                DSecond.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import MsgCount
            if MsgCount.__class__._TYPE_SUPPORT is None:
                MsgCount.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import NumberOfParticipantsInCluster
            if NumberOfParticipantsInCluster.__class__._TYPE_SUPPORT is None:
                NumberOfParticipantsInCluster.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PersonalAssistive
            if PersonalAssistive.__class__._TYPE_SUPPORT is None:
                PersonalAssistive.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PersonalClusterRadius
            if PersonalClusterRadius.__class__._TYPE_SUPPORT is None:
                PersonalClusterRadius.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PersonalCrossingInProgress
            if PersonalCrossingInProgress.__class__._TYPE_SUPPORT is None:
                PersonalCrossingInProgress.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PersonalCrossingRequest
            if PersonalCrossingRequest.__class__._TYPE_SUPPORT is None:
                PersonalCrossingRequest.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PersonalDeviceUsageState
            if PersonalDeviceUsageState.__class__._TYPE_SUPPORT is None:
                PersonalDeviceUsageState.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PersonalDeviceUserType
            if PersonalDeviceUserType.__class__._TYPE_SUPPORT is None:
                PersonalDeviceUserType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PropelledInformation
            if PropelledInformation.__class__._TYPE_SUPPORT is None:
                PropelledInformation.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PublicSafetyAndRoadWorkerActivity
            if PublicSafetyAndRoadWorkerActivity.__class__._TYPE_SUPPORT is None:
                PublicSafetyAndRoadWorkerActivity.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PublicSafetyDirectingTrafficSubType
            if PublicSafetyDirectingTrafficSubType.__class__._TYPE_SUPPORT is None:
                PublicSafetyDirectingTrafficSubType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PublicSafetyEventResponderWorkerType
            if PublicSafetyEventResponderWorkerType.__class__._TYPE_SUPPORT is None:
                PublicSafetyEventResponderWorkerType.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TemporaryID
            if TemporaryID.__class__._TYPE_SUPPORT is None:
                TemporaryID.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import UserSizeAndBehaviour
            if UserSizeAndBehaviour.__class__._TYPE_SUPPORT is None:
                UserSizeAndBehaviour.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_ACCEL_SET': cls.__constants['HAS_ACCEL_SET'],
            'HAS_PATH_HISTORY': cls.__constants['HAS_PATH_HISTORY'],
            'HAS_PATH_PREDICTION': cls.__constants['HAS_PATH_PREDICTION'],
            'HAS_PROPULSION': cls.__constants['HAS_PROPULSION'],
            'HAS_USE_STATE': cls.__constants['HAS_USE_STATE'],
            'HAS_CROSS_REQUEST': cls.__constants['HAS_CROSS_REQUEST'],
            'HAS_CROSS_STATE': cls.__constants['HAS_CROSS_STATE'],
            'HAS_CLUSTER_SIZE': cls.__constants['HAS_CLUSTER_SIZE'],
            'HAS_CLUSTER_RADIUS': cls.__constants['HAS_CLUSTER_RADIUS'],
            'HAS_EVENT_RESPONDER_TYPE': cls.__constants['HAS_EVENT_RESPONDER_TYPE'],
            'HAS_ACTIVITY_TYPE': cls.__constants['HAS_ACTIVITY_TYPE'],
            'HAS_ACTIVITY_SUB_TYPE': cls.__constants['HAS_ACTIVITY_SUB_TYPE'],
            'HAS_ASSIST_TYPE': cls.__constants['HAS_ASSIST_TYPE'],
            'HAS_SIZING': cls.__constants['HAS_SIZING'],
            'HAS_ATTACHMENT': cls.__constants['HAS_ATTACHMENT'],
            'HAS_ATTACHMENT_RADIUS': cls.__constants['HAS_ATTACHMENT_RADIUS'],
            'HAS_ANIMAL_TYPE': cls.__constants['HAS_ANIMAL_TYPE'],
            'HAS_REGIONAL_EXTENSION': cls.__constants['HAS_REGIONAL_EXTENSION'],
        }

    @property
    def HAS_ACCEL_SET(self):
        """Message constant 'HAS_ACCEL_SET'."""
        return Metaclass_PSM.__constants['HAS_ACCEL_SET']

    @property
    def HAS_PATH_HISTORY(self):
        """Message constant 'HAS_PATH_HISTORY'."""
        return Metaclass_PSM.__constants['HAS_PATH_HISTORY']

    @property
    def HAS_PATH_PREDICTION(self):
        """Message constant 'HAS_PATH_PREDICTION'."""
        return Metaclass_PSM.__constants['HAS_PATH_PREDICTION']

    @property
    def HAS_PROPULSION(self):
        """Message constant 'HAS_PROPULSION'."""
        return Metaclass_PSM.__constants['HAS_PROPULSION']

    @property
    def HAS_USE_STATE(self):
        """Message constant 'HAS_USE_STATE'."""
        return Metaclass_PSM.__constants['HAS_USE_STATE']

    @property
    def HAS_CROSS_REQUEST(self):
        """Message constant 'HAS_CROSS_REQUEST'."""
        return Metaclass_PSM.__constants['HAS_CROSS_REQUEST']

    @property
    def HAS_CROSS_STATE(self):
        """Message constant 'HAS_CROSS_STATE'."""
        return Metaclass_PSM.__constants['HAS_CROSS_STATE']

    @property
    def HAS_CLUSTER_SIZE(self):
        """Message constant 'HAS_CLUSTER_SIZE'."""
        return Metaclass_PSM.__constants['HAS_CLUSTER_SIZE']

    @property
    def HAS_CLUSTER_RADIUS(self):
        """Message constant 'HAS_CLUSTER_RADIUS'."""
        return Metaclass_PSM.__constants['HAS_CLUSTER_RADIUS']

    @property
    def HAS_EVENT_RESPONDER_TYPE(self):
        """Message constant 'HAS_EVENT_RESPONDER_TYPE'."""
        return Metaclass_PSM.__constants['HAS_EVENT_RESPONDER_TYPE']

    @property
    def HAS_ACTIVITY_TYPE(self):
        """Message constant 'HAS_ACTIVITY_TYPE'."""
        return Metaclass_PSM.__constants['HAS_ACTIVITY_TYPE']

    @property
    def HAS_ACTIVITY_SUB_TYPE(self):
        """Message constant 'HAS_ACTIVITY_SUB_TYPE'."""
        return Metaclass_PSM.__constants['HAS_ACTIVITY_SUB_TYPE']

    @property
    def HAS_ASSIST_TYPE(self):
        """Message constant 'HAS_ASSIST_TYPE'."""
        return Metaclass_PSM.__constants['HAS_ASSIST_TYPE']

    @property
    def HAS_SIZING(self):
        """Message constant 'HAS_SIZING'."""
        return Metaclass_PSM.__constants['HAS_SIZING']

    @property
    def HAS_ATTACHMENT(self):
        """Message constant 'HAS_ATTACHMENT'."""
        return Metaclass_PSM.__constants['HAS_ATTACHMENT']

    @property
    def HAS_ATTACHMENT_RADIUS(self):
        """Message constant 'HAS_ATTACHMENT_RADIUS'."""
        return Metaclass_PSM.__constants['HAS_ATTACHMENT_RADIUS']

    @property
    def HAS_ANIMAL_TYPE(self):
        """Message constant 'HAS_ANIMAL_TYPE'."""
        return Metaclass_PSM.__constants['HAS_ANIMAL_TYPE']

    @property
    def HAS_REGIONAL_EXTENSION(self):
        """Message constant 'HAS_REGIONAL_EXTENSION'."""
        return Metaclass_PSM.__constants['HAS_REGIONAL_EXTENSION']


class PSM(metaclass=Metaclass_PSM):
    """
    Message class 'PSM'.

    Constants:
      HAS_ACCEL_SET
      HAS_PATH_HISTORY
      HAS_PATH_PREDICTION
      HAS_PROPULSION
      HAS_USE_STATE
      HAS_CROSS_REQUEST
      HAS_CROSS_STATE
      HAS_CLUSTER_SIZE
      HAS_CLUSTER_RADIUS
      HAS_EVENT_RESPONDER_TYPE
      HAS_ACTIVITY_TYPE
      HAS_ACTIVITY_SUB_TYPE
      HAS_ASSIST_TYPE
      HAS_SIZING
      HAS_ATTACHMENT
      HAS_ATTACHMENT_RADIUS
      HAS_ANIMAL_TYPE
      HAS_REGIONAL_EXTENSION
    """

    __slots__ = [
        '_presence_vector',
        '_basic_type',
        '_sec_mark',
        '_msg_cnt',
        '_id',
        '_position',
        '_accuracy',
        '_speed',
        '_heading',
        '_accel_set',
        '_path_history',
        '_path_prediction',
        '_propulsion',
        '_use_state',
        '_cross_request',
        '_cross_state',
        '_cluster_size',
        '_cluster_radius',
        '_event_responder_type',
        '_activity_type',
        '_activity_sub_type',
        '_assist_type',
        '_sizing',
        '_attachment',
        '_attachment_radius',
        '_animal_type',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint32',
        'basic_type': 'j2735_v2x_msgs/PersonalDeviceUserType',
        'sec_mark': 'j2735_v2x_msgs/DSecond',
        'msg_cnt': 'j2735_v2x_msgs/MsgCount',
        'id': 'j2735_v2x_msgs/TemporaryID',
        'position': 'carma_v2x_msgs/Position3D',
        'accuracy': 'carma_v2x_msgs/PositionalAccuracy',
        'speed': 'carma_v2x_msgs/Velocity',
        'heading': 'carma_v2x_msgs/Heading',
        'accel_set': 'carma_v2x_msgs/AccelerationSet4Way',
        'path_history': 'carma_v2x_msgs/PathHistory',
        'path_prediction': 'carma_v2x_msgs/PathPrediction',
        'propulsion': 'j2735_v2x_msgs/PropelledInformation',
        'use_state': 'j2735_v2x_msgs/PersonalDeviceUsageState',
        'cross_request': 'j2735_v2x_msgs/PersonalCrossingRequest',
        'cross_state': 'j2735_v2x_msgs/PersonalCrossingInProgress',
        'cluster_size': 'j2735_v2x_msgs/NumberOfParticipantsInCluster',
        'cluster_radius': 'j2735_v2x_msgs/PersonalClusterRadius',
        'event_responder_type': 'j2735_v2x_msgs/PublicSafetyEventResponderWorkerType',
        'activity_type': 'j2735_v2x_msgs/PublicSafetyAndRoadWorkerActivity',
        'activity_sub_type': 'j2735_v2x_msgs/PublicSafetyDirectingTrafficSubType',
        'assist_type': 'j2735_v2x_msgs/PersonalAssistive',
        'sizing': 'j2735_v2x_msgs/UserSizeAndBehaviour',
        'attachment': 'j2735_v2x_msgs/Attachment',
        'attachment_radius': 'carma_v2x_msgs/AttachmentRadius',
        'animal_type': 'j2735_v2x_msgs/AnimalType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PersonalDeviceUserType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'DSecond'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'MsgCount'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TemporaryID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'PositionalAccuracy'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'Velocity'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'Heading'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'AccelerationSet4Way'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'PathHistory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'PathPrediction'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PropelledInformation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PersonalDeviceUsageState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PersonalCrossingRequest'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PersonalCrossingInProgress'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'NumberOfParticipantsInCluster'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PersonalClusterRadius'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PublicSafetyEventResponderWorkerType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PublicSafetyAndRoadWorkerActivity'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PublicSafetyDirectingTrafficSubType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PersonalAssistive'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'UserSizeAndBehaviour'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Attachment'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'AttachmentRadius'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AnimalType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import PersonalDeviceUserType
        self.basic_type = kwargs.get('basic_type', PersonalDeviceUserType())
        from j2735_v2x_msgs.msg import DSecond
        self.sec_mark = kwargs.get('sec_mark', DSecond())
        from j2735_v2x_msgs.msg import MsgCount
        self.msg_cnt = kwargs.get('msg_cnt', MsgCount())
        from j2735_v2x_msgs.msg import TemporaryID
        self.id = kwargs.get('id', TemporaryID())
        from carma_v2x_msgs.msg import Position3D
        self.position = kwargs.get('position', Position3D())
        from carma_v2x_msgs.msg import PositionalAccuracy
        self.accuracy = kwargs.get('accuracy', PositionalAccuracy())
        from carma_v2x_msgs.msg import Velocity
        self.speed = kwargs.get('speed', Velocity())
        from carma_v2x_msgs.msg import Heading
        self.heading = kwargs.get('heading', Heading())
        from carma_v2x_msgs.msg import AccelerationSet4Way
        self.accel_set = kwargs.get('accel_set', AccelerationSet4Way())
        from carma_v2x_msgs.msg import PathHistory
        self.path_history = kwargs.get('path_history', PathHistory())
        from carma_v2x_msgs.msg import PathPrediction
        self.path_prediction = kwargs.get('path_prediction', PathPrediction())
        from j2735_v2x_msgs.msg import PropelledInformation
        self.propulsion = kwargs.get('propulsion', PropelledInformation())
        from j2735_v2x_msgs.msg import PersonalDeviceUsageState
        self.use_state = kwargs.get('use_state', PersonalDeviceUsageState())
        from j2735_v2x_msgs.msg import PersonalCrossingRequest
        self.cross_request = kwargs.get('cross_request', PersonalCrossingRequest())
        from j2735_v2x_msgs.msg import PersonalCrossingInProgress
        self.cross_state = kwargs.get('cross_state', PersonalCrossingInProgress())
        from j2735_v2x_msgs.msg import NumberOfParticipantsInCluster
        self.cluster_size = kwargs.get('cluster_size', NumberOfParticipantsInCluster())
        from j2735_v2x_msgs.msg import PersonalClusterRadius
        self.cluster_radius = kwargs.get('cluster_radius', PersonalClusterRadius())
        from j2735_v2x_msgs.msg import PublicSafetyEventResponderWorkerType
        self.event_responder_type = kwargs.get('event_responder_type', PublicSafetyEventResponderWorkerType())
        from j2735_v2x_msgs.msg import PublicSafetyAndRoadWorkerActivity
        self.activity_type = kwargs.get('activity_type', PublicSafetyAndRoadWorkerActivity())
        from j2735_v2x_msgs.msg import PublicSafetyDirectingTrafficSubType
        self.activity_sub_type = kwargs.get('activity_sub_type', PublicSafetyDirectingTrafficSubType())
        from j2735_v2x_msgs.msg import PersonalAssistive
        self.assist_type = kwargs.get('assist_type', PersonalAssistive())
        from j2735_v2x_msgs.msg import UserSizeAndBehaviour
        self.sizing = kwargs.get('sizing', UserSizeAndBehaviour())
        from j2735_v2x_msgs.msg import Attachment
        self.attachment = kwargs.get('attachment', Attachment())
        from carma_v2x_msgs.msg import AttachmentRadius
        self.attachment_radius = kwargs.get('attachment_radius', AttachmentRadius())
        from j2735_v2x_msgs.msg import AnimalType
        self.animal_type = kwargs.get('animal_type', AnimalType())

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
        if self.basic_type != other.basic_type:
            return False
        if self.sec_mark != other.sec_mark:
            return False
        if self.msg_cnt != other.msg_cnt:
            return False
        if self.id != other.id:
            return False
        if self.position != other.position:
            return False
        if self.accuracy != other.accuracy:
            return False
        if self.speed != other.speed:
            return False
        if self.heading != other.heading:
            return False
        if self.accel_set != other.accel_set:
            return False
        if self.path_history != other.path_history:
            return False
        if self.path_prediction != other.path_prediction:
            return False
        if self.propulsion != other.propulsion:
            return False
        if self.use_state != other.use_state:
            return False
        if self.cross_request != other.cross_request:
            return False
        if self.cross_state != other.cross_state:
            return False
        if self.cluster_size != other.cluster_size:
            return False
        if self.cluster_radius != other.cluster_radius:
            return False
        if self.event_responder_type != other.event_responder_type:
            return False
        if self.activity_type != other.activity_type:
            return False
        if self.activity_sub_type != other.activity_sub_type:
            return False
        if self.assist_type != other.assist_type:
            return False
        if self.sizing != other.sizing:
            return False
        if self.attachment != other.attachment:
            return False
        if self.attachment_radius != other.attachment_radius:
            return False
        if self.animal_type != other.animal_type:
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
    def basic_type(self):
        """Message field 'basic_type'."""
        return self._basic_type

    @basic_type.setter
    def basic_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PersonalDeviceUserType
            assert \
                isinstance(value, PersonalDeviceUserType), \
                "The 'basic_type' field must be a sub message of type 'PersonalDeviceUserType'"
        self._basic_type = value

    @property
    def sec_mark(self):
        """Message field 'sec_mark'."""
        return self._sec_mark

    @sec_mark.setter
    def sec_mark(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import DSecond
            assert \
                isinstance(value, DSecond), \
                "The 'sec_mark' field must be a sub message of type 'DSecond'"
        self._sec_mark = value

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

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from j2735_v2x_msgs.msg import TemporaryID
            assert \
                isinstance(value, TemporaryID), \
                "The 'id' field must be a sub message of type 'TemporaryID'"
        self._id = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import Position3D
            assert \
                isinstance(value, Position3D), \
                "The 'position' field must be a sub message of type 'Position3D'"
        self._position = value

    @property
    def accuracy(self):
        """Message field 'accuracy'."""
        return self._accuracy

    @accuracy.setter
    def accuracy(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import PositionalAccuracy
            assert \
                isinstance(value, PositionalAccuracy), \
                "The 'accuracy' field must be a sub message of type 'PositionalAccuracy'"
        self._accuracy = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import Velocity
            assert \
                isinstance(value, Velocity), \
                "The 'speed' field must be a sub message of type 'Velocity'"
        self._speed = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import Heading
            assert \
                isinstance(value, Heading), \
                "The 'heading' field must be a sub message of type 'Heading'"
        self._heading = value

    @property
    def accel_set(self):
        """Message field 'accel_set'."""
        return self._accel_set

    @accel_set.setter
    def accel_set(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import AccelerationSet4Way
            assert \
                isinstance(value, AccelerationSet4Way), \
                "The 'accel_set' field must be a sub message of type 'AccelerationSet4Way'"
        self._accel_set = value

    @property
    def path_history(self):
        """Message field 'path_history'."""
        return self._path_history

    @path_history.setter
    def path_history(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import PathHistory
            assert \
                isinstance(value, PathHistory), \
                "The 'path_history' field must be a sub message of type 'PathHistory'"
        self._path_history = value

    @property
    def path_prediction(self):
        """Message field 'path_prediction'."""
        return self._path_prediction

    @path_prediction.setter
    def path_prediction(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import PathPrediction
            assert \
                isinstance(value, PathPrediction), \
                "The 'path_prediction' field must be a sub message of type 'PathPrediction'"
        self._path_prediction = value

    @property
    def propulsion(self):
        """Message field 'propulsion'."""
        return self._propulsion

    @propulsion.setter
    def propulsion(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PropelledInformation
            assert \
                isinstance(value, PropelledInformation), \
                "The 'propulsion' field must be a sub message of type 'PropelledInformation'"
        self._propulsion = value

    @property
    def use_state(self):
        """Message field 'use_state'."""
        return self._use_state

    @use_state.setter
    def use_state(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PersonalDeviceUsageState
            assert \
                isinstance(value, PersonalDeviceUsageState), \
                "The 'use_state' field must be a sub message of type 'PersonalDeviceUsageState'"
        self._use_state = value

    @property
    def cross_request(self):
        """Message field 'cross_request'."""
        return self._cross_request

    @cross_request.setter
    def cross_request(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PersonalCrossingRequest
            assert \
                isinstance(value, PersonalCrossingRequest), \
                "The 'cross_request' field must be a sub message of type 'PersonalCrossingRequest'"
        self._cross_request = value

    @property
    def cross_state(self):
        """Message field 'cross_state'."""
        return self._cross_state

    @cross_state.setter
    def cross_state(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PersonalCrossingInProgress
            assert \
                isinstance(value, PersonalCrossingInProgress), \
                "The 'cross_state' field must be a sub message of type 'PersonalCrossingInProgress'"
        self._cross_state = value

    @property
    def cluster_size(self):
        """Message field 'cluster_size'."""
        return self._cluster_size

    @cluster_size.setter
    def cluster_size(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import NumberOfParticipantsInCluster
            assert \
                isinstance(value, NumberOfParticipantsInCluster), \
                "The 'cluster_size' field must be a sub message of type 'NumberOfParticipantsInCluster'"
        self._cluster_size = value

    @property
    def cluster_radius(self):
        """Message field 'cluster_radius'."""
        return self._cluster_radius

    @cluster_radius.setter
    def cluster_radius(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PersonalClusterRadius
            assert \
                isinstance(value, PersonalClusterRadius), \
                "The 'cluster_radius' field must be a sub message of type 'PersonalClusterRadius'"
        self._cluster_radius = value

    @property
    def event_responder_type(self):
        """Message field 'event_responder_type'."""
        return self._event_responder_type

    @event_responder_type.setter
    def event_responder_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PublicSafetyEventResponderWorkerType
            assert \
                isinstance(value, PublicSafetyEventResponderWorkerType), \
                "The 'event_responder_type' field must be a sub message of type 'PublicSafetyEventResponderWorkerType'"
        self._event_responder_type = value

    @property
    def activity_type(self):
        """Message field 'activity_type'."""
        return self._activity_type

    @activity_type.setter
    def activity_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PublicSafetyAndRoadWorkerActivity
            assert \
                isinstance(value, PublicSafetyAndRoadWorkerActivity), \
                "The 'activity_type' field must be a sub message of type 'PublicSafetyAndRoadWorkerActivity'"
        self._activity_type = value

    @property
    def activity_sub_type(self):
        """Message field 'activity_sub_type'."""
        return self._activity_sub_type

    @activity_sub_type.setter
    def activity_sub_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PublicSafetyDirectingTrafficSubType
            assert \
                isinstance(value, PublicSafetyDirectingTrafficSubType), \
                "The 'activity_sub_type' field must be a sub message of type 'PublicSafetyDirectingTrafficSubType'"
        self._activity_sub_type = value

    @property
    def assist_type(self):
        """Message field 'assist_type'."""
        return self._assist_type

    @assist_type.setter
    def assist_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PersonalAssistive
            assert \
                isinstance(value, PersonalAssistive), \
                "The 'assist_type' field must be a sub message of type 'PersonalAssistive'"
        self._assist_type = value

    @property
    def sizing(self):
        """Message field 'sizing'."""
        return self._sizing

    @sizing.setter
    def sizing(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import UserSizeAndBehaviour
            assert \
                isinstance(value, UserSizeAndBehaviour), \
                "The 'sizing' field must be a sub message of type 'UserSizeAndBehaviour'"
        self._sizing = value

    @property
    def attachment(self):
        """Message field 'attachment'."""
        return self._attachment

    @attachment.setter
    def attachment(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Attachment
            assert \
                isinstance(value, Attachment), \
                "The 'attachment' field must be a sub message of type 'Attachment'"
        self._attachment = value

    @property
    def attachment_radius(self):
        """Message field 'attachment_radius'."""
        return self._attachment_radius

    @attachment_radius.setter
    def attachment_radius(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import AttachmentRadius
            assert \
                isinstance(value, AttachmentRadius), \
                "The 'attachment_radius' field must be a sub message of type 'AttachmentRadius'"
        self._attachment_radius = value

    @property
    def animal_type(self):
        """Message field 'animal_type'."""
        return self._animal_type

    @animal_type.setter
    def animal_type(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AnimalType
            assert \
                isinstance(value, AnimalType), \
                "The 'animal_type' field must be a sub message of type 'AnimalType'"
        self._animal_type = value
