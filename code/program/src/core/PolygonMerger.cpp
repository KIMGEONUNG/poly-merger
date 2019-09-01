#include <iostream>
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <stdlib.h>

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
		BoundingRectangle br = BoundingRectangle();
		Polygon movedPolys[count];
		int polysPtCounts[count];	
		Point movePt;
		int moveX, moveY;
		int width, height;
		const cv::Point* ptss[count];

		for (int i= 0; i < count; i++) {
			Polygon poly = polys[i];	
			int ptCount = poly.count();
			polysPtCounts[i] = ptCount;

			Point* pts = poly.getPoints();
			br.addPoints(pts, ptCount);	
		}
		
		movePt = br.getMinPoint();
		moveX = movePt.getX();
		moveY = movePt.getY();
		width = br.getWidth();
		height = br.getHeight();

		// for (int i = 0; i < count; i++) {
		// 	Polygon poly = polys[i];
		// 	Polygon movedPoly = poly.translate(moveX,moveY);
		// 	movedPolys[i] = movedPoly; 
		// 	Point* movedPts = movedPoly.getPoints();
		// 	ptss[i] = movedPts; 
		// }
        //
        //
		// cv::Mat image = cv::Mat::zeros( width, height, CV_8UC3 );
    	// fillPoly( image, ptss, polysPtCounts, count, cv::Scalar( 255, 255, 255 ), 8 );
 		// Mat eroded = Merge(image); 	


		Point pts[0];
		Polygon* poly = new Polygon(pts, 0);

		return poly;
	}

}

	// int size = 10; 
    //
    // Mat dilated;
    // dilate(original, dilated, getStructuringElement(MORPH_RECT, Size(size, size)));
    //
    // Mat eroded;
    // erode(dilated, eroded, getStructuringElement(MORPH_RECT, Size(size, size)));
