project(shell_sort)

include_directories(src)
include_directories(include)

set(SOURCES
	src/main.cpp
	src/print.cpp
	src/sortings.cpp
)

add_executable($(PROJECT_NAME) ${SOURCES})
