cmake_minimum_required(VERSION 3.12)

project(hashing)

set(CMAKE_CXX_STANDARD 20)              # setting CPP std to C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON)     # enforce to use std
set(CMAKE_CXX_EXTENSIONS OFF)           # disabling compiler specific extensions

add_executable(prog main.cpp Solution.cpp)

if(MSVC)
    target_compile_options(prog PRIVATE /W4 /WX)                # for Microsoft Visual Studio
else()
    target_compile_options(prog PRIVATE -Wall -Wextra -Werror)  # for gnu and clang
endif()