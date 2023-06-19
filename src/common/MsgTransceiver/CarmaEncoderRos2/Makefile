# Message Encoder Makefile 
BUILD_ROOT=../../../..
MAKE_ROOT :=$(BUILD_ROOT)/make
include $(MAKE_ROOT)/newheader.mk

INCLUDES    := -I$(J2735_INCL) -I$(COMMON_INCL) -I/opt/ros/noetic/include # tell the compiler where to find the include directories
#LDFLAGS     := -Wl,-rpath=$(J2735_SO_DIR) # tell the linker to add a path to the json shared lib 
#-Wl is used to pass the option(rpath) to the linker --- we probably want to move this into a default rather than a hard coded location
#tell the linker where to find the libraries
LIBS        := -L$(J2735_LIB) -L$(MMITSS_COMMON_LIB) -ldsrc -lasn -lmmitss-common -L/opt/ros/noetic/lib -lroscpp -lrosbag_storage -lrosbag -lrostime -lrosconsole -lroscpp_serialization 


#cpp's go here
SRC += carma-msg-encoder.cpp carma-transceiver-encoder.cpp
#the name of the executable goes here
TARGET = M_CarmaMsgEncoder 

# list the .o's corresponding to .cpp's
# see: https://www.gnu.org/software/make/manual/html_node/Text-Functions.html
OBJECTS = $(patsubst %.cpp, %.o, $(SRC))

include $(MAKE_ROOT)/newrules.mk

