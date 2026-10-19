#include <gtest/gtest.h>

#include "two_phase_merge_sort.h"

TEST(TwoPhaseMergeSortTest, EmptyArray)
{
    std::vector<int> arr;

    twoPhaseMergeSort(arr, "temp1.txt");

    EXPECT_TRUE(arr.empty());
}

TEST(TwoPhaseMergeSortTest, OneElement)
{
    std::vector<int> arr = { 5 };

    twoPhaseMergeSort(arr, "temp2.txt");

    EXPECT_EQ(arr,
        (std::vector<int>{5}));
}

TEST(TwoPhaseMergeSortTest, ReverseOrder)
{
    std::vector<int> arr = { 5,4,3,2,1 };

    twoPhaseMergeSort(arr, "temp3.txt");

    EXPECT_EQ(arr,
        (std::vector<int>{1, 2, 3, 4, 5}));
}