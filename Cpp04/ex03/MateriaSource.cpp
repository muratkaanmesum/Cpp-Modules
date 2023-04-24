#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		this->inventory[i] = 0;
	}

	std::cout << "MateriaSource is Created ! " << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &copy) {
	for (int i = 0; i < 4; ++i) {
		if(copy.inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
	}

}

MateriaSource &MateriaSource::operator=(const MateriaSource &c) {
	for (int i = 0; i < 4; ++i) {
		if(this->inventory[i] != NULL)
				delete this->inventory[i];
		if(c.inventory[i] != NULL)
			this->inventory[i] = c.inventory[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if(this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	std::cout << "Materia Source is destructed !" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
	int i = 0;
	while(this->inventory[i] != NULL && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	if(this->inventory[i] == NULL)
		this->inventory[i] = m;
	std::cout << "Materia "<< m->getType() <<" is Learned ! "<< std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	int i = 0;
	while(i < 4 && this->inventory[i] != NULL &&  this->inventory[i]->getType() != type)
		i++;
	if (i >= 4 || !(this->inventory)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	return this->inventory[i]->clone();
}