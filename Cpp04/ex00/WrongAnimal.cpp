#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal is Created !" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy) {
	this->type = copy.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal is Destroyed !" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &c) {
	this->type = c.type;
	return *this;
}

void WrongAnimal::makeSound()const {
	std::cout << "Some WrongAnimal Noises !" << std::endl;
}

