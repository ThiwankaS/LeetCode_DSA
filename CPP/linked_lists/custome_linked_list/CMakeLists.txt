cmake_minimum_required(VERSION 3.12)

# defining the project
project(linked_list LANGUAGES CXX)

# set up ccache
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
endif()

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(prog main.cpp LinkedList.cpp)

if(MSVC)
    target_compile_options(prog PRIVATE /W4 /WX)
else() 
    target_compile_options(prog PRIVATE 
        -Wall
        -Wextra
        -Wshadow
        -Wpedantic
        -Werror
    )
    target_compile_options(prog PRIVATE -fsanitize=address)
    target_link_options(prog PRIVATE -fsanitize=address)
endif()
