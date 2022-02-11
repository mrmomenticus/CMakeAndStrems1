cmake_minimum_required(VERSION 3.21)
set(CMAKE_C_COMPILER "gcc-9.3.0")
set(CMAKE_CXX_COMPILER "usr/bin/gcc /usr/lib/gcc /usr/share/gcc /usr/share/man/man1/gcc.1.gz")
project(CmakeAndStrems)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)


add_executable(CmakeAndStrems
        OneStream.cpp
        OneStream.h
        TestProg1.cpp
        TestProg1.h
        TwoStream.cpp
        TwoStream.h)
