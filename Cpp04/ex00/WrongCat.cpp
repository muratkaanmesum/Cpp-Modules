#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat is Created !" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat is Destroyed !" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCatNoises!" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy)  : WrongAnimal(copy) {
    this->type = copy.type;
    std::cout << "WrongCat copy constructor called ! " << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &c) {
    if(this == &c)
        return *this;
    *this = c;
    return *this;

}
