#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "sortings.hpp"

TEST(ArraysEqual, AnyElementsCount) {
    int arr[] = {1, 8, 2, 5, 3, 11};
	const int arr_size = sizeof(arr) / sizeof(arr[0]);
	const int expected[] = {1, 2, 3, 5, 8, 11};
	
    tools::sortings::shell_sort(arr, arr_size);

    for (int i = 0; i < arr_size; i++) {
        ASSERT_EQ(expected[i], arr[i])
            << "Отличие в элементе с индексом " << i;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}