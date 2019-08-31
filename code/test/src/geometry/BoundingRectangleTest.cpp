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
	
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Bounding Rectangle width Point Fail",4,br.getWidth()); 
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Bounding Rectangle height Point Fail",6,br.getHeight()); 

	expected = true;
	actual = Point(0,0) == br.getMinPoint();
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Bounding Rectangle Min Point Fail",expected, actual);

	actual = Point(4,6) == br.getMaxPoint();
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Bounding Rectangle Max Point Fail",expected, actual);
}

void BoundingRectangleTest::addPointTest()
{
	using namespace PolyMerger;
	std::cout << "BoundingRectangleTest addPointTest Test Start" << std::endl;

	bool expected, actual;
	BoundingRectangle br; 
	Point pts[3] = 
	{
		Point(0,0),
		Point(2,6),
		Point(4,2)
	};
	br = BoundingRectangle(pts,3);

	br.addPoint(Point(-1,-1));
	CPPUNIT_ASSERT_EQUAL(-1, br.getMinPoint().getX());
	CPPUNIT_ASSERT_EQUAL(-1, br.getMinPoint().getY());
	CPPUNIT_ASSERT_EQUAL( 4, br.getMaxPoint().getX());
	CPPUNIT_ASSERT_EQUAL( 6, br.getMaxPoint().getY());

	br.addPoint(Point(7,8));
	CPPUNIT_ASSERT_EQUAL(-1, br.getMinPoint().getX());
	CPPUNIT_ASSERT_EQUAL(-1, br.getMinPoint().getY());
	CPPUNIT_ASSERT_EQUAL( 7, br.getMaxPoint().getX());
	CPPUNIT_ASSERT_EQUAL( 8, br.getMaxPoint().getY());
	
	Point appends[5] = 
	{
		Point(-4,-9),
		Point(2,6),
		Point(4,2),
		Point(13,2),
		Point(4,15)
	};

	br.addPoints(appends, 5);
	CPPUNIT_ASSERT_EQUAL(-4, br.getMinPoint().getX());
	CPPUNIT_ASSERT_EQUAL(-9, br.getMinPoint().getY());
	CPPUNIT_ASSERT_EQUAL( 13, br.getMaxPoint().getX());
	CPPUNIT_ASSERT_EQUAL( 15, br.getMaxPoint().getY());
}
