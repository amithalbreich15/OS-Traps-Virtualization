cmake_minimum_required(VERSION 3.22)
project(ex1_new)

set(CMAKE_CXX_STANDARD 11)

add_library(ex1_new
        osm.h osm.cpp main.cpp)
