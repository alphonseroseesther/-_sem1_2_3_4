#include <gtest/gtest.h>
#include "binary_insertion_sort.h"

TEST(BinaryInsertionSortTest, ReverseOrder)
{
    std::vector<int> arr = { 5, 4, 3, 2, 1 };

    binaryInsertionSort(arr);

    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(BinaryInsertionSortTest, EmptyArray)
{
    std::vector<int> arr;

    binaryInsertionSort(arr);

    EXPECT_TRUE(arr.empty());
}

TEST(BinaryInsertionSortTest, OneElement)
{
    std::vector<int> arr = { 10 };

    binaryInsertionSort(arr);

    EXPECT_EQ(arr, (std::vector<int>{10}));
}

TEST(BinaryInsertionSortTest, AlreadySorted)
{
    std::vector<int> arr = { 1, 2, 3, 4, 5 };

    binaryInsertionSort(arr);

    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}