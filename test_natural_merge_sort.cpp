#include <gtest/gtest.h>

#include "natural_merge_sort.h"

TEST(NaturalMergeSortTest, EmptyArray)
{
    std::vector<int> arr;

    naturalMergeSort(arr, "temp7.txt");

    EXPECT_TRUE(arr.empty());
}

TEST(NaturalMergeSortTest, OneElement)
{
    std::vector<int> arr = { 1 };

    naturalMergeSort(arr, "temp8.txt");

    EXPECT_EQ(arr,
        (std::vector<int>{1}));
}

TEST(NaturalMergeSortTest, ReverseOrder)
{
    std::vector<int> arr = { 7,6,5,4,3 };

    naturalMergeSort(arr, "temp9.txt");

    EXPECT_EQ(arr,
        (std::vector<int>{3, 4, 5, 6, 7}));
}