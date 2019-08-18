#include "Point.h"
#include "PointTest.h"
#include <iostream>


void PointTest::testCtor()
{
	std::cout << "Point testCtor Test Start" << std::endl;

	PolyMerger::Point pt = PolyMerger::Point(1,2);

	CPPUNIT_ASSERT_EQUAL_MESSAGE("x coordinates not equal", 1, pt.GetX());
	CPPUNIT_ASSERT_EQUAL_MESSAGE("x coordinates not equal", 2, pt.GetY());
}
