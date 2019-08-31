#include "BoundingRectangle.h"
#include "Point.h"
#include <iostream>
#include <cppunit/extensions/HelperMacros.h>

void BoundingRectangleTest::ctorTest()
{
	std::cout << "BoundingRectangleTest testCtor Test Start" << std::endl;

	Point pts[3]; 
	BoundingRectangle br; 

	pts = 
	{
		Point(0,0),
		Point(2,6),
		Point(4,2),
	}
	br = BoundingRectangle(pts,3);
	
	CPPUNIT_ASSERT_EQUAL_MESSAGE(Point(0,0), br.getMinPoint());
	CPPUNIT_ASSERT_EQUAL_MESSAGE(Point(4,6), br.getMaxPoint());
	CPPUNIT_ASSERT_EQUAL_MESSAGE(4,br.getWidth()); 
	CPPUNIT_ASSERT_EQUAL_MESSAGE(6,br.getHeight()); 

	


	// CPPUNIT_ASSERT_EQUAL_MESSAGE("x coordinates not equal", 2, pt.getY());
}

