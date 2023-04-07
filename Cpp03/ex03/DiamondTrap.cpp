#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";

	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_damage = 30;

	std::cout << "DiamondTrap named " << this->name << " Created." << std::endl;
}

DiamondTrap::~DiamondTrap() {
std::cout << "DiamondTrap named " << this->name << " Destroyed."  << std::endl;
}
void    DiamondTrap::whoAmI( void ) {
	std::cout << "I am a DiamondTrap named " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}