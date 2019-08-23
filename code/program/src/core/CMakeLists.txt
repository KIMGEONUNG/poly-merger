include_directories(${PolyMergerProgram_SOURCE_DIR}/include)

find_package(OpenCV REQUIRED)
add_library(pmcore SHARED PolygonMerger.cpp)
set_target_properties(pmcore PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${COMMON_LIBRARY_OUTPUT_DIRECTORY}")
target_link_libraries(pmcore geometry ${OpenCV_LIBS})
