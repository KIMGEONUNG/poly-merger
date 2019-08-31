#include "Point.h"

#ifndef BOUNDINGRECTANGLE_H 
#define BOUNDINGRECTANGLE_H

namespace PolyMerger
{

	/** Bounding Rectangle Geometry */
	class BoundingRectangle 
	{
	private:
	    /**
	     * Minimum x coordinates
	     */
		int minimumX;
	    /**
	     * Minimum y coordinates
	     */
		int minimumY;

	    /**
	     * Maximum x coordinates
	     */
		int maximumX;
	    /**
	     * Maximum y coordinates
	     */
		int maximumY;
	public:

	    BoundingRectangle();
	    BoundingRectangle(Point _min, Point _max);
	    BoundingRectangle(Point* pts, int length);
		
		Point getMinPoint();
		Point getMaxPoint();
		/**
		 * return max.x - min.x  
		 */
		int getWidth();
		/**
		 * return max.y - min.y  
		 */
		int getHeight();

		/**
		 * Add point and update bounding rectangle
		 */
		void addPoint(Point pt);
		void addPoints(Point* pts, int len);
	};

}

#endif
