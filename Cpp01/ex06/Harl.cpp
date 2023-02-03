//
// Created by Lenovo on 3.02.2023.
//

#include "Harl.hpp"
#include <map>

void Harl::debug() {
	std ::cout <<" I love having extra bacon for my 7XL-double-cheese"
				 "-triple-pickle-specialketchup burger. I really do!"
				 << std::endl;
}

void Harl::info() {
std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
			 "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			 << std::endl;
}

void Harl::warning() {
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for"
			   "years whereas you started working here since last month." <<std::endl;
}

void Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::map<std::string, complains> map;
	map["DEBUG"] = &Harl::debug;
	map["INFO"] = &Harl::info;
	map["WARNING"] = &Harl::warning;
	map["ERROR"] = &Harl::error;
	if(map.find(level) != map.end())
		(this->*map.find(level)->second)();
}

