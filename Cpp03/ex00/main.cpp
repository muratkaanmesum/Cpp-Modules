#include "ClapTrap.hpp"

int main() {

	ClapTrap c1;
	ClapTrap c2("Clap2");
	c1 = c2;
	ClapTrap c3(c1);
	c3.setName("Clap3");
	c1.setName("Clap1");
	c1.attack("target1");
	c2.attack("target2");
	c3.setAttackDamage(5);
	c3.attack("target3");
	c3.takeDamage(5);
	c3.beRepaired(1);
	c3.setEnergyPoints(0);
	c3.attack("target");

}
