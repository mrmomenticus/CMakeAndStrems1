cmake_minimum_required(VERSION 3.0)
project(CmakeAndStrems)

set(CMAKE_CXX_STANDARD 14)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

include_directories(.)


add_executable(CmakeAndStrems
        OneStream.cpp
        OneStream.h
        TestProg1.cpp
        TestProg1.h
        TwoStream.cpp
        TwoStream.h)
target_link_libraries(CmakeAndStrems PRIVATE Threads::Threads)