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

FragTrap::FragTrap() :ClapTrap("DefaultTrap"){
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &cpy):ClapTrap(cpy.name) {
	this->attack_damage = cpy.attack_damage;
	this->energy_points = cpy.energy_points;
	this->hit_points = cpy.hit_points;
}

FragTrap &FragTrap::operator=(const FragTrap &c) {
    if(this == &c)
        return *this;
    *this = c;
    return *this;
}

