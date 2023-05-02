#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal Created !" << std::endl;
}

AAnimal::AAnimal(AAnimal &copy) {
	this->type = copy.type;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destroyed !" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &c) {
	this->type = c.type;
	return *this;
}

void AAnimal::makeSound() const {
	std::cout << "Random AAnimal Sound !" << std::endl;
}

const std::string &AAnimal::getType() const {
	return type;
}

void AAnimal::setType(const std::string &type) {
    AAnimal::type = type;
}
