#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "A cat is created !" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat is destroyed !" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow !" << std::endl;
}

Cat::Cat(Cat &copy)
 : AAnimal(copy) {
	this->type = copy.type;
	std::cout << "Cat copy constructor called ! " << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
	if (this == &c)
		return (*this);
	*this = c;
	return (*this);
}
