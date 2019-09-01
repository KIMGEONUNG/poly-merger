file(GLOB_RECURSE SRCS "*.cpp")
include_directories(
	${PolyMergerProgram_SOURCE_DIR}/include 
	${PolyMergerTest_SOURCE_DIR}/include
)

find_package(OpenCV REQUIRED)
add_library(utilities.test SHARED ${SRCS})
set_target_properties(utilities.test PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${COMMON_LIBRARY_OUTPUT_DIRECTORY}")
target_link_libraries(utilities.test geometry ${OpenCV_LIBS})
