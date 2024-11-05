#include<iostream>
#include<unistd.h>
#include<math.h>
#include<stdlib.h>

#include "rclcpp/rclcpp.hpp"

//Inertial Labs source header
#include "ILDriver.h"

//adding message type headers
#include "inertiallabs_msgs/msg/sensor_data.hpp"
#include "inertiallabs_msgs/msg/ins_data.hpp"
#include "inertiallabs_msgs/msg/gps_data.hpp"
#include "inertiallabs_msgs/msg/gnss_data.hpp"
#include "inertiallabs_msgs/msg/marine_data.hpp"
// heaher file for imu raw msgs
#include "sensor_msgs/msg/imu.hpp"

#include "ilins.h"

il_ins::il_ins(): Node("il_ins"){ 
	publishers0 = this->create_publisher<inertiallabs_msgs::msg::SensorData>("/Inertial_Labs/sensor_data",1);
    publishers1 = this->create_publisher<inertiallabs_msgs::msg::InsData>("/Inertial_Labs/ins_data",1);
    publishers2 = this->create_publisher<inertiallabs_msgs::msg::GpsData>("/Inertial_Labs/gps_data",1);
    publishers3 = this->create_publisher<inertiallabs_msgs::msg::GnssData>("/Inertial_Labs/gnss_data",1);
    publishers4 = this->create_publisher<inertiallabs_msgs::msg::MarineData>("/Inertial_Labs/marine_data",1);
    // publishers6 = this->create_publisher<TODO>("/imu_raw",1)
	publishers5 = this->create_publisher<sensor_msgs::msg::Imu>("/imu_raw",1);
}
il_ins::~il_ins(){}

void publish_device(IL::INSDataStruct *data, il_ins* contextPtr)
{
	il_ins * context = reinterpret_cast<il_ins*>(contextPtr);
	static int seq=0;
	seq++;

	double g = 9.80655;
	double deg_to_rad = 0.0174533;

	inertiallabs_msgs::msg::SensorData_<std::allocator<void>> msg_sensor_data;
	inertiallabs_msgs::msg::InsData_<std::allocator<void>> msg_ins_data;
	inertiallabs_msgs::msg::GpsData_<std::allocator<void>> msg_gps_data;
	inertiallabs_msgs::msg::GnssData_<std::allocator<void>> msg_gnss_data;
	inertiallabs_msgs::msg::MarineData_<std::allocator<void>> msg_marine_data;
	sensor_msgs::msg::Imu_<std::allocator<void>> msg_imu;

	rclcpp::Time timestamp = context->now();

	if (context->publishers0->get_subscription_count() > 0)
	{
		msg_sensor_data.header.stamp = timestamp;
		msg_sensor_data.header.frame_id = context->imu_frame_id;
		msg_sensor_data.mag.x = data->Mag[0];
		msg_sensor_data.mag.y = data->Mag[0];
		msg_sensor_data.mag.z = data->Mag[0];
		msg_sensor_data.accel.x = data->Acc[0];
		msg_sensor_data.accel.y = data->Acc[1];
		msg_sensor_data.accel.z = data->Acc[2];
		msg_sensor_data.gyro.x = data->Gyro[0];
		msg_sensor_data.gyro.y = data->Gyro[1];
		msg_sensor_data.gyro.z = data->Gyro[2];
		msg_sensor_data.temp = data->Temp;
		msg_sensor_data.vinp = data->VSup;
		msg_sensor_data.pressure = data->hBar;
		msg_sensor_data.barometric_height = data->pBar;
		context->publishers0->publish(msg_sensor_data);
	}

	if (context->publishers1->get_subscription_count() > 0)
	{
		msg_ins_data.header.stamp = timestamp;
		msg_ins_data.header.frame_id = context->imu_frame_id;
		msg_ins_data.ypr.x = data->Heading;
		msg_ins_data.ypr.y = data->Pitch;
		msg_ins_data.ypr.z = data->Roll;
		msg_ins_data.oriquat.w = data->Quat[0];
		msg_ins_data.oriquat.x = data->Quat[1];
		msg_ins_data.oriquat.y = data->Quat[2];
		msg_ins_data.oriquat.z = data->Quat[3];
		msg_ins_data.llh.x = data->Latitude;
		msg_ins_data.llh.y = data->Longitude;
		msg_ins_data.llh.z = data->Altitude;
		msg_ins_data.vel_enu.x = data->VelENU[0];
		msg_ins_data.vel_enu.y = data->VelENU[1];
		msg_ins_data.vel_enu.z = data->VelENU[2];
		msg_ins_data.gps_ins_time = data->GPS_INS_Time;
		msg_ins_data.gps_imu_time = data->GPS_IMU_Time;
		msg_ins_data.gps_msow.data = data->ms_gps;
		msg_ins_data.solution_status.data = data->INSSolStatus;
		msg_ins_data.usw = data->USW;
		msg_ins_data.pos_std.x = data->KFLatStd;
		msg_ins_data.pos_std.y = data->KFLonStd;
		msg_ins_data.pos_std.z = data->KFAltStd;
		msg_ins_data.heading_std = data->KFHdgStd;
		context->publishers1->publish(msg_ins_data);
	}

	if (context->publishers2->get_subscription_count() > 0)
	{
		msg_gps_data.header.stamp = timestamp;
		msg_gps_data.header.frame_id = context->imu_frame_id;
		msg_gps_data.llh.x = data->LatGNSS;
		msg_gps_data.llh.y = data->LonGNSS;
		msg_gps_data.llh.z = data->AltGNSS;
		msg_gps_data.horspeed = data->V_Hor;
		msg_gps_data.speeddir = data->Trk_gnd;
		msg_gps_data.verspeed = data->V_ver;
		context->publishers2->publish(msg_gps_data);
	}

	if (context->publishers3->get_subscription_count() > 0)
	{
		msg_gnss_data.header.stamp = timestamp;
		msg_gnss_data.header.frame_id = context->imu_frame_id;
		msg_gnss_data.gnss_info_1 = data->GNSSInfo1;
		msg_gnss_data.gnss_info_2 = data->GNSSInfo2;
		msg_gnss_data.number_sat = data->SVsol;
		msg_gnss_data.gnss_velocity_latency = data->GNSSVelLatency;
		msg_gnss_data.gnss_angles_position_type = data->AnglesType;
		msg_gnss_data.gnss_heading = data->Heading_GNSS;
		msg_gnss_data.gnss_pitch = data->Pitch_GNSS;
		msg_gnss_data.gnss_gdop = data->GDOP;
		msg_gnss_data.gnss_pdop = data->PDOP;
		msg_gnss_data.gnss_hdop = data->HDOP;
		msg_gnss_data.gnss_vdop = data->VDOP;
		msg_gnss_data.gnss_tdop = data->TDOP;
		msg_gnss_data.new_gnss_flags = data->NewGPS;
		msg_gnss_data.diff_age = data->DiffAge;
		msg_gnss_data.pos_std.x = data->LatGNSSStd;
		msg_gnss_data.pos_std.y = data->LonGNSSStd;
		msg_gnss_data.pos_std.z = data->AltGNSSStd;
		msg_gnss_data.heading_std = data->HeadingGNSSStd;
		msg_gnss_data.pitch_std = data->PitchGNSSStd;
		context->publishers3->publish(msg_gnss_data);
	}

	if (context->publishers4->get_subscription_count() > 0)
	{
		msg_marine_data.header.stamp = timestamp;
		msg_marine_data.header.frame_id = context->imu_frame_id;
		msg_marine_data.heave = data->Heave;
		msg_marine_data.surge = data->Surge;
		msg_marine_data.sway = data->Sway;
		msg_marine_data.heave_velocity = data->Heave_velocity;
		msg_marine_data.surge_velocity = data->Surge_velocity;
		msg_marine_data.sway_velocity = data->Sway_velocity;
		msg_marine_data.significant_wave_height = data->significant_wave_height;
		context->publishers4->publish(msg_marine_data);
	}

	if (context->publishers5->get_subscription_count() > 0){

		msg_imu.header.stamp = timestamp;
		msg_imu.header.frame_id = "inertiallabs_imu";

		double roll = data->Roll;
		double pitch = data->Pitch;
		double yaw = data->Heading;

		double cy = cos(yaw * 0.5);
		double sy = sin(yaw * 0.5);
		double cp = cos(pitch * 0.5);
		double sp = sin(pitch * 0.5);
		double cr = cos(roll * 0.5);
		double sr = sin(roll * 0.5);

		msg_imu.orientation.w = cr * cp * cy + sr * sp * sy;
		msg_imu.orientation.x = sr * cp * cy - cr * sp * sy;
		msg_imu.orientation.y = cr * sp * cy + sr * cp * sy;
		msg_imu.orientation.z = cr * cp * sy - sr * sp * cy;

		msg_imu.linear_acceleration.x = data->Acc[0] * g;
		msg_imu.linear_acceleration.y = data->Acc[1] * g;
		msg_imu.linear_acceleration.z = data->Acc[2] * g;

		msg_imu.angular_velocity.x = data->Gyro[0] * deg_to_rad;
		msg_imu.angular_velocity.y = data->Gyro[1] * deg_to_rad;
		msg_imu.angular_velocity.z = data->Gyro[2] * deg_to_rad;

		context->publishers5->publish(msg_imu);
	}
}

int main(int argc, char** argv)
{
	rclcpp::init(argc, argv);
	auto node = std::make_shared<il_ins>();
	rclcpp::Rate r(100); // 100 hz
	
	std::string port = node->declare_parameter<std::string>("ins_url", "serial:/dev/ttyUSB0");
	IL::Driver ins;
	int ins_output_format = node->declare_parameter<int>("ins_output_format", 0x52);
	std::string imu_frame_id;

	RCLCPP_INFO(node->get_logger(),"connecting to INS at URL %s\n",port.c_str());

	auto il_err = ins.connect(port.c_str());
	if (il_err != 0)
	{
		RCLCPP_FATAL(node->get_logger(),"Could not connect to the INS on this URL %s\n",
				  port.c_str()
		);
		exit(EXIT_FAILURE);
	}

	if (ins.isStarted())
	{
		ins.stop();
	}
	auto devInfo = ins.getDeviceInfo();
	auto devParams = ins.getDeviceParams();
	std::string SN(reinterpret_cast<const char *>(devInfo.IDN), 8);
	RCLCPP_INFO(node->get_logger(),"Found INS S/N %s\n", SN.c_str());
	RCLCPP_INFO(node->get_logger(),"imu frame id is  %s\n", SN.c_str());
	node->imu_frame_id = SN;
	il_err = ins.start(ins_output_format);
	if (il_err != 0)
	{
		RCLCPP_FATAL(node->get_logger(),"Could not start the INS: %i\n", il_err);
		ins.disconnect();
		exit(EXIT_FAILURE);
	}

	ins.setCallback(&publish_device, node.get());
	RCLCPP_INFO(node->get_logger(),"publishing at %d Hz\n", devParams.dataRate);
	RCLCPP_INFO(node->get_logger(),"ros2 topic echo the topics to see the data");
	rclcpp::spin(node);
	
	std::cout << "Stopping INS... " << std::flush;
	ins.stop();
	std::cout << "Disconnecting... " << std::flush;
	ins.disconnect();
	std::cout << "Done." << std::endl;
	return 0;
}
