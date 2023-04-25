
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

AMateria::AMateria() {
	std::cout << "AMateria Created" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructed" << std::endl;
}

void AMateria::use(ICharacter &target) {
	std::cout << "A materia is used on " << target.getName() << std::endl;
}

