#include "Sensor.h"

//Sensor Constructor

Sensor::Sensor(String name, int _pin, int _boardId)
	{
		sensorName = name;
		Pin = _pin;  //signal out pin of sensor
		boardId = _boardId;
		
	}