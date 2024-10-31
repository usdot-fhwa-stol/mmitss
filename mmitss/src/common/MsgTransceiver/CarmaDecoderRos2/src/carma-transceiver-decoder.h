#pragma once
#include <iostream>
#include <iomanip>
#include <chrono>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::showpoint;
using std::setprecision;

class TransceiverDecoder
{
    private:
        int messageType;
        string sendingJsonString;
        string MAPIdentifier ="0012";
        string BSMIdentifier = "0014";
        string SRMIdentifier_UpperCase = "001D";
        string SRMIdentifier_LowerCase = "001d";
        string SPaTIdentifier = "0013";
        string SSMIdentifier_UpperCase = "001E";
        string SSMIdentifier_LowerCase = "001e";
        int bsmMsgCount{};
        int srmMsgCount{};
        int ssmMsgCount{};
        int mapMsgCount{};
        int spatMsgCount{};
        int msgSentTime{};
        double timeInterval{0.0};
        string applicationPlatform{};
        string intersectionName{};

    public:
        TransceiverDecoder();
        ~TransceiverDecoder();
        
        //int getMessageType(string payload);
        string convertMapUperToHexString(std::vector<uint8_t> mapPayload);
        string createJsonStringOfMapPayload(string mapPayload);
        string bsmDecoder (std::vector<uint8_t> bsmPayload);
        string srmDecoder(std::vector<uint8_t> srmPayload);
        string ssmDecoder(std::vector<uint8_t> ssmPayload);
        string spatDecoder(std::vector<uint8_t> spatPayload);
        string createJsonStringForSystemPerformanceDataLog(string msgCountType);
        string getApplicationPlatform();
        bool sendSystemPerformanceDataLog();
};
