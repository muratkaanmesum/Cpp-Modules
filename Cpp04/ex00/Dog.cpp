#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "A dog is created !" << std::endl;
}

Dog::~Dog() {
	std::cout << "The dog is Destroyed !" << std::endl;
}

void Dog::makeSound()const  {
	std::cout << "Woff Woff !" << std::endl;
}