#ifndef POLYGONMERGERTEST_H
#define POLYGONMERGERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class PolygonMergerTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( PolygonMergerTest );
	CPPUNIT_TEST( mergeTest );
	CPPUNIT_TEST_SUITE_END();
public:
	void mergeTest();
};

CPPUNIT_TEST_SUITE_REGISTRATION( PolygonMergerTest );

#endif
