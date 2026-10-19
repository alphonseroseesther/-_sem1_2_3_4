#include <gtest/gtest.h>
#include <vector>
#include "selection_sort.h"

// Test 1 : tableau normal (variante 4)
TEST(SelectionSortTest, NormalArray) {
    std::vector<int> arr = { 9, 19, 15, 2, 10, 7, 0, 4 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{0, 2, 4, 7, 9, 10, 15, 19}));
}

// Test 2 : tableau vide
TEST(SelectionSortTest, EmptyArray) {
    std::vector<int> arr;
    selectionSort(arr);
    EXPECT_TRUE(arr.empty());
}

// Test 3 : un seul élément
TEST(SelectionSortTest, SingleElement) {
    std::vector<int> arr = { 42 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}

// Test 4 : déjà trié
TEST(SelectionSortTest, AlreadySorted) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Test 5 : trié à l’envers
TEST(SelectionSortTest, ReverseSorted) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Test 6 : doublons
TEST(SelectionSortTest, Duplicates) {
    std::vector<int> arr = { 3, 1, 2, 3, 1 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 3}));
}
