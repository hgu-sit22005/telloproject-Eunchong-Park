#include "cw.h"
#include <cstring>
#include <sstream>

Cw::Cw()
{
	command = new char[strlen("cw")+1];
	strcpy(command, "cw");
}
Cw::Cw(int _value)
{
	std::stringstream sstream;
	sstream<<"cw "<<_value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Cw::get_delay()
{ 
	return 1; 
}