#include "kovan/ardrone.h"
#include "kovan/ardrone.hpp"
#include "kovan/util.h"
#include "camera_c_p.hpp"

#include <cstdio>

using namespace Private;

#include <cstring>

int drone_connect(void)
{
	return ARDrone::instance()->connect() ? 1 : 0;
}

void drone_disconnect(void)
{
	ARDrone::instance()->disconnect();
}

int get_drone_version(void)
{
	switch(ARDrone::instance()->version()) {
	case ARDrone::V1: return 1;
	case ARDrone::V2: return 2;
	default:;
	}
	return -1;
}

void drone_calibrate(void)
{
	ARDrone::instance()->flatTrim();
}

void drone_takeoff(void)
{
	ARDrone::instance()->takeoff();
}

void drone_land(void)
{
	ARDrone::instance()->land();
}

int get_drone_battery(void)
{
	return ARDrone::instance()->navigationData().battery;
}

void drone_clear_position()
{
	ARDrone::instance()->clearPosition();
}

float get_drone_x(void)
{
	return ARDrone::instance()->navigationData().position.x;
}

float get_drone_y(void)
{
	return ARDrone::instance()->navigationData().position.y;
}

float get_drone_z(void)
{
	return ARDrone::instance()->navigationData().position.z;
}

float get_drone_x_velocity(void)
{
	return ARDrone::instance()->navigationData().velocity.x;
}

float get_drone_y_velocity(void)
{
	return ARDrone::instance()->navigationData().velocity.y;
}

float get_drone_z_velocity(void)
{
	return ARDrone::instance()->navigationData().velocity.z;
}

float get_drone_pitch(void)
{
	return ARDrone::instance()->navigationData().pitch;
}

float get_drone_roll(void)
{
	return ARDrone::instance()->navigationData().roll;
}

float get_drone_yaw(void)
{
	return ARDrone::instance()->navigationData().yaw;
}

float get_drone_altitude(void)
{
	return ARDrone::instance()->navigationData().altitude;
}

int drone_camera_open(enum drone_camera c)
{
	DeviceSingleton::setInputProvider(new Camera::ARDroneInputProvider);
	return DeviceSingleton::instance()->open(c == FRONT_CAMERA ? 0 : 1) ? 1 : 0;
}

int set_drone_mac_address(const char *const address)
{
	if(ARDrone::instance()->state() == ARDrone::Disconnected) return 0;
	ARDrone::instance()->setOwnerAddress(address);
	return 1;
}

int drone_pair(void)
{
	if(ARDrone::instance()->state() == ARDrone::Disconnected) return 0;
	ARDrone::instance()->pair();
	return 1;
}

int set_drone_ssid(const char *const ssid)
{
	if(ARDrone::instance()->state() == ARDrone::Disconnected) return 0;
	
	if(strlen(ssid) < 1) {
		 fprintf(stderr, "SSID must be at least one character long!\n");
		 return 0;
	}
	
	ARDrone::instance()->setSsid(ssid);
	return 1;
 }

void drone_move(float x_tilt, float y_tilt, float z_vel, float yaw_vel)
{
	ARDrone::instance()->move(x_tilt, y_tilt, z_vel, yaw_vel);
}

void drone_hover(void)
{
	ARDrone::instance()->hover();
}

void set_drone_emergency_stop_enabled(int enabled)
{
	ARDrone::instance()->setEmergencyStopEnabled(enabled);
}

int get_drone_emergency_stop_enabled(void)
{
	return ARDrone::instance()->isEmergencyStopEnabled() ? 1 : 0;
}
