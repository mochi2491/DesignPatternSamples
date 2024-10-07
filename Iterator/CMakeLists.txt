cmake_minimum_required(VERSION 3.30)
add_library(Iterator STATIC
            src/Student.cpp
)
target_include_directories(Iterator PUBLIC include)