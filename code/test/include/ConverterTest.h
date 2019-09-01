#ifndef CONVERTERTEST_H 
#define CONVERTERTEST_H 

#include <cppunit/extensions/HelperMacros.h>

class ConverterTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( ConverterTest );
	CPPUNIT_TEST(cvpointTest);	
	CPPUNIT_TEST(cvpointsTest);	
	CPPUNIT_TEST_SUITE_END();
public:
	void cvpointTest();
	void cvpointsTest();
};

CPPUNIT_TEST_SUITE_REGISTRATION( ConverterTest );

#endif
