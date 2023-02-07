#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed {
private:
	int fixed_point;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed	&operator=(const Fixed &copy);
	int getRawBits();
	void setFixedPoint(int fixedPoint);
};


#endif //FIXED_HPP
