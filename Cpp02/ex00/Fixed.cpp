#include "Fixed.hpp"
#include <iostream>

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->fixed_point = copy.fixed_point;
	return (*this);
}

Fixed::Fixed() {
	std::cout <<"Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout <<"Copy constructor called" << std::endl;
	this->fixed_point = copy.fixed_point;
}

int Fixed::getRawBits() {
	std::cout << "getRawBits Called" << std::endl;
	return this->fixed_point;
}

void Fixed::setFixedPoint(int fixedPoint) {
	this->fixed_point = fixedPoint;
}

Fixed::~Fixed() {
	std::cout << "Destructor Called" <<std::endl;

}
