#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name):energy_points(10),attack_damage(0),name(name),hit_points(10) {
	std::cout << "Entered constructor" << std::endl;
}


ClapTrap::ClapTrap(ClapTrap &copy) {
	this->name = copy.name;
	this->attack_damage = copy.attack_damage;
	this->energy_points = copy.energy_points;
	this->hit_points = copy.hit_points;
	std::cout << "copy constructor called!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Base Deconstructor called!" <<std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if(this->hit_points <= 0 || this->energy_points == 0){
		std::cout << "No health or energy" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target
	<< " causing " << this->attack_damage << " points of damage!" << std::endl;
	this->energy_points -=1;

}

void ClapTrap::takeDamage(unsigned int amount) {
	if(this->hit_points <= 0 || this->energy_points == 0){
		std::cout << "No health or energy!" << std::endl;
		return;
	}
	this->hit_points -=amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage"
	<<" and now has " << this->hit_points <<" Hit points remaining" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if(this->hit_points <= 0 || this->energy_points == 0){
		std::cout << "No health or energy" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " repairs " << amount << " damage" << std::endl;
	this->hit_points += amount;
	this->energy_points -=1;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
	std::cout << "equal override method called" <<std::endl;
	this->name = c.name;
	this->attack_damage = c.attack_damage;
	this->energy_points = c.energy_points;
	this->hit_points = c.hit_points;
	this->name = c.name;
	return *this;
}

ClapTrap::ClapTrap():name("Default") {
	std::cout << "default constructor called!" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

const std::string &ClapTrap::getName() const {
	return name;
}

void ClapTrap::setName(const std::string &name) {
	ClapTrap::name = name;
}

int ClapTrap::getHitPoints() const {
	return hit_points;
}

void ClapTrap::setHitPoints(int hitPoints) {
	hit_points = hitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return energy_points;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
	energy_points = energyPoints;
}

int ClapTrap::getAttackDamage() const {
	return attack_damage;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	attack_damage = attackDamage;
}



