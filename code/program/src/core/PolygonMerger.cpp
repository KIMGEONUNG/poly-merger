#include "Polygon.h"
#include "Point.h"
#include "PolygonMerger.h"


namespace PolyMerger
{
	PolygonMerger::PolygonMerger()
	{}

	PolygonMerger::PolygonMerger(int _threshold)
	{
		threshold = _threshold;
	}

	Polygon* PolygonMerger::merger(Polygon polys)
	{
		Point pts[0];
		Polygon* poly = new Polygon(pts, 0);

		return poly;
	}
}

