cmake_minimum_required(VERSION 3.12)

project(array_bonus LANGUAGES CXX)

find_program(CCHACHE_PROGRAM cchace)
if(CCHACHE_PROGRAM)
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCHACHE_PROGRAM}")
endif()

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(prog main.cpp Solution.cpp)

if(MSVC)
    target_compile_options(prog PRIVATE /WX /W4)
elseif()
    target_compile_options(prog PRIVATE
        -Wall
        -Wextra
        -Wpedantic
        -Wshadow
        -Werror
    )
    target_compile_options(prog PRIVATE -fsanitize=address)
    target_link_options(prog PRIVATE -fsanitize=address)
endif()
