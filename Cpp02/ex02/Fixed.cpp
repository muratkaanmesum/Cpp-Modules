#include "Fixed.hpp"
#include <cmath>

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->fixed_point = copy.fixed_point;
	return (*this);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits Called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setFixedPoint(int fixedPoint)
{
	this->fixed_point = fixedPoint;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(int number)
{
	this->fixed_point = number << bits;
}

Fixed::Fixed(const float floatNum)
	: fixed_point(roundf(floatNum * (1 << bits)))
{
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point / (float)(1 << bits));
}
int Fixed::toInt(void) const
{
	return (this->fixed_point >> bits);
}

bool Fixed::operator>(const Fixed &right) const
{
	return (this->toFloat() > right.toFloat());
}
bool Fixed::operator<(const Fixed &right) const
{
	return (this->toFloat() < right.toFloat());
}
bool Fixed::operator<=(const Fixed &right) const
{
	return (this->toFloat() <= right.toFloat());
}

bool Fixed::operator>=(const Fixed &right) const
{
	return (this->toFloat() >= right.toFloat());
}
bool Fixed::operator==(const Fixed &right) const
{
	return (this->toFloat() == right.toFloat());
}
bool Fixed::operator!=(const Fixed &right) const
{
	return (this->toFloat() >= right.toFloat());
}

Fixed &Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	++this->fixed_point;
	return (temp);
}

Fixed &Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	--(this->fixed_point);
	return (temp);
}

float Fixed::operator+(const Fixed &fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(Fixed &fixed)
{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator/(Fixed &fixed)
{
	return (this->toFloat() / fixed.toFloat());
}

float Fixed::operator*(const Fixed &fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed &Fixed::max(Fixed &fixedNum1, Fixed &fixedNum2)
{
	if (fixedNum1.toFloat() >= fixedNum2.toFloat())
		return (fixedNum1);
	return fixedNum2;
}

Fixed const &Fixed::max(const Fixed &fixedNum1, const Fixed &fixedNum2)
{
	if (fixedNum1.toFloat() >= fixedNum2.toFloat())
		return fixedNum1;
	return fixedNum2;
}

Fixed &Fixed::min(Fixed &fixedNum1, Fixed &fixedNum2)
{
	if (fixedNum1.toFloat() <= fixedNum2.toFloat())
		return fixedNum1;
	return fixedNum2;
}

const Fixed &Fixed::min(const Fixed &fixedNum1, const Fixed &fixedNum2)
{
	if (fixedNum1.toFloat() <= fixedNum2.toFloat())
		return fixedNum1;
	return fixedNum2;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	return (o << fixed.toFloat());
}
