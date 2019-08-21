#include "Point.h"
#include "PointTest.h"
#include <iostream>
#include <cppunit/extensions/HelperMacros.h>

void PointTest::ctorTest()
{
	std::cout << "Point testCtor Test Start" << std::endl;

	PolyMerger::Point pt = PolyMerger::Point(1,2);

	CPPUNIT_ASSERT_EQUAL_MESSAGE("x coordinates not equal", 1, pt.getX());
	CPPUNIT_ASSERT_EQUAL_MESSAGE("x coordinates not equal", 2, pt.getY());
}

void PointTest::equalTest()
{
	using namespace PolyMerger;
	std::cout << "Point equal Test Start" << std::endl;

	Point pt1 = Point(0,0);
	Point pt2 = Point(0,1);
	Point pt3 = Point(0,0);

	bool cmp1 = pt1 == pt2;
	bool cmp2 = pt1 == pt3;

	CPPUNIT_ASSERT_EQUAL_MESSAGE("Point equal test fail", false, cmp1);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Point equal test fail", true, cmp2);
}	
