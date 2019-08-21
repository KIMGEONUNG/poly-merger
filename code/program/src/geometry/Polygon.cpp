#include "Polygon.h"
#include "Point.h"

namespace PolyMerger
{
	Polygon::Polygon()
	{
	}

	Polygon::Polygon(Point* pts, int ptsLen)
	{
		points = pts;
		pointCount = ptsLen;
	}

	int Polygon::count()
	{
		return pointCount;
	}

	bool Polygon::isContain(Point pt)
	{
		for(int i = 0; i < pointCount; i++)
		{
			Point target = points[i];
			if(target == pt)
			{
				return true;
			}
		}
		return false;
	}

	double Polygon::getArea()
	{
		double area = 0;	
		for(int i = 0; i < pointCount; i++)
		{
			Point before = points[i];
			Point after = points[(i+1)%pointCount];

			double subArea = ( after.getY() - before.getY() ) * ( after.getX() + before.getX() ) * 0.5;
			area += subArea;
		}
		if(area <0 )
		{
			area *= -1;
		}

		return area;
	}
}
