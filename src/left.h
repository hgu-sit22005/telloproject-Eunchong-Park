#pragma once

#include "TelloPro.h"
#include <cstring>

class Left: public TelloPro
{
public:
	Left();
	Left(int _value);

public:
	double get_delay();
};