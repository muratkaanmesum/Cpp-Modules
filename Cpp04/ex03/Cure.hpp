#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure:public AMateria {
public:
	Cure();
	~Cure();
	virtual AMateria* clone() const;

	void use(ICharacter &target);
};


#endif //CURE_HPP
