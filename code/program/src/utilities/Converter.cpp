#include <opencv2/opencv.hpp>
#include "Converter.h"
#include "Point.h"

namespace PolyMerger
{
	Converter::Converter()
	{
	}

	cv::Point Converter::ConvertTo(Point pt)
	{
		int x = pt.getX();
		int y = pt.getY();
		cv::Point rsPt = cv::Point(x,y);
		return rsPt;
	}

	cv::Point* Converter::ConvertTo(Point* pt, int count)
	{
		cv::Point* rsPt = new cv::Point[count];
		for (int i = 0; i < count; i++) {
			rsPt[i] = this->ConvertTo(pt[i]);
		}
		return rsPt;
	}
}
