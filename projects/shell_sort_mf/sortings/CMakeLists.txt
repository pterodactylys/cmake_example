target_sources(shell_sort_mf
	PRIVATE
		print.cpp
		print.hpp
		sortings.cpp
		sortings.hpp
)

target_include_directories(shell_sort_mf PRIVATE
	"${PROJECT_SOURCE_DIR}/sortings"
)