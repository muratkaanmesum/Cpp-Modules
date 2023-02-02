#include "Zombie.hpp"
Zombie *newZombie(std::string name) {
	Zombie *z = new Zombie();
	z->set_name(name);
	return z;
}
void randomChump(std::string name) {
	Zombie z;
	z.set_name(name);
	z.announce();
}

Zombie *zombieHorde(int N , std::string name){
	Zombie *z = new Zombie[N]();
	for(int i = 0; i < N ; i++)
		z[i].set_name(name);
	return z;
}