#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;
	Animal();

public:
	const std::string &getType() const;
	void setType(const std::string &type);
	Animal(Animal &copy);
	virtual ~Animal();
	Animal &operator=(const Animal &c);
	virtual void makeSound() const;
};


#endif