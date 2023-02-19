#include "ScavTrap.hpp"

int main(){
	ScavTrap t1("test");
	ScavTrap t2("test2");
	t1.attack("target dummy");
	t2.guardGate();
	t2.takeDamage(100);
	t2.attack("target dummy");
}