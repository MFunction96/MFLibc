cmake_minimum_required (VERSION 3.8)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

# If variable does not expand to one of the above, CMake will expand it then try again

# Automatically getting PROJECT_VERSION_MAJOR, My_VERSION_MAJOR, etc.
#project(LMWorksUpdateAgent LANGUAGES CXX VERSION ${VERSION_STRING})
project("MFLibc" LANGUAGES C CXX VERSION 1.0.0)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

SET(CMAKE_BUILD_TYPE "Debug")

SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

# set(CMAKE_VERBOSE_MAKEFILE ON)

# enable_testing()

add_definitions(-DDEBUG)

SET(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin") # 可执行文件输出目录
#file(TO_CMAKE_PATH "${PROJECT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
#if(EXISTS "${LOC_PATH}")
#    message(FATAL_ERROR "You cannot build in a source directory (or any directory with a CMakeLists.txt file). Please make a build subdirectory. Feel free to remove CMakeCache.txt and CMakeFiles.")
#endif()

add_subdirectory(Exception)

if (NOT "${Project_Include}")
    set(Project_Include
            "${PROJECT_SOURCE_DIR}/Exception/Include"
            )
endif ()

add_subdirectory(BigNumber)