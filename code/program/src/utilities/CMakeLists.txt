include_directories(${PolyMergerProgram_SOURCE_DIR}/include)

find_package(OpenCV REQUIRED)
add_library(utilities SHARED Converter.cpp)
set_target_properties(utilities PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${COMMON_LIBRARY_OUTPUT_DIRECTORY}")
target_link_libraries(utilities geometry ${OpenCV_LIBS})
