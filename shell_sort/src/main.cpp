#include "print.hpp"
#include "sortings.hpp"

#include <iostream>

int main() {
    int arr[] = {1, 8, 2, 5, 3, 11};
	const int arr_size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Массив до сортировки: " << std::endl;
	tools::print_array(arr, arr_size);
    
    tools::sortings::shell_sort_default(arr, arr_size);
	
    std::cout << "Массив после сортировки: " << std::endl;
    tools::print_array(arr, arr_size);

    return 0;
}
