#include <gtest/gtest.h>

#include "one_phase_merge_sort.h"

TEST(OnePhaseMergeSortTest, EmptyArray)
{
    std::vector<int> arr;

    onePhaseMergeSort(arr, "temp4.txt");

    EXPECT_TRUE(arr.empty());
}

TEST(OnePhaseMergeSortTest, OneElement)
{
    std::vector<int> arr = { 10 };

    onePhaseMergeSort(arr, "temp5.txt");

    EXPECT_EQ(arr,
        (std::vector<int>{10}));
}

TEST(OnePhaseMergeSortTest, ReverseOrder)
{
    std::vector<int> arr = { 9,8,7,6,5 };

    onePhaseMergeSort(arr, "temp6.txt");

    EXPECT_EQ(arr,
        (std::vector<int>{5, 6, 7, 8, 9}));
}