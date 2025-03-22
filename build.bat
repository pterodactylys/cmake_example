@echo off

set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja

chcp 65001
set PROJECT_NAME=shell_sort
set BUILD_FOLDER=build_ninja
set SOURCE_FOLDER=cmake_example

if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

cd %BUILD_FOLDER%

cmake ..
%BUILD_SUFFIX%
cd %PROJECT_NAME%

%PROJECT_NAME%.exe