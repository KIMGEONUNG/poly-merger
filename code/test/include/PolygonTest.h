#ifndef POLYGONTEST_H
#define POLYGONTEST_H

#include <cppunit/extensions/HelperMacros.h>

class PolygonTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(PolygonTest);
	CPPUNIT_TEST(basicTest);
	CPPUNIT_TEST(areaTest);
	CPPUNIT_TEST(containTest);
	CPPUNIT_TEST_SUITE_END();
public:
	void basicTest();
	void areaTest();
	void containTest();
};

CPPUNIT_TEST_SUITE_REGISTRATION(PolygonTest);

#endif
