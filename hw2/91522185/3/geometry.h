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

class PointArray
{
	private:
		int length;
		Point* ptr;
		void resize(int n);

	public:
		PointArray::PointArray()
		{length = 0;};
		PointArray::PointArray(const Point points[], const int size);
		PointArray::PointArray(const PointArray& pv);
		PointArray::~PointArray();
		void PointArray::push_back(const Point &p);
		void PointArray::insert(const int position, const Point &p);
		void PointArray::remove(const int pos);
		const int PointArray::getSize() const;
		void PointArray::clear();
		Point *PointArray::get(const int position);
		const Point *PointArray::get(const int position) const;
};

#endif