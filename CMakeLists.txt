cmake_minimum_required(VERSION 3.6)
project(DataStructure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")

set(SOURCE_FILES hanotower.c)
add_executable(DataStructure ${SOURCE_FILES} )