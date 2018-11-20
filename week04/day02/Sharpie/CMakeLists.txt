cmake_minimum_required(VERSION 3.12)
project(Sharpie)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sharpie main.cpp cmake-build-debug/Sharpie.cpp cmake-build-debug/Sharpie.h)