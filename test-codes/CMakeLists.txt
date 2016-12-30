cmake_minimum_required(VERSION 2.8)
PROJECT(check)
#SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(CMAKE_BUILD_TYPE "Release")


SET(all_srcs check.cpp)
ADD_EXECUTABLE(check ${all_srcs})
