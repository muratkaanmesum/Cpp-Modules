#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point {
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(float x, float y);
	Point(Point &copy);
	~Point();
	Point &operator=(const Point &c);

	const Fixed &getX() const;
	const Fixed &getY() const;
};



#endif //POINT_HPP
