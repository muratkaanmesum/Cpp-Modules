//
// Created by Lenovo on 3.02.2023.
//

#include "Harl.hpp"
#include <map>

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std ::cout <<" I love having extra bacon for my 7XL-double-cheese"
				 "-triple-pickle-specialketchup burger. I really do!"
				 << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" <<std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" <<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for"
			   "years whereas you started working here since last month." <<std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	/*
	std::map<std::string, complains> map;
	map["ERROR"] = &Harl::error;
	map["WARNING"] = &Harl::warning;
	map["INFO"] = &Harl::info;
	map["DEBUG"] = &Harl::debug;
	if(map.find(level) != map.end())
		(this->*map.find(level)->second)();*/
	int index = 0;
	complains  complain[4] = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	std::string Inputs[4] = {"DEBUG","INFO","WARNING","ERROR"};
	for (int i = 0; i < 4; ++i) {
		if(level == Inputs[i])
		{
			index = i;
			break;
		}
	}
	(this ->*complain[index])();
}

