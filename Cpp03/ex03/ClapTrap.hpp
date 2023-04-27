//
// Created by Lenovo on 4.02.2023.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
class ClapTrap {
protected:
	int energy_points;
	int attack_damage;
	std::string name;
	int hit_points;
	ClapTrap();
public:

	ClapTrap(std::string name);
	ClapTrap(ClapTrap &copy);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap &operator= (const ClapTrap &c);
	const std::string &getName() const;
	void setName(const std::string &name);
	int getHitPoints() const;
	void setHitPoints(int hitPoints);
	int getEnergyPoints() const;
	void setEnergyPoints(int energyPoints);
	int getAttackDamage() const;
	void setAttackDamage(int attackDamage);

};


#endif //CLAPTRAP_HPP
