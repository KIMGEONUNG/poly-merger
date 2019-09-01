#include <iostream>
#include <opencv2/opencv.hpp>
#include <cppunit/extensions/HelperMacros.h>
#include "Point.h"
#include "ConverterTest.h"
#include "Converter.h"

void ConverterTest::cvpointTest()
{
	std::cout << "cvpoint Test Start" << std::endl;
	PolyMerger::Point pmPt = PolyMerger::Point(3,4);
	PolyMerger::Converter cvt = PolyMerger::Converter();
	cv::Point ctPt = cvt.ConvertTo(pmPt);
	cv::Point expectedPt = cv::Point(3,4);
	bool cmp1 = ctPt == expectedPt;

	CPPUNIT_ASSERT_EQUAL_MESSAGE("cv::point conversion fail1",true ,cmp1);
	// CPPUNIT_ASSERT_EQUAL_MESSAGE("cv::point conversion fail2", ,);
}

void ConverterTest::cvpointsTest()
{
	std::cout << "cvpoints testCtor Test Start" << std::endl;
	PolyMerger::Point pmPts[3] =
	{
		PolyMerger::Point(3,4),
		PolyMerger::Point(5,3),
		PolyMerger::Point(0,2)
	};
	PolyMerger::Converter cvt = PolyMerger::Converter();
	cv::Point* ctPt = cvt.ConvertTo(pmPts,3);
	bool cmp1 = ctPt[0] == cv::Point(3,4);
	bool cmp2 = ctPt[1] == cv::Point(5,3);
	bool cmp3 = ctPt[2] == cv::Point(0,2);

	CPPUNIT_ASSERT_EQUAL_MESSAGE("cv::point conversion fail1",true ,cmp1);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("cv::point conversion fail2",true ,cmp2);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("cv::point conversion fail3",true ,cmp3);
}
