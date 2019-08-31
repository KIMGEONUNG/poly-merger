# file(GLOB_RECURSE UNIT_TEST "*Test.cpp")

set(SRCS 
	test_runner.cpp 
	${PolyMergerTest_SOURCE_DIR}/src/geometry/PolygonTest.cpp
	${PolyMergerTest_SOURCE_DIR}/src/geometry/PointTest.cpp
	${PolyMergerTest_SOURCE_DIR}/src/geometry/BoundingRectangle.cpp
	${PolyMergerTest_SOURCE_DIR}/src/core/PolygonMergerTest.cpp
	)

include_directories(
	${PolyMergerProgram_SOURCE_DIR}/include 
	${PolyMergerTest_SOURCE_DIR}/include
)

add_executable(run_test ${SRCS})

set_target_properties(run_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${COMMON_RUNTIME_OUTPUT_DIRECTORY}")
target_link_libraries(run_test geometry geometry.test pmcore pmcore.test cppunit)




