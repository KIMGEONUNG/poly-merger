#ifndef BOUNDINGRECTANGLE_TEST_H
#define BOUNDINGRECTANGLE_TEST_H

#include <cppunit/extensions/HelperMacros.h>

class BoundingRectangleTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( BoundingRectangleTest );
	CPPUNIT_TEST(ctorTest);	
	CPPUNIT_TEST(addPointTest);	
	CPPUNIT_TEST_SUITE_END();
public:
	void ctorTest();
	void addPointTest();
};

CPPUNIT_TEST_SUITE_REGISTRATION( BoundingRectangleTest );

#endif
