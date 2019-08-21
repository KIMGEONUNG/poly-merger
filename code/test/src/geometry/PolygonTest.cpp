#include "PolygonTest.h"
#include "Polygon.h"
#include "Point.h"
#include <cppunit/extensions/HelperMacros.h>

void PolygonTest::basicTest()
{
	using namespace std;
	using namespace PolyMerger;
	cout << "PolygonTest testBasic Test Start" << endl;

	Point pts [3];
	pts[0] = Point(0,0);
	pts[1] = Point(10,0);
	pts[2] = Point(0,10);
	int cnt = 3;
	int actualCnt = -1;

	Polygon poly = Polygon(pts, cnt);
	actualCnt = poly.count();
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Point count fail", 3, actualCnt);
}

void PolygonTest::areaTest()
{
	using namespace std;
	using namespace PolyMerger;
	cout << "PolygonTest areaTest Start" << endl;

	Polygon poly;
	int cnt;
	double area;
	Point pts [4];
	cnt = 3;
	pts[0] = Point(0,0);
	pts[1] = Point(10,0);
	pts[2] = Point(0,10);
	poly = Polygon(pts, cnt);

	area = poly.getArea();	
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Area test fail", 50.0, area);

	pts[2] = Point(0,0);
	pts[1] = Point(10,0);
	pts[0] = Point(0,10);
	poly = Polygon(pts, cnt);

	area = poly.getArea();	
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Area test fail", 50.0, area);

	cnt = 4;
	pts[0] = Point(5,5);
	pts[1] = Point(5,10);
	pts[2] = Point(10,10);
	pts[3] = Point(10,5);
	poly = Polygon(pts, cnt);

	area = poly.getArea();	
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Area test fail", 25.0, area);
}

void PolygonTest::containTest()
{
	using namespace std;
	using namespace PolyMerger;
	cout << "PolygonTest contain Test Start" << endl;

	int cnt = 3;
	Point pts [3];
	pts[0] = Point(0,0);
	pts[1] = Point(10,0);
	pts[2] = Point(0,10);
	Point inspectPt1 = Point(10,0);
	Point inspectPt2 = Point(5,5);
	Polygon poly = Polygon(pts, cnt);

	bool contain1 = poly.isContain(inspectPt1);
	bool contain2 = poly.isContain(inspectPt2);

	CPPUNIT_ASSERT_EQUAL_MESSAGE("Contain test fail", true, contain1);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Contain test fail", false, contain2);
}
