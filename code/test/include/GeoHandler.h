#ifndef GEOHANDLER_TEST_H 
#define GEOHANDLER_TEST_H 

#include <cppunit/extensions/HelperMacros.h>

class GeoHandlerTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( GeoHandlerTest );
	CPPUNIT_TEST(equalTest);	
	CPPUNIT_TEST_SUITE_END();
public:
	void boundingBoxTest();
};

CPPUNIT_TEST_SUITE_REGISTRATI,N( GeoHandlerTest );

#endif
