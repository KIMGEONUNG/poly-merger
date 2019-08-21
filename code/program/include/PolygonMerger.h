#include "Polygon.h"

#ifndef POLYGONMERGER_H
#define POLYGONMERGER_H

namespace PolyMerger
{

	/** class that merge or union the polygons that is separated slightly */
	class PolygonMerger
	{
	private:
	    /**
	     * This is merge threshold.
	     * The higher the value, the farther away polygons can be combined.
	     */
	    int threshold;
	public:

	    PolygonMerger();
	    PolygonMerger(int _threshold);
	
		/**
		 * merge the Polygons 
		 */
		Polygon* merger(Polygon polys);
	};

}

#endif
