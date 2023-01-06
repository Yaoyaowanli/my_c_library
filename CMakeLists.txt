cmake_minimum_required(VERSION 3.23)
project(my_c_library)

set(CMAKE_CXX_STANDARD 14)

include_directories(my_string)

add_executable(my_c_library
        my_string/my_string.cpp
        my_string/my_string.h
        main.cpp)
