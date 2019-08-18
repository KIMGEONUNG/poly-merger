cmake_minimum_required( VERSION 2.6 )
project( PolyMerger )

set( COMMON_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")
set( COMMON_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/lib")
set( CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules/")

find_package(CPPUNIT REQUIRED)

add_subdirectory(program)
add_subdirectory(test)
