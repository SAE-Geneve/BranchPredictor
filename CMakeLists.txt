cmake_minimum_required (VERSION 3.18)
project(BranchPredictor)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(branch src/main.cpp src/branch.cpp)
target_include_directories(branch PUBLIC include/)