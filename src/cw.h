#pragma once

#include "TelloPro.h"
#include <cstring>

class Cw: public TelloPro
{
public:
	Cw();
	Cw(int _value);

public:
	double get_delay();
};