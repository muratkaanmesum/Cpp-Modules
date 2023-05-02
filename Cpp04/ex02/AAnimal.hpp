#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
	std::string type;

public:
	AAnimal();
	const std::string &getType() const;
	void setType(const std::string &type);
	AAnimal(AAnimal &copy);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal &c);
	virtual void makeSound() const = 0;
};


#endif
