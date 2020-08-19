#include <stdio.h>
#include <iostream>
#include "include/date/tz.h"

int main(int argc, char *argv[])
{
    uint64_t gps_input_ns = 1281798087485516800;         
    date::gps_time<std::chrono::nanoseconds> gt_nano{date::round<std::chrono::nanoseconds>(std::chrono::duration<uint64_t, std::nano>{gps_input_ns})};
    auto utc_nano = date::clock_cast<date::utc_clock>(gt_nano);
    auto tai_nano = date::clock_cast<date::tai_clock>(gt_nano);
    std::cout << gt_nano <<  " GPS\n";
    std::cout << utc_nano << " UTC\n";
    std::cout << tai_nano << " TAI\n";

    double gps_input = 1e+12 + 1e-3;    
    date::gps_time<std::chrono::milliseconds> gt_milli{date::round<std::chrono::milliseconds>(std::chrono::duration<double, std::milli>{gps_input})};
    auto utc_milli = date::clock_cast<date::utc_clock>(gt_milli);
    auto tai_milli = date::clock_cast<date::tai_clock>(gt_milli);
    std::cout << gt_milli <<  " GPS\n";
    std::cout << utc_milli << " UTC\n";
    std::cout << tai_milli << " TAI\n";
}   