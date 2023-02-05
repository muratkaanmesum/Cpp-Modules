#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

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
	std::ostream& operator<< (std::ostream &out, Fixed &input);

};


#endif //FIXED_HPP
