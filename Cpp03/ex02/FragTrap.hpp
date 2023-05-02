#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
  public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &cpy);
	~FragTrap();
	FragTrap &operator= (const FragTrap &c);
	void HighFivesGuys(void);
};

#endif
