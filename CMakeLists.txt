cmake_minimum_required(VERSION 3.30)
project(DessignPatternSamples 
        VERSION 1.0 
        LANGUAGES CXX        
        )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Iterator)

add_executable(Main Main.cpp)
target_link_libraries(Main PRIVATE Iterator)