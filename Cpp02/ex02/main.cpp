#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(4.2f);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "******************" << std::endl;
	std::cout << Fixed::min(Fixed(42.2f) + Fixed(2), Fixed(1)) << std::endl;

	std::cout <<"c is "<<  c << " b is " << b << " mult is " << c * b << std::endl;
	return 0;
}
