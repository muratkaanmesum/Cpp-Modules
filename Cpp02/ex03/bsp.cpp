#include "Point.hpp"
static float getArea(const Point &a , const Point &b, const Point &c){
	float area =	(
							(a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()))
							+ (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
							+ (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
					)
					/ 2;
	if(area < 0)
		return area * -1;
	return area;
}
bool bsp( Point const &a, Point const &b, Point const &c, Point const &point){
	float area1 = getArea(point,a,b);
	float area2 = getArea(point,b,c);
	float area3 = getArea(point,a,c);
	float maxArea = getArea(a,b,c);
	if(area1 + area2 + area3 == maxArea)
		return true;
	return false;
}
