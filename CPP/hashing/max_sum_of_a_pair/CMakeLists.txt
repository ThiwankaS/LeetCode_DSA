cmake_minimum_required(VERSION 3.12)

project(hashing)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(prog main.cpp Solution.cpp)

if(MSVC)
    target_compile_options(prog PRIVATE /W4 /WX)
else()
    target_compile_options(prog PRIVATE -Wall -Wextra -Werror)
endif()