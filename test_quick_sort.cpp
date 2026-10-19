#include <gtest/gtest.h>
#include <vector>
#include "quick_sort.h"

TEST(QuickSortTest, EmptyArray)
{
    std::vector<int> arr;

    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);

    EXPECT_TRUE(arr.empty());
}

TEST(QuickSortTest, OneElement)
{
    std::vector<int> arr = { 42 };

    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);

    EXPECT_EQ(arr, (std::vector<int>{42}));
}

TEST(QuickSortTest, AlreadySorted)
{
    std::vector<int> arr = { 1, 2, 3, 4, 5 };

    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);

    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(QuickSortTest, ReverseOrder)
{
    std::vector<int> arr = { 5, 4, 3, 2, 1 };

    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);

    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(QuickSortTest, Variant4)
{
    std::vector<int> arr = { 9, 19, 15, 2, 10, 7, 0, 4 };

    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);

    EXPECT_EQ(arr,
        (std::vector<int>{0, 2, 4, 7, 9, 10, 15, 19}));
}