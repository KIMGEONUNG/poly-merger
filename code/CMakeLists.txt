cmake_minimum_required( VERSION 2.6 )
project( PolyMerger )

set( COMMON_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")
set( COMMON_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/lib")
set( CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules/")
set( CMAKE_CXX_FLAGS "-g -fprofile-arcs -ftest-coverage")
set( CMAKE_CXX_OUTPUT_EXTENSION_REPLACE ON )

find_package(CPPUNIT REQUIRED)

add_subdirectory(program)
add_subdirectory(test)
  
#Testing

add_custom_target(gcov
    COMMAND mkdir -p coverage
	COMMAND ${CMAKE_MAKE_PROGRAM} test  
	WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )

enable_testing()
add_test(output_test ${COMMON_RUNTIME_OUTPUT_DIRECTORY}/run_test)

# add_custom_command(TARGET gcov
#     COMMAND echo "=================== GCOV ===================="
#     COMMAND gcov -b ${CMAKE_SOURCE_DIR}/*.cpp -o ${OBJECT_DIR}
#         | grep -A 5 "Adder.cpp" > CoverageSummary.tmp
#     COMMAND cat CoverageSummary.tmp
#     COMMAND echo "-- Coverage files have been output to ${CMAKE_BINARY_DIR}/coverage"
#     WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/coverage  # Need separate command for this line
#     )
# # add_dependencies(gcov RunAdder)
# # Make sure to clean up the coverage folder
# set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES coverage)
#
# # Create the gcov-clean target. This cleans the build as well as generated 
# # .gcda and .gcno files.
# add_custom_target(scrub
#     COMMAND ${CMAKE_MAKE_PROGRAM} clean
#     COMMAND rm -f ${OBJECT_DIR}/*.gcno
#     COMMAND rm -f ${OBJECT_DIR}/*.gcda
#     WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
#     )
#
