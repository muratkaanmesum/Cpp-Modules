#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "A dog is created !" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "The dog is Destroyed !" << std::endl;
}

void Dog::makeSound()const  {
	std::cout << "Woff Woff !" << std::endl;
}

Dog &Dog::operator=(const Dog &c) {
    if(this == &c)
        return *this;
    *this = c;
    return *this;
}
Dog::Dog(Dog &cpy)  : Animal(cpy) {
    this->type = cpy.type;
    std::cout << "Cat copy constructor called ! "<< std::endl;
}
