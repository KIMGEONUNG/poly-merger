#ifndef CONVERTER_H
#define CONVERTER_H

#include <opencv2/opencv.hpp>
#include "Point.h"

namespace PolyMerger
{
	class Converter
	{

		public:
			Converter();

			/**
			 * Convert PolyMerger::Point to cv::Point
			 */
			cv::Point ConvertTo(Point pt);
			cv::Point* ConvertTo(Point* pt, int count);
	};
}

#endif
