from tello import Tello
import sys
from datetime import datetime
import time
import TelloPro

tello = Tello()

command_lst = []
command_lst.append(TelloPro.get_instance('takeoff',-1))
command_lst.append(TelloPro.get_instance('up',50))
command_lst.append(TelloPro.get_instance('forward',100))
command_lst.append(TelloPro.get_instance('down',50))
command_lst.append(TelloPro.get_instance('ccw',45))
command_lst.append(TelloPro.get_instance('forward',100))
command_lst.append(TelloPro.get_instance('cw',90))
command_lst.append(TelloPro.get_instance('forward',100))
command_lst.append(TelloPro.get_instance('cw',90))
command_lst.append(TelloPro.get_instance('forward',100))
command_lst.append(TelloPro.get_instance('cw',90))
command_lst.append(TelloPro.get_instance('forward',100))
command_lst.append(TelloPro.get_instance('ccw',45))
command_lst.append(TelloPro.get_instance('forward',100))
command_lst.append(TelloPro.get_instance('land',-1))


for command in command_lst:
	tello.send_command_instance(command)

#파이썬을 사용해서 파일 가져오고 오픈해서 사용 하는것을 하는거다
#포문으로 자체적으로 문법 만들어서 실행 할 수 도있다.
#휴보처럼 포문으로 잘 만들어서 해라

