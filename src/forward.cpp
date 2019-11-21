#include "forward.h"
#include <cstring>
#include <sstream>

Forward::Forward()
{
	command = new char[strlen("forward")+1];
	strcpy(command, "forward");
}
Forward::Forward(int _value)
{
	std::stringstream sstream;
	sstream<<"forward "<<_value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}
double Forward::get_delay()
{ 
	return 1; 
}