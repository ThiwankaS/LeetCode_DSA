cmake_minimum_required(VERSION 3.12)

project(dir_name_convertor LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Optional developer builds: ASan/UBSan need matching runtime on the target machine.
option(ENABLE_SANITIZERS "Build with AddressSanitizer and UndefinedBehaviorSanitizer" OFF)

add_executable(snake
    src/main.cpp
    src/convert.cpp
)

target_include_directories(snake PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_compile_options(snake PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -Wshadow
    -Werror
)

if(ENABLE_SANITIZERS)
    target_compile_options(snake PRIVATE -fsanitize=address,undefined)
    target_link_options(snake PRIVATE -fsanitize=address,undefined)
endif()
