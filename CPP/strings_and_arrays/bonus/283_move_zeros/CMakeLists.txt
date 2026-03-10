cmake_minimum_required(VERSION 3.12)

project(array_bonus LANGUAGES CXX)

find_program(CCHACE_PROGRAM cchache)
if(CCHACE_PROGRAM)
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCHACE_PROGRAM}")
endif()

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(prog main.cpp Solution.cpp)

if(MSVC)
    target_compile_options(prog PRIVATE /W4 /WX)
else()
    target_compile_options(prog PRIVATE
        -Wextra
        -Wall
        -Wshadow
        -Wpedantic
        -Werror
    )
    target_compile_options(prog PRIVATE -fsanitize=address)
    target_link_options(prog PRIVATE -fsanitize=address)
endif()
