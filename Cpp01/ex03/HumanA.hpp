//
// Created by Lenovo on 2.02.2023.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA {
private:
	Weapon &weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
};


#endif //HUMANA_HPP
