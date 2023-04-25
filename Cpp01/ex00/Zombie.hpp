
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
  private:
	std::string name;

  public:
	~Zombie();
	Zombie(std::string name);
	void set_name(std::string name);
	std::string get_name();
	void announce();
};
void randomChump(std::string name);
Zombie *newZombie(std::string name);
#endif
