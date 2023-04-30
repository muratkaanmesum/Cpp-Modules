#include "Character.hpp"

Character::Character(std::string name):name(name) {
	for (int i = 0; 4 > i; ++i) {
		this->inventory[i] = NULL;
	}
	std::cout << "Character " << name << " is Created !" << std::endl;
}

Character::Character() {
	std::cout << "Character Created !" << std::endl;
}

Character::Character(Character &copy):name(copy.getName()) {
	for (int i = 0; i < 4; ++i) {
		this->inventory[i] = copy.inventory[i];
	}
	std::cout << "Character Copied !" << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
	if(this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	std::cout << "Character Destructed !" << std::endl;
}

Character &Character::operator=(const Character &c) {
	for (int i = 0; i < 4; ++i) {
		if(this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = c.inventory[i]->clone();
	}
	return *this;
}

void Character::equip(AMateria *m) {
	int i = 0;
	if(m == NULL)
	{
		std::cout << "Tried equipping nothing !" << std::endl;
		return;
	}
	while(i < 4 && this->inventory[i] != NULL)
		i++;
	if(i < 4 && this->inventory[i] == NULL)
		this->inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Wrong entry !" << std::endl;
		return;
	}
	if(this->inventory[idx] == NULL)
	{
		std::cout << "Character doesn't have anything on the slot!" << std::endl;
		return;
	}

	//AMateria *m = this->inventory[idx];
	this->inventory[idx] = 0;
	std::cout << "AMateria is unequipped ! " << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Wrong entry !" << std::endl;
		return;
	}
	if(this->inventory[idx] == NULL)
	{
		std::cout << "Character doesn't have anything on the slot!" << std::endl;
		return;
	}
	this->inventory[idx]->use(target);
}

const std::string &Character::getName() const {
	return this->name;
}