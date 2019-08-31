#ifndef POINTTEST_H
#define POINTTEST_H

#include <cppunit/extensions/HelperMacros.h>

class PointTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( PointTest );
	CPPUNIT_TEST(ctorTest);	
	CPPUNIT_TEST(equalTest);	
	CPPUNIT_TEST(arithmeticTest);	
	CPPUNIT_TEST_SUITE_END();
public:
	void ctorTest();
	void equalTest();
	void arithmeticTest();
};

CPPUNIT_TEST_SUITE_REGISTRATION( PointTest );

#endif
