#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
public:
	Ice();
	~Ice();
    Ice(const Ice &cpy);
    Ice &operator=(const Ice &cpy);
	virtual AMateria* clone() const;
	void use(ICharacter &target);
};

#endif //ICE_HPP
