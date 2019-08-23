#include <cppunit/extensions/HelperMacros.h>

#include "PolygonMergerTest.h"
#include "PolygonMerger.h"
#include "Point.h"
#include "Polygon.h"

void PolygonMergerTest::mergeTest()
{
	
	using namespace PolyMerger;

	int morphRecSize = 3;
	PolygonMerger merger; 

	Point pts1[4];
	pts1[0] = Point(1,1);
	pts1[1] = Point(5,1);
	pts1[2] = Point(5,5);
	pts1[3] = Point(1,5);
	Polygon rec1 = Polygon(pts1, 4);

	Point pts2[4];
	pts2[0] = Point(6,1);
	pts2[1] = Point(10,1);
	pts2[2] = Point(10,5);
	pts2[3] = Point(6,5);
	Polygon rec2 = Polygon(pts2, 4);
	merger = PolygonMerger(morphRecSize);

	Polygon polys[2];
	polys[0] = rec1;
	polys[1] = rec2;

	Polygon* rs = merger.merge(polys);
	double area = rs[0].getArea();

	CPPUNIT_ASSERT_EQUAL_MESSAGE("Merge test fail",36.0 ,area);
}

