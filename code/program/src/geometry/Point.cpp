#include "Point.h"
#include <iostream>

namespace PolyMerger
{
	Point::Point()
	{
	}

	Point::Point(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	void Point::print()
	{
		std::cout << "x : " << x << ", y : " << y << std::endl;
	}

	int Point::getX()
	{
		return x;
	}

	int Point::getY()
	{
		return y;
	}

	bool Point::operator== (const Point& pt1)
	{
		return x == pt1.x && y == pt1.y;
	}

	Point Point::operator+ (const Point& pt1)
	{
		return Point(x + pt1.x, y + pt1.y);
	}

	Point Point::operator- (const Point& pt1)
	{
		return Point(x - pt1.x, y - pt1.y);
	}
}
