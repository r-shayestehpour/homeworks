#ifdndef _GEOMETRY_H_
#include "geometry.h"
#endif

int Point::getX()
{
	return this->_x;
}

int Point::getY()
{
	return this->_y;
}

void Point::setX(const int x)
{
	this->_x = x;
}

void Point::setY(const int Y)
{
	this->_y = y;
}