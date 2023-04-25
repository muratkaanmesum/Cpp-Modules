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

	Fixed &operator=(const Fixed &copy);

	bool operator>(const Fixed &right) const;

	bool operator<(const Fixed &right) const;

	bool operator<=(const Fixed &right) const;

	bool operator>=(const Fixed &right) const;

	bool operator==(const Fixed &right) const;

	bool operator!=(const Fixed &right) const;

	Fixed &operator++();

	Fixed operator++(int);

	Fixed &operator--();

	Fixed operator--(int);

	float operator+(const Fixed &fixed);
	float operator-(Fixed &fixed);
	float operator/(Fixed &fixed);
	float operator*(const Fixed &fixed);
	static Fixed & max(Fixed &fixedNum1, Fixed &fixedNum2);
	static const Fixed & max(const Fixed &fixedNum1,const Fixed &fixedNum2);
	static Fixed &min(Fixed &fixedNum1, Fixed &fixedNum2);
	static const Fixed &min(const Fixed &fixedNum1,const Fixed &fixedNum2);
};

// define outside because the first parameter automatically becomes this
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);


#endif
