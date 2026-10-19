#include <gtest/gtest.h>
#include <vector>
#include "shell_sort.h"

TEST(ShellSortTest, EmptyArray)
{
    std::vector<int> arr;

    shellSort(arr);

    EXPECT_TRUE(arr.empty());
}

TEST(ShellSortTest, OneElement)
{
    std::vector<int> arr = { 42 };

    shellSort(arr);

    EXPECT_EQ(arr, (std::vector<int>{42}));
}

TEST(ShellSortTest, AlreadySorted)
{
    std::vector<int> arr = { 1, 2, 3, 4, 5 };

    shellSort(arr);

    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(ShellSortTest, ReverseOrder)
{
    std::vector<int> arr = { 5, 4, 3, 2, 1 };

    shellSort(arr);

    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(ShellSortTest, Variant4)
{
    std::vector<int> arr = { 9, 19, 15, 2, 10, 7, 0, 4 };

    shellSort(arr);

    EXPECT_EQ(arr,
        (std::vector<int>{0, 2, 4, 7, 9, 10, 15, 19}));
}