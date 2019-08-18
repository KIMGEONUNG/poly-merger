include_directories(${PolyMergerProgram_SOURCE_DIR}/include)

add_library(geometry SHARED Point.cpp Polygon.cpp)
set_target_properties(geometry PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${COMMON_LIBRARY_OUTPUT_DIRECTORY}")
