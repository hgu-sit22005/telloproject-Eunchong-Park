#include "down.h"
#include <cstring>
#include <sstream>

Down::Down()
{
	command = new char[strlen("down")+1];
	strcpy(command, "down");
}
Down::Down(int _value)
{
	std::stringstream sstream;
	sstream<<"down "<<_value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Down::get_delay()
{ 
	return 1; 
}