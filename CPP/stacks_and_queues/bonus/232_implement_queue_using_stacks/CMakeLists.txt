cmake_minimum_required(VERSION 3.12)

project(stack_and_queue_bonus LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(prog main.cpp MyQueue.cpp)

target_compile_options(prog PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -Wshadow
    -Werror
    -fsanitize=address,undefined
)

target_link_options(prog PRIVATE -fsanitize=address,undefined)
