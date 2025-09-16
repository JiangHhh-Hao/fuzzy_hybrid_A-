cmake_minimum_required(VERSION 3.15)
project(fuzzy_hybrid_a_star LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(fuzzy_hybrid_a_star
               src/main.cpp)
target_include_directories(fuzzy_hybrid_a_star PRIVATE include)