cmake_minimum_required(VERSION 3.10)

project(squaring_sorted_array)

set(CMAKE_CXX_STANDARD 20)

# setting compiler flags for gprof
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg -g -O2")

# setting linker flags for gprof
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pg")

add_executable(sqaure main.cpp Solution.cpp)