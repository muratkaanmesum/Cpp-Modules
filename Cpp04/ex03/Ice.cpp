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
