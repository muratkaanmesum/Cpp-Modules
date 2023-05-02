#include "Cat.hpp"
Cat::Cat() {
    this->type = "Cat";
    std::cout  << "Cat Constructor Called !" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called ! " << std::endl;
}

Cat::Cat(Cat &copy) {
    this->type = copy.type;
    std::cout << "Cat copy constructor called ! " << std::endl;
}

Cat &Cat::operator=(const Cat &c) {
    if(this == &c)
        return *this;
    *this = c;
    return *this;

}

void Cat::makeSound() const {
    std::cout << "Meov Meov ! "<< std::endl;
}
