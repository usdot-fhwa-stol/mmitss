#include <string>
#include <sys/time.h>
#include <udp_time_sync/TimeSync.hpp>
#include <iostream>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <ctime>

std::string getVerboseTimestamp()
{
    auto ms =time_sync::nowInMilliseconds();
    // Convert milliseconds to a time_point
    std::chrono::milliseconds duration(ms);
    auto time_point = std::chrono::system_clock::from_time_t(0) + duration;

    // Convert to time_t for formatting
    std::time_t t = std::chrono::system_clock::to_time_t(time_point);
    std::tm tm = *std::gmtime(&t);

    // Create string stream to format date and time
    std::stringstream ss;
    ss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");

    // Get milliseconds
    int milliseconds = ms % 1000;

    // Append milliseconds to the time string
    ss << "." << std::setw(3) << std::setfill('0') << milliseconds;

    return ss.str();
}  

double getPosixTimestamp()
{

	auto ms_timestamp = time_sync::nowInMilliseconds();
	return static_cast<double>(ms_timestamp) / 1000.0;  

}
