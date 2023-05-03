#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
private:
	AMateria *inventory[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource &copy);
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &c);
	void learnMateria(AMateria *m);
	AMateria *createMateria(const std::string &type);
};


#endif
