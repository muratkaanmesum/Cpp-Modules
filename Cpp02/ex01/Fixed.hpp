#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#define floatToFixed(x,nbrBits) (x * (float)(1 << nbrBits))
class Fixed {
private:
	int fixed_point;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed(int number);
	Fixed(const float floatNum);
	int getRawBits();
	float toFloat(void) const;
	int toInt(void) const;
	void setFixedPoint(int fixedPoint);
	Fixed	&operator=(const Fixed &copy);
};
// define outside because the second parameter automatically becomes this
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);


#endif
