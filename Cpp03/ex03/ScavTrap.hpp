#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap: virtual public ClapTrap{
private:
	ScavTrap();
public:
	ScavTrap(std::string name);
	void guardGate();

	~ScavTrap();
	void    attack(std::string const& target);
};


#endif //SCAVTRAP_HPP
