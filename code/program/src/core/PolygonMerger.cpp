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

	Polygon* PolygonMerger::merge(Polygon* polys, int count)
	{
		using namespace cv;

		BoundingRectangle br = BoundingRectangle();
		int width, height;

		for (int i= 0; i < count; i++) {
			Polygon poly = polys[i];	
			int ptCount = poly.count();
			Point* pts = poly.getPoints();

			br.addPoints(pts, ptCount);	
		}

		width = br.getWidth();
		height = br.getHeight();

		Mat image = Mat::zeros( width, height, CV_8UC3 );

		Point pts[0];
		Polygon* poly = new Polygon(pts, 0);

		return poly;
	}
}

