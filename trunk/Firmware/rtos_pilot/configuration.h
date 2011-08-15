#ifndef CONFIGURATION_H
#define CONFIGURATION_H


#include "sensors.h"
#include "communication.h"
#include "control.h"
#include "gps/gps.h"


struct Configuration
{
	struct SensorConfig sensors;
	struct TelemetryConfig telemetry;
	struct GpsConfig gps;
	struct ControlConfig control;
};	

extern struct Configuration config;

#define V01J 1
#define V01N 2
#define V01O 3
extern int HARDWARE_VERSION;


void configuration_default();

void configuration_load();

void configuration_write();

void configuration_determine_hardware_version();

#endif // CONFIGURATION_H