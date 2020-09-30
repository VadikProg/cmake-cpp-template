set(HEADER_LIST "${ProjectStructure_SOURCE_DIR}/include/project/library.h")

add_library(project_library library.cpp ${HEADER_LIST})
target_include_directories(project_library PUBLIC ../include)
target_link_libraries(project_library PRIVATE Boost::boost)
target_compile_features(project_library PUBLIC cxx_std_17)

source_group(
        TREE "${PROJECT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST})




