#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "A cat is created !" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat is destroyed !" << std::endl;
}
void Cat::makeSound() const{
	std::cout << "Meow Meow !" << std::endl;
}