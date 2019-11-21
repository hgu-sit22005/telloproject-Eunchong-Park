#pragma once

#include "TelloPro.h"
#include <cstring>

class Ccw: public TelloPro
{
public:
	Ccw();
	Ccw(int _value);
public:
	double get_delay();
};