cmake_minimum_required(VERSION 3.23)
project(machine_learning_algorithms_in_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(principal_component_analysis)

add_executable(machine_learning_algorithms_in_cpp
        principal_component_analysis/pca.cpp
        principal_component_analysis/pca.h)
