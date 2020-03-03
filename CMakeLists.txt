cmake_minimum_required(VERSION 3.12)
project(testfmt)

add_subdirectory(fmt)

add_executable(example main.cpp)
target_link_libraries(example fmt)