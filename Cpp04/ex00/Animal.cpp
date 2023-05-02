#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Created !" << std::endl;
}

Animal::Animal(Animal &copy) {
	this->type = copy.type;
	std::cout << "Animal copy constructor called ! "<<std ::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destroyed !" << std::endl;
}

Animal &Animal::operator=(const Animal &c) {
	this->type = c.type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Random Animal Sound !" << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}

void Animal::setType(const std::string &type) {
	Animal::type = type;
}
