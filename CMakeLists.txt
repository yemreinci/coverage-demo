cmake_minimum_required(VERSION 3.10)
project(demo)
add_executable(test src/main.cpp src/foo.cpp)

target_compile_options(test PRIVATE "--coverage")
target_link_libraries(test gcov)

