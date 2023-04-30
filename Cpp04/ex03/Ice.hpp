#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
public:
	Ice();
	~Ice();
	virtual AMateria* clone() const;

	void use(ICharacter &target);
};

#endif //ICE_HPP
