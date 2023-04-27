#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :  FragTrap(name), ScavTrap(name) {
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
void    DiamondTrap::whoAmI() {
	std::cout << "I am a DiamondTrap named " << this->name << ", ClapTrap name: " << this->ClapTrap::name << std::endl;
}