#ifndef sensor_h
#define sensor_h

class Sensor{
public:
    
    int boardId;
	String sensorName;
	int sensorId;
	int Pin;

	//sensor name, pin, boardid
	Sensor(String, int, int);
};

#endif