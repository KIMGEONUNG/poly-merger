file(GLOB_RECURSE SRCS "*.cpp")
include_directories(
	${PolyMergerProgram_SOURCE_DIR}/include 
	${PolyMergerTest_SOURCE_DIR}/include
)

add_library(geometry.test SHARED ${SRCS})
set_target_properties(geometry.test PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${COMMON_LIBRARY_OUTPUT_DIRECTORY}")
