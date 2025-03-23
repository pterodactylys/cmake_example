@echo off

set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja

chcp 65001

set BUILD_FOLDER=build_%BUILD_SUFFIX%
set SOURCE_FOLDER=projects

if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

cd %BUILD_FOLDER%

cmake -G %BUILD_TYPE% ..\%SOURCE_FOLDER%
cmake --build .

copy ..\%SOURCE_FOLDER%\shell_sort\run_shell_sort.bat .\shell_sort
copy ..\%SOURCE_FOLDER%\shell_sort_mf\run_shell_sort_mf.bat .\shell_sort_mf

copy ..\run_tests.bat .