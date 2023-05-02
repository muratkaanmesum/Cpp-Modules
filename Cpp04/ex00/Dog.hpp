#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	~Dog();
    Dog(Dog &cpy);
    Dog &operator=(const Dog &c);
	void makeSound() const;
};


#endif //DOG_HPP
