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

int main(){
	randomChump("test2");
	Zombie *z1 = newZombie("test");
	z1->announce();
	delete z1;
}
