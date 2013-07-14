#ifndef _GEOMETRY_H_
#define _GEOMETRY_H_ 0

class Point
{
	private:
		int _x;
		int _y;
	public:
		Point::Point(int x = 0, int y = 0):
		_x(x), _y(y)
		{
		}
		
		int Point::getX();
		int Point::getY();
		void Point::setX(const int x);
		void Point::setY(const int y);
};

#endif