#pragma once

#include "TelloPro.h"
#include <cstring>

class Down: public TelloPro
{
public:
	Down();
	Down(int _value);

public:
	double get_delay();
};