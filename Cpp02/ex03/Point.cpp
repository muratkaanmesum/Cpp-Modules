#include "Point.hpp"

Point::Point(const float x, const float y):x(x), y(y) {
	std::cout << "Point constructor called!"<< std::endl;
}

Point::Point():x(0),y(0) {

}

Point::Point(Point &copy) {
	*this = copy;
}
const Fixed &Point::getX() const {
	return x;
}

const Fixed &Point::getY() const {
	return y;
}

Point &Point::operator=(const Point &c) {
	if(this == &c)
		return *this;
	return *this;
}

Point::~Point() {
std::cout << "Point Destructor Called !" << std::endl;
}
