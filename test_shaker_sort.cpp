#include <gtest/gtest.h>
#include "shaker_sort.h"

TEST(ShakerSortTest, Variant4)
{
    std::vector<int> arr = { 9, 19, 15, 2, 10, 7, 0, 4 };

    shakerSort(arr);

    std::vector<int> expected = { 0, 2, 4, 7, 9, 10, 15, 19 };

    EXPECT_EQ(arr, expected);
}

TEST(ShakerSortTest, EmptyArray)
{
    std::vector<int> arr;

    shakerSort(arr);

    EXPECT_TRUE(arr.empty());
}

TEST(ShakerSortTest, SingleElement)
{
    std::vector<int> arr = { 100 };

    shakerSort(arr);

    std::vector<int> expected = { 100 };

    EXPECT_EQ(arr, expected);
}

TEST(ShakerSortTest, AlreadySorted)
{
    std::vector<int> arr = { 1, 2, 3, 4, 5 };

    shakerSort(arr);

    std::vector<int> expected = { 1, 2, 3, 4, 5 };

    EXPECT_EQ(arr, expected);
}

TEST(ShakerSortTest, ReverseOrder)
{
    std::vector<int> arr = { 5, 4, 3, 2, 1 };

    shakerSort(arr);

    std::vector<int> expected = { 1, 2, 3, 4, 5 };

    EXPECT_EQ(arr, expected);
}