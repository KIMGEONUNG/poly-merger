#ifndef POINTTEST_H
#define POINTTEST_H

#include <cppunit/extensions/HelperMacros.h>

class PointTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( PointTest );
	CPPUNIT_TEST(testCtor);	
	CPPUNIT_TEST_SUITE_END();
public:
	void testCtor();
};

CPPUNIT_TEST_SUITE_REGISTRATION( PointTest );

#endif
