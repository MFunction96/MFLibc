cmake_minimum_required(VERSION 3.8)

project(Exception LANGUAGES C CXX VERSION 1.0.0)

if (NOT "${Exception_Source}")
    set(Exception_Source
            "src/Exception.cpp")
endif ()

add_library(Exception SHARED ${Exception_Source})

target_include_directories(Exception
        PRIVATE "Include"
        PUBLIC ${CMAKE_CURRENT_BINARY_DIR})