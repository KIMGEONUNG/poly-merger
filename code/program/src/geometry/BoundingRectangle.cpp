#include "Point.h"
#include "BoundingRectangle.h"
#include <iostream> 
#include <algorithm> 
#include <vector> 

namespace PolyMerger
{
	BoundingRectangle::BoundingRectangle()
	{
		this->minimumX = 0; 
		this->minimumY = 0;

		this->maximumX = 0;
		this->maximumY = 0;
	}

    BoundingRectangle::BoundingRectangle(Point _min, Point _max)
	{
		this->minimumX = _min.getX();
		this->minimumY = _min.getY();

		this->maximumX = _max.getX();
		this->maximumY = _max.getY();
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

		this->minimumX = xVec[0]; 
		this->minimumY = yVec[0]; 

		this->maximumX = xVec[length-1]; 
		this->maximumY = yVec[length-1]; 
	}
	
	Point BoundingRectangle::getMinPoint()
	{
		Point minPt = Point(minimumX, minimumY);
		return minPt;
	}
	
	Point BoundingRectangle::getMaxPoint()
	{
		Point maxPt = Point(maximumX, maximumY);
		return maxPt;
	}

	int BoundingRectangle::getWidth()
	{
		return maximumX - minimumX; 
	}

	int BoundingRectangle::getHeight()
	{
		return maximumY - minimumY; 
	}

	void BoundingRectangle::addPoint(Point pt)
	{
		int newX = pt.getX();	
		int newY = pt.getY();	

		if(newX < this->minimumX)
		{
			this->minimumX = newX;
		}
		else if(this->maximumX < newX)
		{
			this->maximumX = newX;
		}

		if(newY < this->minimumY)
		{
			this->minimumY = newY;
		}
		else if(this->maximumY < newY)
		{
			this->maximumY = newY;
		}
	}

	void BoundingRectangle::addPoints(Point* pts, int len)
	{
		for (int i = 0; i < len; i++) {
			Point pt = pts[i];	
			this->addPoint(pt);
		}
	}
}
