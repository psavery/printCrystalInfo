cmake_minimum_required (VERSION 2.6)
project (printCrystalInfo)

set(FIND_SPG_SRCS
    src/printCrystalInfo.cpp
    src/crystal.cpp
    src/elemInfo.cpp)

include_directories(${printCrystalInfo_SOURCE_DIR}/include)

if(UNIX)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
endif(UNIX)

add_executable (printCrystalInfo ${FIND_SPG_SRCS})
