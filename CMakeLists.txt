cmake_minimum_required(VERSION 3.15)
project(JS_Interpreter)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(tests)

add_subdirectory(lib/googletest-master)