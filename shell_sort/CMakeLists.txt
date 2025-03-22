cmake_minimum_required(VERSION 3.10)

project(shell_sort)

include_directories(src)

set(SOURCES
	src/main.cpp
	src/print.cpp
	src/sortings.cpp
)

add_executable(shell_sort ${SOURCES})
