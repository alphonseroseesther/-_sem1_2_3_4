#include <gtest/gtest.h>
#include <vector>
#include "optimized_bubble_sort.h"

// Test 1 : tableau normal (variante 4)
TEST(OptimizedBubbleSortTest, NormalArray) {
    std::vector<int> arr = { 9, 19, 15, 2, 10, 7, 0, 4 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{0, 2, 4, 7, 9, 10, 15, 19}));
}

// Test 2 : tableau vide
TEST(OptimizedBubbleSortTest, EmptyArray) {
    std::vector<int> arr;
    optimizedBubbleSort(arr);
    EXPECT_TRUE(arr.empty());
}

// Test 3 : un seul élément
TEST(OptimizedBubbleSortTest, SingleElement) {
    std::vector<int> arr = { 42 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}

// Test 4 : déjà trié
TEST(OptimizedBubbleSortTest, AlreadySorted) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Test 5 : trié à l’envers
TEST(OptimizedBubbleSortTest, ReverseSorted) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Test 6 : doublons
TEST(OptimizedBubbleSortTest, Duplicates) {
    std::vector<int> arr = { 3, 1, 2, 3, 1 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 3}));
}
