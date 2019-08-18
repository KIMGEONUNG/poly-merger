#include "Point.h"
#include <iostream>

PolyMerger::Point::Point()
{
}

PolyMerger::Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;
}

void PolyMerger::Point::print()
{
	std::cout << "x : " << x << ", y : " << y << std::endl;
}

int PolyMerger::Point::GetX()
{
	return x;
}

int PolyMerger::Point::GetY()
{
	return y;
}
