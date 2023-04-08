#include "Character.hpp"
void equip(AMateria *m){

}

Character::Character(std::string name):name(name) {
	for (int i = 0; 4 > i; ++i) {
		this->inventory[i] = NULL;
	}
	std::cout << "Character " << name << " is Created !" << std::endl;
}
