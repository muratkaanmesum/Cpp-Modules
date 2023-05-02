#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &cpy);
	void guardGate();
	ScavTrap &operator= (const ScavTrap &c);
	~ScavTrap();
	void    attack(std::string const& target);
};


#endif 
