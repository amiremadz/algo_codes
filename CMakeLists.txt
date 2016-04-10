cmake_minimum_required(VERSION 2.8)
PROJECT(bin)
SET(CMAKE_BUILD_TYPE "Debug")
#SET(CMAKE_BUILD_TYPE "Release")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y") #C++14


SET(all_srcs sort_test.cpp)
ADD_EXECUTABLE(bin ${all_srcs})
