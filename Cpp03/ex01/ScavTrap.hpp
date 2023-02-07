//
// Created by Lenovo on 5.02.2023.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap{
public:
	ScavTrap(std::string name);
	void guardGate();
	ScavTrap(ScavTrap &copy);

	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &c);
};


#endif //SCAVTRAP_HPP
