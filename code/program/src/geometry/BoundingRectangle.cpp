#include "Point.h"
#include "BoundingRectangle.h"
#include <iostream> 
#include <algorithm> 
#include <vector> 

namespace PolyMerger
{
	BoundingRectangle::BoundingRectangle(){}
    BoundingRectangle::BoundingRectangle(Point _min, Point _max)
	{
		this->max=_max;
		this->min=_min;
	}
    BoundingRectangle::BoundingRectangle(Point* pts, int length)
	{
		Point minPt, maxPt;
		int xs[length];
		int ys[length];

		for (int j = 0; j < length ; j++) {
			xs[j] = pts[j].getX();	
			ys[j] = pts[j].getY();	
		}
		std::vector<int> xVec (xs, xs+length); 
		std::vector<int> yVec (ys, ys+length); 

		std::sort(xVec.begin(), xVec.begin()+length);
		std::sort(yVec.begin(), yVec.begin()+length);


		minPt = Point(xVec[0],yVec[0]);
		maxPt = Point(xVec[length-1],yVec[length-1]);

		this->min = minPt;
		this->max = maxPt;
		
	}
	
	Point BoundingRectangle::getMinPoint()
	{
		return this->min;
	}
	
	Point BoundingRectangle::getMaxPoint()
	{
		return this->max;
	}

	int BoundingRectangle::getWidth()
	{
		int maxX = max.getX();
		int minX = min.getX();
		return maxX - minX;  
	}

	int BoundingRectangle::getHeight()
	{
		int maxY = max.getY();
		int minY = min.getY();
		return maxY - minY;  
	}
}
