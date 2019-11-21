#include <boost/python.hpp>

#include "TelloPro.h"
#include "takeoff.h"
#include "land.h"
#include "up.h"
#include "back.h"
#include "ccw.h"
#include "cw.h"
#include "down.h"
#include "forward.h"
#include "left.h"
#include "right.h"


TelloPro* get_instance(boost::python::str _inst,int _val)
{
	std::string instance = boost::python::extract<std::string>(_inst);

	if(instance == "takeoff")
	   return new Takeoff;
	else if(instance == "land")
		return new Land;
	else if(instance =="forward")
		return new Forward(_val);
	else if(instance =="back")
		return new Back(_val);
	else if(instance =="up")
		return new Up(_val);
	else if(instance =="down")
		return new Down(_val);
	else if(instance =="left")
		return new Left(_val);
	else if(instance =="right")
		return new Right(_val);
	else if(instance =="cw")
		return new Cw(_val);
	else if(instance =="ccw")
		return new Ccw(_val);

		//여기에 up down 등등 다른 객체를 할달하라
	else
		return nullptr;
}
//이 부분이 파이썬 과 c++ 연동해줌
BOOST_PYTHON_MODULE(TelloPro)
{// 앞쪽이'' 게 파이썬 사용이름, 뒤에는 c++ 3번쨰는 리턴타입이다
	def("get_instance", get_instance,
			      boost::python::return_value_policy<boost::python::manage_new_object>());
	
	boost::python::class_<TelloPro>("TelloPro")
		.def("get_command", &TelloPro::get_command)
		.def("get_delay", &TelloPro::get_delay);
}

