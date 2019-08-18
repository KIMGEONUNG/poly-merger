#ifndef POLYGONTEST_H
#define POLYGONTEST_H

#include <cppunit/extensions/HelperMacros.h>

class PolygonTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(PolygonTest);
	CPPUNIT_TEST(testBasic1);
	CPPUNIT_TEST_SUITE_END();
public:
	void testBasic1();
};

CPPUNIT_TEST_SUITE_REGISTRATION(PolygonTest);

#endif
