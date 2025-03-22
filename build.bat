@echo off

set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja

chcp 65001

set BUILD_FOLDER=build_%BUILD_SUFFIX%
set SOURCE_FOLDER=cmake_example

if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

cd %BUILD_FOLDER%

cmake -G %BUILD_TYPE%
cmake --build .

copy ..\%SOURCE_FOLDER%\shell_sort\run_shell_sort.bat .\shell_sort