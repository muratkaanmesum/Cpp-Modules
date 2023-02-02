//
// Created by Lenovo on 2.02.2023.
//

#include "HumanA.hpp"

void HumanA::attack() {
	std::cout <<this->name << " attacks with their "<< this->weapon.getType() <<std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon),name(name) {
//This approach is more efficient than assigning values to the member variables
// inside the constructor body,
// as the member variables are constructed and
// initialized before the constructor body is executed.
}
