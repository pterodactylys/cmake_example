#include <iostream>

void shell_sort_default(int* const arr, const int size);
void print_array(int* arr, const int size);

int main() {
    int arr[] = {1, 8, 2, 5, 3, 11};
	const int arr_size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Массив до сортировки: " << std::endl;
    print_array(arr, arr_size);
    
    shell_sort_default(arr, arr_size);
	
    std::cout << "Массив после сортировки: " << std::endl;
    print_array(arr, arr_size);

    return 0;
}

void shell_sort_default(int* const arr, const int size) {
    int current_range = 1;
    while (3 * current_range + 1 <= (size + 2) / 3)
        current_range = 3 * current_range + 1;
    for (; current_range > 0; current_range /= 3) {
        for( int i = current_range; i < size; ++i) {
        int temp = arr[i];
        int j = i;
        for (; j >= current_range && arr[j - current_range] > temp; j -= current_range )
            arr[j] = arr[j - current_range];
        arr[j] = temp ;
        }
    }
}

void print_array(int* arr, const int size) {
    const char format = ' ';
	for (int i = 0; i < size; i++) {
		std::cout << format << arr[i];
	}
	std::cout << std::endl;
}