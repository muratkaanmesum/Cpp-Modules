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

