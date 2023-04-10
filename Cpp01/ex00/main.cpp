#include "Zombie.hpp"

int main(){
	randomChump("test2");
	Zombie *z1 = newZombie("test");
	z1->announce();
	delete z1;
}
