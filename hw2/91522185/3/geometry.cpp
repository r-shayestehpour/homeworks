#ifndef _GEOMETRY_H_
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

void Point::setY(const int y)
{
	this->_y = y;
}

PointArray::PointArray(const Point points[], const int size)
{
	this->length = size;
	this->ptr = new Point[this->length];
	for (int i = 0; i < this->length; ++i)
	{
		this->ptr[i] = points[i];
	}
}

PointArray::PointArray(const PointArray& pv)
{
	this->length = pv.length;
	this->ptr = new Point[this->length];

	for (int i = 0; i < this->length; ++i)
	{
		this->ptr[i].setX(pv.ptr[i].getX());
		this->ptr[i].setY(pv.ptr[i].getY());
	}
}

PointArray::~PointArray()
{
	delete this->ptr;
}

void PointArray::resize(int n)
{
	if (n != this->length)
	{
		Point* new_ptr = new Point[n];
		if (n > this->length)
		{
			for (int i = 0; i < this->length; ++ i)
			{
				new_ptr[i] = this->ptr[i];
			}
		}
		else
		{
			for (int i = 0; i < n; ++ i)
			{
				new_ptr[i] = this->ptr[i];
			}
		}
		this->length = n;
		this->ptr = new_ptr;
	}
}

void PointArray::push_back(const Point &p)
{
	this->resize(this->length + 1);
	this->ptr[this->length-1] = p;
}

void PointArray::insert(const int position, const Point &p)
{
	this->resize(this->length + 1);
	for (int i = this->length - 1; i > position; ++i)
	{
		ptr[i] = ptr[i-1];
	}
	this->ptr[position] = p;
}

void PointArray::remove(const int pos)
{
	for (int i = this->length; i > pos; ++i)
	{
		ptr[i-1] = ptr[i];
	}
	this->resize(this->length - 1);
}

const int PointArray::getSize() const
{
	return this->length;
}

void PointArray::clear()
{
	this->resize(0);
}

Point *PointArray::get(const int position)
{
	if (position < this->length && position >= 0)
	{
		return &this->ptr[position];
	}
	else
	{
		Point* ret;
		return ret;
	}
}

const Point *PointArray::get(const int position) const
{
	if (position < this->length && position >= 0)
	{
		return &this->ptr[position];
	}
	else
	{
		Point* ret;
		return ret;
	}
}