cmake_minimum_required(VERSION 3.5)
project(carma-ros2-decoder)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

find_package(rclcpp REQUIRED)
find_package(carma_driver_msgs REQUIRED)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()



# file(GLOB subdirectories "${CMAKE_CURRENT_SOURCE_DIR}/../../../3rdparty/*")
# foreach(subdirectory ${subdirectories})
#   file(GLOB subSubdirectories "${subdirectory}/*")
#     foreach(sub ${subSubdirectories})
      
#       string(FIND ${sub} "include" substring_index)
#       if(substring_index EQUAL -1)
#         # Substring not found
        
#       else()
#         # Substring found
#         if(IS_DIRECTORY ${sub})
#           include_directories(${sub})
#         endif()
#       endif()
#     endforeach()
    
#   if(IS_DIRECTORY ${subdirectory})
#     include_directories(${subdirectory})
#   endif()
# endforeach()


# add_library(
#     CarmaDecoderRos2
#     src/carma-inbound-listener.cpp
#     src/carma-msg-decoder.cpp
#     src/carma-outbound-listener.cpp
#     src/carma-transceiver-decoder.cpp)


# target_include_directories(
#   CarmaDecoderRos2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../../include
#   ${CMAKE_CURRENT_SOURCE_DIR}/../../../include/common
#   ${CMAKE_CURRENT_SOURCE_DIR}/../../../include/libj2735
#   ${CMAKE_CURRENT_SOURCE_DIR}/../../../3rdparty/asn1j2735/include
#   ${CMAKE_CURRENT_SOURCE_DIR}/../../../3rdparty/glpk/include
#   ${CMAKE_CURRENT_SOURCE_DIR}/../../../3rdparty/mapengine/include
#   ${CMAKE_CURRENT_SOURCE_DIR}/../../../3rdparty/net-snmp)

# ament_target_dependencies(CarmaDecoderRos2 rclcpp carma_driver_msgs)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../../../include
${CMAKE_CURRENT_SOURCE_DIR}/../../../../include/common
${CMAKE_CURRENT_SOURCE_DIR}/../../../../include/libj2735
${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/asn1j2735/include
${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/glpk/include
${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/mapengine/include
${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/net-snmp
${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/jsoncpp
)
link_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../../lib/x86
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/asn1j2735/lib/x86
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/glpk/lib/x86
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/mapengine/lib/x86
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../../3rdparty/net-snmp/lib/x86 
)

add_executable(M_CarmaMsgDecoder src/carma-inbound-listener.cpp
                                 src/carma-msg-decoder.cpp
                                 src/carma-outbound-listener.cpp
                                 src/carma-transceiver-decoder.cpp)

ament_target_dependencies(M_CarmaMsgDecoder rclcpp carma_driver_msgs)
# target_link_libraries(M_CarmaMsgDecoder ${rclcpp_LIBRARIES} ${carma_driver_msgs_LIBRARIES}  )
target_link_libraries(M_CarmaMsgDecoder
  locAware
  dsrc
  asn
  mmitss-common
)

install(
    TARGETS
    
    M_CarmaMsgDecoder
    LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  )


ament_package()