#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Scavtrap Entered operator Overload "<< std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}


ScavTrap::ScavTrap(ScavTrap &copy):ClapTrap() {
	this->setEnergyPoints(copy.getAttackDamage());
	this->setAttackDamage(copy.getAttackDamage());
	this->setHitPoints(copy.getHitPoints());
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap is Destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &c) {
	std::cout << "Scavtrap Entered operator Overload "<< std::endl;
	this->setName(c.getName());
	this->setAttackDamage(c.getAttackDamage());
	this->setEnergyPoints(c.getAttackDamage());
	this->setHitPoints(c.getHitPoints());
	return *this;
}

void ScavTrap::guardGate() {

}
