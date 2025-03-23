cmake_minimum_required(VERSION 3.2...3.27.5)

project("multi-project project")

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(shell_sort)
add_subdirectory(shell_sort_mf)
add_subdirectory(sort)

set(CMAKE_SUPPRESS_REGENERATION true)