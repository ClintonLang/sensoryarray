#ifndef board_h
#define board_h

#include "sensor.h"

class Board{
public:
	int boardId;
	String boardName;
	int sensorCount;
	Board(int,String);
  Sensor sensorList[20]; 
};

#endif