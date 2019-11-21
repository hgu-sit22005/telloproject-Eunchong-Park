#pragma once

#include "TelloPro.h"
#include <cstring>

class Up: public TelloPro
{
public:
	Up();
	Up(int _value);

public:
	double get_delay();
};