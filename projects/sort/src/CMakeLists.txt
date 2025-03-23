target_sources(shell_sort_lib
	PRIVATE
		sortings.cpp
	PUBLIC
		sortings.hpp
)

target_include_directories(shell_sort_lib PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)