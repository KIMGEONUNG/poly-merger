#include "PolygonTest.h"
#include "Polygon.h"
#include "Point.h"
#include <cppunit/extensions/HelperMacros.h>

void PolygonTest::testBasic1()
{
	using namespace std;
	using namespace PolyMerger;
	cout << "PolygonTest testBasic Test Start" << endl;

	Point pts [3];
	pts[0] = Point(0,0);
	pts[1] = Point(10,0);
	pts[2] = Point(0,10);
	int cnt = 3;
	int actualCnt = NULL;

	Polygon poly = Polygon(pts, cnt);
	actualCnt = poly.count();
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Point count fail", 3, actualCnt);
}


