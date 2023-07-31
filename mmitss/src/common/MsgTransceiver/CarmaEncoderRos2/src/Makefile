# Message Encoder Makefile 
BUILD_ROOT=../../../../..
OTHER_ROOT=../../../../../../other
MAKE_ROOT :=$(BUILD_ROOT)/make
include $(MAKE_ROOT)/newheader.mk

INCLUDES    := -I$(J2735_INCL) -I$(COMMON_INCL) -I/opt/ros/foxy/include -I/opt/ros/foxy/lib -I${OTHER_ROOT}/install/carma_driver_msgs/include # tell the compiler where to find the include directories
#LDFLAGS     := -Wl,-rpath=$(J2735_SO_DIR) # tell the linker to add a path to the json shared lib 
#-Wl is used to pass the option(rpath) to the linker --- we probably want to move this into a default rather than a hard coded location
#tell the linker where to find the libraries
LIBS        := -L$(J2735_LIB) -L$(MMITSS_COMMON_LIB) -ldsrc -lasn -lmmitss-common -L/opt/ros/foxy/lib -lament_index_cpp -lrclcpp -lrmw -lrcutils -lrcl -ltracetools -llibstatistics_collector\
-L${OTHER_ROOT}/install/carma_driver_msgs/lib -lcarma_driver_msgs__rosidl_typesupport_cpp -lstatistics_msgs__rosidl_typesupport_cpp 


#cpp's go here
SRC += carma-msg-encoder.cpp carma-transceiver-encoder.cpp
#the name of the executable goes here
TARGET = M_CarmaMsgEncoder 

# list the .o's corresponding to .cpp's
# see: https://www.gnu.org/software/make/manual/html_node/Text-Functions.html
OBJECTS = $(patsubst %.cpp, %.o, $(SRC))

include $(MAKE_ROOT)/newrules.mk

