#include <opencv2/opencv.hpp>
#include "BoundingRectangle.h"
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

	Polygon* PolygonMerger::merge(Polygon* polys)
	{
		using namespace cv;

		Mat image = Mat::zeros( 400, 400, CV_8UC3 );

		Point pts[0];
		Polygon* poly = new Polygon(pts, 0);

		return poly;
	}
}

