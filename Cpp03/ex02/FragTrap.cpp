#include "FragTrap.hpp"

void FragTrap::HighFivesGuys() {
	std::cout << "FragTrap high Fives You!" << std::endl;
}


FragTrap::~FragTrap() {
	std::cout<< "FragTrap Deconstructor Entered" <<std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name) {
	std::cout<< "FragTrap Constructor Entered" <<std::endl;
	this->hit_points = 100;
	this->energy_points =100;
	this->attack_damage = 30;
}

