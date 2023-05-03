#include "Ice.hpp"

AMateria *Ice::clone()  const {
	return  new Ice();
}

Ice::Ice() :AMateria("ice"){
 std::cout << "Ice Materia is Created !" << std::endl;
}

Ice::~Ice() {
 std::cout << "Ice is Deconstructed !" << std::endl;
}

void Ice::use(ICharacter &target) {
	std::cout << "Shoots an ice bolt at "<< target.getName() << std::endl;
}

Ice::Ice(const Ice &cpy) {
    *this = cpy;
}

Ice &Ice::operator=(const Ice &cpy) {
    if(this == &cpy)
        return *this;
    *this = cpy;
    return *this;
}
