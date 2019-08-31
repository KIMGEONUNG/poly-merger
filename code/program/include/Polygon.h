#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"

namespace PolyMerger
{
	/**
	 * polygon class used in PolyMerger
	 */
	class Polygon
	{
		private:
			/**
			 * This is the points that make up the polygon.
			 * Note. Start point is not same with end point.
			 */
			Point* points;

			/**
			 * The number of points in polygon
			 */
			int pointCount;

		public:
			Polygon();
			/**
			 * Basic constructor 
			 * @param pts The Points is what make up the polygon. The last element of pts is not same with the first one.
			 * @param ptsLen The number of points in pts
			 */
			Polygon(Point* pts, int ptsLen);

			/**
			 * The number of points in polygon
			 */
			int count();
		
			/**
			 * Calculate polygon area
			 */
			double getArea();

			/**
			 * If the polygon has the pt, it return true, otherwise false.
			 */
			bool isContain(Point pt);

			/**
			 * the point element at i index
			 */
			Point pointAt(int i);

			/**
			 * Get point of polygon
			 */
			Point* getPoints();

			/**
			 * Move this polygon
			 */
			Polygon translate(int x, int y);
	};
}

#endif
