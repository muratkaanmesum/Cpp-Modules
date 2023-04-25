#include "Fixed.hpp"
#include <cmath>

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
	*this = copy;
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

Fixed::Fixed(int number) {
	this->fixed_point = number << bits;
}

Fixed::Fixed(const float floatNum) : fixed_point(roundf(floatNum * (1 << bits))) {
}

float Fixed::toFloat(void) const {
	return ((float)this->fixed_point / (float)(1 << bits));
}
int	Fixed::toInt(void)const
{
	return (this->fixed_point >> bits);
}


std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	return (o << fixed.toFloat());
}