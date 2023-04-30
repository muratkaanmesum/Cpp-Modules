#include "FragTrap.hpp"

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap ash( "ash" );
	ash.whoAmI();

	ash.attack( "the air" );
	ash.takeDamage( 10 );
	ash.beRepaired( 10 );

}