# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_msgs:msg/LightBarIndicatorControllers.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LightBarIndicatorControllers(type):
    """Metaclass of message 'LightBarIndicatorControllers'."""

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
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.msg.LightBarIndicatorControllers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__light_bar_indicator_controllers
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__light_bar_indicator_controllers
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__light_bar_indicator_controllers
            cls._TYPE_SUPPORT = module.type_support_msg__msg__light_bar_indicator_controllers
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__light_bar_indicator_controllers

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LightBarIndicatorControllers(metaclass=Metaclass_LightBarIndicatorControllers):
    """Message class 'LightBarIndicatorControllers'."""

    __slots__ = [
        '_green_solid_owner',
        '_green_flash_owner',
        '_yellow_sides_owner',
        '_yellow_dim_owner',
        '_yellow_flash_owner',
        '_yellow_arrow_left_owner',
        '_yellow_arrow_right_owner',
        '_yellow_arrow_out_owner',
    ]

    _fields_and_field_types = {
        'green_solid_owner': 'string',
        'green_flash_owner': 'string',
        'yellow_sides_owner': 'string',
        'yellow_dim_owner': 'string',
        'yellow_flash_owner': 'string',
        'yellow_arrow_left_owner': 'string',
        'yellow_arrow_right_owner': 'string',
        'yellow_arrow_out_owner': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.green_solid_owner = kwargs.get('green_solid_owner', str())
        self.green_flash_owner = kwargs.get('green_flash_owner', str())
        self.yellow_sides_owner = kwargs.get('yellow_sides_owner', str())
        self.yellow_dim_owner = kwargs.get('yellow_dim_owner', str())
        self.yellow_flash_owner = kwargs.get('yellow_flash_owner', str())
        self.yellow_arrow_left_owner = kwargs.get('yellow_arrow_left_owner', str())
        self.yellow_arrow_right_owner = kwargs.get('yellow_arrow_right_owner', str())
        self.yellow_arrow_out_owner = kwargs.get('yellow_arrow_out_owner', str())

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
        if self.green_solid_owner != other.green_solid_owner:
            return False
        if self.green_flash_owner != other.green_flash_owner:
            return False
        if self.yellow_sides_owner != other.yellow_sides_owner:
            return False
        if self.yellow_dim_owner != other.yellow_dim_owner:
            return False
        if self.yellow_flash_owner != other.yellow_flash_owner:
            return False
        if self.yellow_arrow_left_owner != other.yellow_arrow_left_owner:
            return False
        if self.yellow_arrow_right_owner != other.yellow_arrow_right_owner:
            return False
        if self.yellow_arrow_out_owner != other.yellow_arrow_out_owner:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def green_solid_owner(self):
        """Message field 'green_solid_owner'."""
        return self._green_solid_owner

    @green_solid_owner.setter
    def green_solid_owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'green_solid_owner' field must be of type 'str'"
        self._green_solid_owner = value

    @property
    def green_flash_owner(self):
        """Message field 'green_flash_owner'."""
        return self._green_flash_owner

    @green_flash_owner.setter
    def green_flash_owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'green_flash_owner' field must be of type 'str'"
        self._green_flash_owner = value

    @property
    def yellow_sides_owner(self):
        """Message field 'yellow_sides_owner'."""
        return self._yellow_sides_owner

    @yellow_sides_owner.setter
    def yellow_sides_owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yellow_sides_owner' field must be of type 'str'"
        self._yellow_sides_owner = value

    @property
    def yellow_dim_owner(self):
        """Message field 'yellow_dim_owner'."""
        return self._yellow_dim_owner

    @yellow_dim_owner.setter
    def yellow_dim_owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yellow_dim_owner' field must be of type 'str'"
        self._yellow_dim_owner = value

    @property
    def yellow_flash_owner(self):
        """Message field 'yellow_flash_owner'."""
        return self._yellow_flash_owner

    @yellow_flash_owner.setter
    def yellow_flash_owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yellow_flash_owner' field must be of type 'str'"
        self._yellow_flash_owner = value

    @property
    def yellow_arrow_left_owner(self):
        """Message field 'yellow_arrow_left_owner'."""
        return self._yellow_arrow_left_owner

    @yellow_arrow_left_owner.setter
    def yellow_arrow_left_owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yellow_arrow_left_owner' field must be of type 'str'"
        self._yellow_arrow_left_owner = value

    @property
    def yellow_arrow_right_owner(self):
        """Message field 'yellow_arrow_right_owner'."""
        return self._yellow_arrow_right_owner

    @yellow_arrow_right_owner.setter
    def yellow_arrow_right_owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yellow_arrow_right_owner' field must be of type 'str'"
        self._yellow_arrow_right_owner = value

    @property
    def yellow_arrow_out_owner(self):
        """Message field 'yellow_arrow_out_owner'."""
        return self._yellow_arrow_out_owner

    @yellow_arrow_out_owner.setter
    def yellow_arrow_out_owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yellow_arrow_out_owner' field must be of type 'str'"
        self._yellow_arrow_out_owner = value
