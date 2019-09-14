cmake_minimum_required(VERSION 3.8)

project(BigNumber LANGUAGES C CXX VERSION 1.0.0)

if (NOT "${BigNumber_Source}")
    set(BigNumber_Source
            "src/BigNumber.cpp"
            "src/BigInteger.cpp"
            "src/BigDouble.cpp")
endif ()

add_library(BigNumber SHARED ${BigNumber_Source})

target_include_directories(BigNumber
        PRIVATE "Include"
        PUBLUC ${Project_Include}
        PUBLIC ${CMAKE_CURRENT_BINARY_DIR})