
FROM ubuntu:20.04 AS mmitss-base

ENV DEBIAN_FRONTEND=noninteractive
RUN mkdir -p /mmitss
COPY --chmod=777 build/dockerfiles/x86/scripts/carma_time_lib.sh /mmitss
RUN /mmitss/carma_time_lib.sh
# perform a sysupgrade and install some necessary packages -
RUN apt-get update && apt-get install -y apt-utils supervisor iputils-ping net-tools tzdata
COPY . /mmitss/tmp/
WORKDIR  /mmitss/tmp/src/common
RUN make linux
RUN mkdir -p /var/log/supervisor

COPY lib/x86/system/libssl.so.1.1 /usr/lib/x86_64-linux-gnu/
COPY lib/x86/system/libcrypto.so.1.1 /usr/lib/x86_64-linux-gnu/


# Add the shared libraries mmitss needs in order to run
COPY 3rdparty/net-snmp/lib/x86/libnetsnmp.so.35.0.0 /usr/local/lib/mmitss/
COPY 3rdparty/glpk/lib/x86/libglpk.so.35.1.0 /usr/local/lib/mmitss/
COPY lib/x86/libmmitss-common.so /usr/local/lib/mmitss/
COPY 3rdparty/mapengine/lib/x86/liblocAware.so.1.0 /usr/local/lib/mmitss/
COPY 3rdparty/asn1j2735/lib/x86/libasn.so.1.0 /usr/local/lib/mmitss/
COPY 3rdparty/asn1j2735/lib/x86/libdsrc.so.1.0 /usr/local/lib/mmitss/
COPY lib/mmitss.conf /etc/ld.so.conf.d/
# Create the symbolic links for the copied libraries."
RUN ln -s /usr/local/lib/mmitss/libnetsnmp.so.35.0.0 /usr/local/lib/mmitss/libnetsnmp.so.35 && ln -s /usr/local/lib/mmitss/libglpk.so.35.1.0 /usr/local/lib/mmitss/libglpk.so.35 
RUN ln -s /usr/local/lib/mmitss/liblocAware.so.1.0 /usr/local/lib/mmitss/liblocAware.so && ln -s /usr/local/lib/mmitss/libasn.so.1.0 /usr/local/lib/mmitss/libasn.so 
RUN ln -s /usr/local/lib/mmitss/libdsrc.so.1.0 /usr/local/lib/mmitss/libdsrc.so
# Alpine - RUN ldconfig /etc/ld.so.conf.d/
RUN ldconfig
RUN echo "building "
RUN /mmitss/tmp/build/scripts/setup-build-environment-ci.sh
WORKDIR /mmitss/tmp/src/mrp/snmp-engine
RUN make linux
RUN /mmitss/tmp/build/scripts/build-mmitss-ci.sh

RUN mkdir /var/net-snmp
RUN mkdir /var/net-snmp/mib_indexes

WORKDIR /mmitss

# Environment variables
ENV PATH $PATH:/mmitss
ENV MIBS=ALL
ENV LD_LIBRARY_PATH /opt/carma/lib/

FROM mmitss-base AS mmitss-mrp

SHELL ["/bin/bash", "-c"]

WORKDIR /mmitss
COPY --from=mmitss-base /src/common/MsgTransceiver/CarmaKafkaTransceiver /mmitss/CarmaKafkaTransceiver

WORKDIR /mmitss/script
COPY --from=mmitss-base /mmitss/tmp/build/dockerfiles/x86/scripts/install_env_mrp.sh /mmitss/script
COPY --from=mmitss-base /mmitss/tmp/build/dockerfiles/x86/scripts/runKafkaTransceiver.sh /mmitss/script

RUN chmod 777 runKafkaTransceiver.sh 
RUN chmod 777 install_env_mrp.sh
RUN ./install_env_mrp.sh


WORKDIR /mmitss
# RUN ls

COPY --from=mmitss-base /mmitss/tmp/build/bin/TrafficControllerInterface/x86/M_TrafficControllerInterface /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/PriorityRequestSolver/x86/M_PriorityRequestSolver /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/PriorityRequestServer/x86/M_PriorityRequestServer /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/SnmpEngine/x86/M_SnmpEngine /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/MapSpatBroadcaster/x86/M_MapSpatBroadcaster /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/SystemInterface/x86/M_SystemInterface /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/V2XDataCollector/x86/M_V2XDataCollector /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/V2XDataTransfer/x86/M_V2XDataTransfer /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/SignalCoordinationRequestGenerator/x86/M_SignalCoordinationRequestGenerator /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/TrajectoryAware/x86/M_TrajectoryAware /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/TimePhaseDiagramTool/x86/M_TimePhaseDiagramTool /mmitss

ENTRYPOINT ["/usr/bin/supervisord", "--configuration=/nojournal/bin/supervisord.conf"]

FROM mmitss-base AS mmitss-vsp
SHELL ["/bin/bash", "-c"]

WORKDIR /root/dev_ws/src

WORKDIR /mmitss/script
COPY --from=mmitss-base /mmitss/tmp/build/dockerfiles/x86/scripts/install_carma_msgs.sh /mmitss/script

RUN chmod 777 install_carma_msgs.sh
RUN ./install_carma_msgs.sh

WORKDIR /mmitss/tmp
COPY . /mmitss/tmp
RUN ls

WORKDIR /mmitss/script

COPY --from=mmitss-base /mmitss/tmp/build/dockerfiles/x86/scripts/build_vsp_ros2_transceivers.sh /mmitss/script
RUN chmod 777 build_vsp_ros2_transceivers.sh
RUN ./build_vsp_ros2_transceivers.sh

COPY --from=mmitss-base /mmitss/tmp/build/dockerfiles/x86/scripts/runCarmaDecoder.sh /mmitss/script
RUN chmod 777 runCarmaDecoder.sh
COPY --from=mmitss-base /mmitss/tmp/build/dockerfiles/x86/scripts/runCarmaEncoder.sh /mmitss/script
RUN chmod 777 runCarmaEncoder.sh

ENV RMW_IMPLEMENTATION=rmw_cyclonedds_cpp

# add build script on MMITSS carmaMsage 

# COPY build/bin/CarmaDecoderRos2/x86/M_CarmaMsgDecoder /mmitss
# COPY build/bin/CarmaEncoderRos2/x86/M_CarmaMsgEncoder /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/PriorityRequestGenerator/x86/M_PriorityRequestGenerator /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/LightSirenStatusManager/x86/M_LightSirenStatusManager /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/LightSirenStatusManager/images /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/SystemInterface/x86/M_SystemInterface /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/V2XDataCollector/x86/M_V2XDataCollector /mmitss
COPY --from=mmitss-base /mmitss/tmp/build/bin/DataCompressor/x86/M_DataCompressor /mmitss

WORKDIR /mmitss

ENTRYPOINT ["/usr/bin/supervisord", "--configuration=/nojournal/bin/supervisord.conf"]


