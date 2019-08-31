#include "BoundingRectangle.h"
#include "BoundingRectangleTest.h"
#include "Point.h"
#include <iostream>
#include <cppunit/extensions/HelperMacros.h>

void BoundingRectangleTest::ctorTest()
{
	using namespace PolyMerger;
	std::cout << "BoundingRectangleTest testCtor Test Start" << std::endl;

	bool expected, actual;
	BoundingRectangle br; 
	Point pts[3] = 
	{
		Point(0,0),
		Point(2,6),
		Point(4,2)
	};
	br = BoundingRectangle(pts,3);
	
	expected = true;
	actual = Point(0,0) == br.getMinPoint();
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Bounding Rectangle Min Point Fail",expected, actual);

	actual = Point(4,6) == br.getMaxPoint();
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Bounding Rectangle Max Point Fail",expected, actual);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Bounding Rectangle width Point Fail",4,br.getWidth()); 
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Bounding Rectangle height Point Fail",6,br.getHeight()); 
}

