#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Scavtrap Constructor Called "<< std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap is Destroyed!" << std::endl;
}


void ScavTrap::guardGate() {
	std::cout << "Scavtrap Guards the gate!" <<std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if ( this->energy_points <= 0 ) {
		std::cout << "ScavTrap  " << this->name << " is out of energy." << std::endl;
		return;
	}
	if(this->hit_points <= 0){
		std::cout<< "ScavTrap Doesn't Have Enough Hit points" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << " " << this->attack_damage << " points of damage !" << std::endl;
	this->energy_points -= 1;
}

ScavTrap::ScavTrap(): ClapTrap("DefaultScav") {
	std::cout << "ScavTrap default Constructor" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap &cpy):ClapTrap(cpy.name) {
	this->energy_points = cpy.energy_points;
	this->attack_damage = cpy.attack_damage;
	this->hit_points = cpy.hit_points;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &c) {
	if(this == &c)
		return *this;
	*this = c;
	return *this;
}
