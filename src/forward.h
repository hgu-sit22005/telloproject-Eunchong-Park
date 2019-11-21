#pragma once

#include "TelloPro.h"
#include <cstring>

class Forward: public TelloPro
{
public:
	Forward();
	Forward(int _value);

public:
	double get_delay();
};