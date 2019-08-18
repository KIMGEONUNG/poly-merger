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
}
