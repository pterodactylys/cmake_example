cmake_minimum_required(VERSION 3.10)

project(bubble_sort)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)
include_directories(include)

set(SOURCES
	src/main.cpp
	src/print.cpp
	src/sortings.cpp
)

add_executable(bubble_sort ${SOURCES})
