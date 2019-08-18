#ifndef POINT_H 
#define POINT_H 

namespace PolyMerger
{
	/**
	 * Geometry point class used in PolyMerger
	 */
	class Point
	{
		private:
			/**
			 * X coordinates
			 */
			int x;
			/**
			 * Y coordinates
			 */
			int y;

		public:
			Point();

			Point(int ,int);
			/**
			 * Print basic information
			 */
			void print();
			/**
			 * Get X coordinates value
			 */
			int GetX();
			/**
			 * Get Y coordinates value
			 */
			int GetY();
	};
}
#endif