cmake_minimum_required(VERSION 3.17)
project(ProjectStructure)

set(CMAKE_CXX_STANDARD 17)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
    include(CTest)
endif()

include(FetchContent)

if(${CMAKE_VERSION} VERSION_LESS 3.14)
    include(cmake/add_FetchContent_MakeAvailable.cmake)
endif()

find_package(Boost REQUIRED)

FetchContent_Declare(
        fmtlib
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG 5.3.0)
FetchContent_MakeAvailable(fmtlib)
add_subdirectory(src)
add_subdirectory(application)
