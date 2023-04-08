
#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type(type) {
	std::cout << "Abstract materia is created !"<< std::endl;
}

std::string const &AMateria::getType() const {
	return this->type;
}

AMateria::AMateria(AMateria &copy) {
	*this = copy;
}
