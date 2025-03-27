#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <sstream>
#include <dirent.h>
#include <cstring>
#include <string.h>
#include <chrono>
#include "AsnJ2735Lib.h"
#include "locAware.h"
#include "dsrcConsts.h"
#include <json/json.h>
#include "BasicVehicle.h"
#include "SignalRequest.h"
#include "SignalStatus.h"
#include "ActiveRequest.h"
#include "carma-transceiver-decoder.h"
#include <rosgraph_msgs/msg/clock.hpp>
#include <ctime> // Required for std::time_t
const double KPH_TO_MPS_CONVERSION = 0.277778;
const int RED = 3;
const int YELLOW = 8;
const int GREEN = 6;
const int PERMISSIVE = 7;
const int DONOTWALK = 3;
const int PEDCLEAR = 8;
const int WALK = 6;

TransceiverDecoder::TransceiverDecoder()
{
    std::ofstream outputfile;
    Json::Value jsonObject;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::CharReaderBuilder builder;
    Json::CharReader * reader = builder.newCharReader();
    string errors{};
    reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), &jsonObject, &errors);        
    delete reader;

    applicationPlatform = (jsonObject["ApplicationPlatform"]).asString();
    intersectionName = jsonObject["IntersectionName"].asString();
    // set the time interval for logging the system performance data
    timeInterval = (jsonObject["SystemPerformanceTimeInterval"]).asDouble();
    auto currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    msgSentTime = static_cast<int>(currentTime);
}


std::string TransceiverDecoder::convertMapUperToHexString(std::vector<uint8_t> mapPayload)
{
    std::stringstream ss{};
    std::string payload{};
    ss << std::hex;

    for (size_t i = 0; i < mapPayload.size(); i++)
        // ss << std::uppercase << std::setfill('0') << std::setw(2)  << static_cast<unsigned int>(mapPayload.at(i));
        ss << std::setfill('0') << std::setw(2)  << static_cast<unsigned int>(mapPayload.at(i));
    payload = ss.str();

    return payload;
}

string TransceiverDecoder::createJsonStringOfMapPayload(string mapPayload)
{
    std::ofstream outputfile;
    string fmap{};
    string intersection_Name{};
    string mapName{};
    int intersectionID{};
    bool singleFrame = false;
    string deleteFileName = "Map.map.payload";
    string jsonString{};

    Json::Value jsonObject_config;
    std::ifstream configJson("/nojournal/bin/mmitss-phase3-master-config.json");
    string configJsonString((std::istreambuf_iterator<char>(configJson)), std::istreambuf_iterator<char>());
    Json::CharReaderBuilder builder;
    Json::CharReader * reader = builder.newCharReader();
    string errors{};
    reader->parse(configJsonString.c_str(), configJsonString.c_str() + configJsonString.size(), &jsonObject_config, &errors);        
    delete reader;

    Json::Value jsonObject;
	Json::StreamWriterBuilder writeBuilder;
	writeBuilder["commentStyle"] = "None";
	writeBuilder["indentation"] = "";

    outputfile.open("Map.map.payload");
    outputfile << "payload"
               << " "
               << "Map"
               << " " << mapPayload << std::endl;
    outputfile.close();

    fmap = "Map.map.payload";
    intersection_Name = "Map";

    /// instance class LocAware (Map Engine)
    LocAware *plocAwareLib = new LocAware(fmap, singleFrame);
    intersectionID = plocAwareLib->getIntersectionIdByName(intersection_Name);
    mapName = "Map" + std::to_string(intersectionID);
    jsonObject["MsgType"] = "MAP";
    jsonObject["IntersectionName"] = mapName;
    jsonObject["MapPayload"] = mapPayload;
    jsonObject["IntersectionID"] = intersectionID;
    jsonString = Json::writeString(writeBuilder, jsonObject);

    remove(deleteFileName.c_str());
    delete plocAwareLib;

    mapMsgCount = mapMsgCount + 1;

    return jsonString;
}


string TransceiverDecoder::bsmDecoder(std::vector<uint8_t> bsmPayload)
{
    BasicVehicle basicVehicle;
    string jsonString{};

    /// dsrcFrameOut to store UPER decoding result
    Frame_element_t dsrcFrameOut;
    
    size_t payload_size = bsmPayload.size();
    if (payload_size > 0 && (AsnJ2735Lib::decode_msgFrame(bsmPayload.data(), payload_size, dsrcFrameOut) > 0) && (dsrcFrameOut.dsrcMsgId == MsgEnum::DSRCmsgID_bsm))
    {
        BSM_element_t &bsmOut = dsrcFrameOut.bsm;
        basicVehicle.setTemporaryID(bsmOut.id);
        basicVehicle.setSecMark_Second((bsmOut.timeStampSec) / 1000.0);
        basicVehicle.setPosition(DsrcConstants::damega2unit<int32_t>(bsmOut.latitude), DsrcConstants::damega2unit<int32_t>(bsmOut.longitude), DsrcConstants::deca2unit<int32_t>(bsmOut.elevation));
        basicVehicle.setSpeed_MeterPerSecond(round(DsrcConstants::unit2kph<uint16_t>(bsmOut.speed) * KPH_TO_MPS_CONVERSION));
        basicVehicle.setHeading_Degree(round(DsrcConstants::unit2heading<uint16_t>(bsmOut.heading)));
        basicVehicle.setType("0");
        basicVehicle.setLength_cm(bsmOut.vehLen);
        basicVehicle.setWidth_cm(bsmOut.vehWidth);
        jsonString = basicVehicle.basicVehicle2Json();
    }

    bsmMsgCount = bsmMsgCount + 1;

    return jsonString;
}


string TransceiverDecoder::srmDecoder(std::vector<uint8_t> srmPayload)
{
    SignalRequest signalRequest;
    string jsonString{};
    /// dsrcFrameOut to store UPER decoding result
    Frame_element_t dsrcFrameOut;
   
    size_t payload_size = srmPayload.size();
    if (payload_size > 0 && (AsnJ2735Lib::decode_msgFrame(srmPayload.data(), payload_size, dsrcFrameOut) > 0) && (dsrcFrameOut.dsrcMsgId == MsgEnum::DSRCmsgID_srm))
    {
        SRM_element_t &srmOut = dsrcFrameOut.srm;

        signalRequest.setMsgCount(static_cast<unsigned int>(srmOut.msgCnt));
        signalRequest.setMinuteOfYear(srmOut.timeStampMinute);
        signalRequest.setMsOfMinute(srmOut.timeStampSec);
        signalRequest.setRegionalID(srmOut.regionalId);
        signalRequest.setIntersectionID(srmOut.intId);
        signalRequest.setRequestID(static_cast<unsigned int>(srmOut.reqId));
        signalRequest.setPriorityRequestType(static_cast<unsigned int>(srmOut.reqType));
        signalRequest.setInBoundLaneIntersectionAccessPoint(static_cast<unsigned int>(srmOut.inLaneId), static_cast<unsigned int>(srmOut.inApprochId));
        signalRequest.setETA(srmOut.ETAminute, srmOut.ETAsec, srmOut.duration);
        signalRequest.setTemporaryVechileID(srmOut.vehId);
        signalRequest.setBasicVehicleRole(static_cast<unsigned int>(srmOut.vehRole));
        signalRequest.setPosition(DsrcConstants::damega2unit<int32_t>(srmOut.latitude), DsrcConstants::damega2unit<int32_t>(srmOut.longitude), DsrcConstants::deca2unit<int32_t>(srmOut.elevation));
        signalRequest.setHeading_Degree(round(DsrcConstants::unit2heading<uint16_t>(srmOut.heading)));
        signalRequest.setSpeed_MeterPerSecond(round(DsrcConstants::unit2kph<uint16_t>(srmOut.speed) * KPH_TO_MPS_CONVERSION));
        // signalRequest.setVehicleType(static_cast<unsigned int>(srmOut.vehType));

        jsonString = signalRequest.signalRequest2Json();
    }

    return jsonString;
}

string TransceiverDecoder::decodeClock(const rosgraph_msgs::msg::Clock::SharedPtr msg)
{
    Json::Value jsonObject;
    jsonObject["timestep"] = int(msg->clock.sec*1000 + msg->clock.nanosec * 1e-6);
    jsonObject["seq"] = 0;
    Json::StreamWriterBuilder builder;
    builder["commentStyle"] = "None";   
    builder["indentation"] = "";
    string jsonString = Json::writeString(builder, jsonObject);
    return jsonString;
}

string TransceiverDecoder::ssmDecoder(std::vector<uint8_t> ssmPayload)
{
    SignalStatus signalStatus;
    std::vector<ActiveRequest> ActiveRequestTable;
    ActiveRequest activeRequest;

    string jsonString{};
    /// dsrcFrameOut to store UPER decoding result
    Frame_element_t dsrcFrameOut;
   
    size_t payload_size = ssmPayload.size();
    if (payload_size > 0 && (AsnJ2735Lib::decode_msgFrame(ssmPayload.data(), payload_size, dsrcFrameOut) > 0) && (dsrcFrameOut.dsrcMsgId == MsgEnum::DSRCmsgID_ssm))
    {
        SSM_element_t &ssmOut = dsrcFrameOut.ssm;

        signalStatus.setMinuteOfYear(ssmOut.timeStampMinute);
        signalStatus.setMsOfMinute(ssmOut.timeStampSec);
        signalStatus.setSequenceNumber(static_cast<unsigned int>(ssmOut.msgCnt));
        signalStatus.setUpdateCount(static_cast<unsigned int>(ssmOut.updateCnt));
        signalStatus.setRegionalID(ssmOut.regionalId);
        signalStatus.setIntersectionID(ssmOut.id);
        signalStatus.setNoOfRequest(unsigned(ssmOut.mpSignalRequetStatus.size()));

        for (size_t i = 0; i < ssmOut.mpSignalRequetStatus.size(); i++)
        {
            activeRequest.vehicleID = ssmOut.mpSignalRequetStatus[i].vehId;
            activeRequest.requestID = static_cast<unsigned int>(ssmOut.mpSignalRequetStatus[i].reqId);
            activeRequest.msgCount = static_cast<unsigned int>(ssmOut.mpSignalRequetStatus[i].sequenceNumber);
            activeRequest.basicVehicleRole = static_cast<unsigned int>(ssmOut.mpSignalRequetStatus[i].vehRole);
            activeRequest.vehicleLaneID = static_cast<unsigned int>(ssmOut.mpSignalRequetStatus[i].inLaneId);
            activeRequest.vehicleETA = ssmOut.mpSignalRequetStatus[i].ETAminute * 60.0 + ssmOut.mpSignalRequetStatus[i].ETAsec;
            activeRequest.vehicleETADuration = ssmOut.mpSignalRequetStatus[i].duration;
            activeRequest.prsStatus = static_cast<unsigned int>(ssmOut.mpSignalRequetStatus[i].status);
            ActiveRequestTable.push_back(activeRequest);
        }

        signalStatus.setTemporaryVechileID(ActiveRequestTable);
        signalStatus.setRequestID(ActiveRequestTable);
        signalStatus.setMsgCount(ActiveRequestTable);
        signalStatus.setBasicVehicleRole(ActiveRequestTable);
        signalStatus.setInBoundLaneIntersectionAccessPoint(ActiveRequestTable);
        signalStatus.setETA(ActiveRequestTable);
        signalStatus.setPriorityRequestStatus(ActiveRequestTable);

        jsonString = signalStatus.signalStatus2Json(ActiveRequestTable);
    }

    ssmMsgCount = ssmMsgCount + 1;

    return jsonString;
}



string TransceiverDecoder::spatDecoder(std::vector<uint8_t> spatPayload)
{
    string jsonString{};
    /// dsrcFrameOut to store UPER decoding result
    Frame_element_t dsrcFrameOut;

    size_t payload_size = spatPayload.size();
    if (payload_size > 0 && (AsnJ2735Lib::decode_msgFrame(spatPayload.data(), payload_size, dsrcFrameOut) > 0) && (dsrcFrameOut.dsrcMsgId == MsgEnum::DSRCmsgID_spat))
    {
        SPAT_element_t &spatOut = dsrcFrameOut.spat;

        Json::Value jsonObject;
        Json::StreamWriterBuilder builder;
        builder["commentStyle"] = "None";
        builder["indentation"] = "";
        int currVehPhaseState{};
        int currPedPhaseState{};
        std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        jsonObject["MsgType"] = "SPaT";
        jsonObject["Timestamp_posix"] = currentTime/1000.0;
        jsonObject["Timestamp_verbose"] = currentTime/1000.0;
        jsonObject["Spat"]["IntersectionState"]["regionalID"] = spatOut.regionalId;
        jsonObject["Spat"]["IntersectionState"]["intersectionID"] = spatOut.id;
        jsonObject["Spat"]["msgCnt"] = static_cast<unsigned int>(spatOut.msgCnt);
        jsonObject["Spat"]["minuteOfYear"] = spatOut.timeStampMinute;
        jsonObject["Spat"]["msOfMinute"] = spatOut.timeStampSec;
        jsonObject["Spat"]["status"] = spatOut.status.to_string();

        int vehListLocation = 0;
        for (int i = 0; i < 8; i++)
        {
            if (spatOut.permittedPhases.test(i))
            {
                const auto &phaseState = spatOut.phaseState[i];
                jsonObject["Spat"]["phaseState"][vehListLocation]["phaseNo"] = (i + 1);
                jsonObject["Spat"]["phaseState"][vehListLocation]["startTime"] = phaseState.startTime;
                jsonObject["Spat"]["phaseState"][vehListLocation]["minEndTime"] = phaseState.minEndTime;
                jsonObject["Spat"]["phaseState"][vehListLocation]["maxEndTime"] = phaseState.maxEndTime;
                jsonObject["Spat"]["phaseState"][vehListLocation]["elapsedTime"] = -1;
                currVehPhaseState = static_cast<unsigned int>(phaseState.currState);
                if (currVehPhaseState == RED)
                    jsonObject["Spat"]["phaseState"][vehListLocation]["currState"] = "red";
                else if (currVehPhaseState == YELLOW)
                    jsonObject["Spat"]["phaseState"][vehListLocation]["currState"] = "yellow";
                else if (currVehPhaseState == GREEN)
                    jsonObject["Spat"]["phaseState"][vehListLocation]["currState"] = "green";
                else if (currVehPhaseState == PERMISSIVE)
                    jsonObject["Spat"]["phaseState"][vehListLocation]["currState"] = "permissive_yellow";
                vehListLocation += 1;
            }
        }

        int pedListLocation = 0;
        for (int i = 0; i < 8; i++)
        {
            if (spatOut.permittedPedPhases.test(i))
            {
                const auto &phaseState = spatOut.pedPhaseState[i];
                int phaseNo = 0;

                if (i == 4)
                {
                    phaseNo = 2;
                }
                else if (i == 5)
                {
                    phaseNo = 4;
                }
                else if (i == 6)
                {
                    phaseNo = 6;
                }
                else if (i == 7)
                {
                    phaseNo = 8;
                }
                else
                {
                    std::cout << "Invalid pedestrian phase" << std::endl;
                    phaseNo = i+1;
                }


                jsonObject["Spat"]["pedPhaseState"][pedListLocation]["phaseNo"] = phaseNo;
                jsonObject["Spat"]["pedPhaseState"][pedListLocation]["startTime"] = phaseState.startTime;
                jsonObject["Spat"]["pedPhaseState"][pedListLocation]["minEndTime"] = phaseState.minEndTime;
                jsonObject["Spat"]["pedPhaseState"][pedListLocation]["maxEndTime"] = phaseState.maxEndTime;
                jsonObject["Spat"]["pedPhaseState"][pedListLocation]["elapsedTime"] = -1;
                currPedPhaseState = static_cast<unsigned int>(phaseState.currState);
                if (currPedPhaseState == DONOTWALK)
                    jsonObject["Spat"]["pedPhaseState"][pedListLocation]["currState"] = "do_not_walk";
                else if (currPedPhaseState == PEDCLEAR)
                    jsonObject["Spat"]["pedPhaseState"][pedListLocation]["currState"] = "ped_clear";
                else if (currPedPhaseState == WALK)
                    jsonObject["Spat"]["pedPhaseState"][pedListLocation]["currState"] = "walk";
                pedListLocation += 1;
            }
        }

        jsonString = Json::writeString(builder, jsonObject);

        spatMsgCount = spatMsgCount + 1;
    }
    return jsonString;
    
}

bool TransceiverDecoder::sendSystemPerformanceDataLog()
{
    bool sendData{false};
    double currenTime{}; 
    currenTime = static_cast<double>(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()));

    if (currenTime - msgSentTime >= timeInterval)
        sendData = true;

    return sendData;
}

string TransceiverDecoder::createJsonStringForSystemPerformanceDataLog(string msgCountType)
{
    string systemPerformanceDataLogJsonString{};
    Json::Value jsonObject;
	Json::StreamWriterBuilder builder;
	builder["commentStyle"] = "None";
	builder["indentation"] = "";
    std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    jsonObject["MsgType"] = "MsgCount";
    jsonObject["MsgInformation"]["TimeInterval"] = timeInterval;
    jsonObject["MsgInformation"]["Timestamp_posix"] = currentTime/1000.0;
    jsonObject["MsgInformation"]["Timestamp_verbose"] = currentTime/1000.0;
    jsonObject["MsgInformation"]["MsgCountType"] = msgCountType;
    
    if (applicationPlatform == "roadside")
    {
        jsonObject["MsgInformation"]["MsgSource"] = intersectionName;
        jsonObject["MsgInformation"]["MsgServed"] = "NA";
        jsonObject["MsgInformation"]["MsgRejected"] = "NA";
    }

    else if (applicationPlatform == "vehicle")
        jsonObject["MsgInformation"]["MsgSource"] = "vehicle";

    if (msgCountType == "RemoteBSM")
    {
        jsonObject["MsgInformation"]["MsgCount"] = bsmMsgCount;
        bsmMsgCount = 0;
    }

    else if (msgCountType == "HostBSM")
    {
        jsonObject["MsgInformation"]["MsgCount"] = bsmMsgCount;
        bsmMsgCount = 0;
    }

    else if (msgCountType == "SRM")
    {
        jsonObject["MsgInformation"]["MsgCount"] = srmMsgCount;
        srmMsgCount = 0;
    }

    else if (msgCountType == "SSM")
    {
        jsonObject["MsgInformation"]["MsgCount"] = ssmMsgCount;
        ssmMsgCount = 0;
    }

    else if (msgCountType == "MAP")
    {
        jsonObject["MsgInformation"]["MsgCount"] = mapMsgCount;
        mapMsgCount = 0;
    }

    else if (msgCountType == "SPaT")
    {
        jsonObject["MsgInformation"]["MsgCount"] = spatMsgCount;
        spatMsgCount = 0;
    }

    systemPerformanceDataLogJsonString = Json::writeString(builder, jsonObject);;

    msgSentTime = static_cast<int>(currentTime);

    return systemPerformanceDataLogJsonString;
}

string TransceiverDecoder::getApplicationPlatform()
{
    return applicationPlatform;
}

TransceiverDecoder::~TransceiverDecoder()
{
}
