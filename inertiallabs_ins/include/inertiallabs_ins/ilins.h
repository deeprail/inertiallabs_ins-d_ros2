#pragma once
#include "rclcpp/rclcpp.hpp"
#include "inertiallabs_msgs/msg/sensor_data.hpp"
#include "inertiallabs_msgs/msg/ins_data.hpp"
#include "inertiallabs_msgs/msg/gps_data.hpp"
#include "inertiallabs_msgs/msg/gnss_data.hpp"
#include "inertiallabs_msgs/msg/marine_data.hpp"
#include "sensor_msgs/msg/imu.hpp"
class il_ins : public rclcpp::Node
{
private:
    // rclcpp::Publisher<TODO>::SharedPtr publisher5;
public:
    il_ins(/* args */);
    ~il_ins();
    std::string imu_frame_id;
    rclcpp::Publisher<inertiallabs_msgs::msg::SensorData>::SharedPtr publishers0;
    rclcpp::Publisher<inertiallabs_msgs::msg::InsData>::SharedPtr publishers1;
    rclcpp::Publisher<inertiallabs_msgs::msg::GpsData>::SharedPtr publishers2;
    rclcpp::Publisher<inertiallabs_msgs::msg::GnssData>::SharedPtr publishers3;
    rclcpp::Publisher<inertiallabs_msgs::msg::MarineData>::SharedPtr publishers4;
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr publishers5;
};
