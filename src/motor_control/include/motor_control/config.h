#ifndef MOTOR_CONTROL_CONFIG_H
#define MOTOR_CONTROL_CONFIG_H

#include <string>

namespace motor_control
{

struct Config
{
    std::string back_left_wheel_name="back_left_wheel";
    std::string back_right_wheel_name="back_right_wheel";
    std::string front_left_wheel_name="front_left_wheel";
    std::string front_right_wheel_name="front_right_wheel";

    double loop_rate=30;
    std::string front_arduino="/dev/ttyACM0";
    std::string back_arduino="/dev/ttyACM1";
    int baud_rate=115200;
    int timeout= 1000;
    int enc_counts_per_rev=1625;
};

}

#endif
