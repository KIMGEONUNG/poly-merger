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
	     * Minimum point of bounding rectangle 
	     */
	    Point min;
	    /**
	     * Maximum point of bounding rectangle 
	     */
	    Point max;
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
	};

}

#endif
