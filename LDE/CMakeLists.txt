cmake_minimum_required(VERSION 3.12)
project(LDE)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cmake-build-debug)

add_executable(LDE
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/LDE.cbp
        cmake-build-debug/LDE.exe
        cmake-build-debug/Makefile
        CMakeLists.txt
        LDE.hpp
        main.cpp
        No.hpp)
