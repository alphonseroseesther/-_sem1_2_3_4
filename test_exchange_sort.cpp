#include <gtest/gtest.h>
#include <vector>
#include "exchange_sort.h"

// Test 1 : tableau normal (variante 4)
TEST(ExchangeSortTest, NormalArray) {
    std::vector<int> arr = { 9, 19, 15, 2, 10, 7, 0, 4 };
    exchangeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{0, 2, 4, 7, 9, 10, 15, 19}));
}

// Test 2 : tableau vide
TEST(ExchangeSortTest, EmptyArray) {
    std::vector<int> arr;
    exchangeSort(arr);
    EXPECT_TRUE(arr.empty());
}

// Test 3 : un seul élément
TEST(ExchangeSortTest, SingleElement) {
    std::vector<int> arr = { 42 };
    exchangeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}

// Test 4 : déjà trié
TEST(ExchangeSortTest, AlreadySorted) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    exchangeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Test 5 : trié à l’envers
TEST(ExchangeSortTest, ReverseSorted) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    exchangeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Test 6 : doublons
TEST(ExchangeSortTest, Duplicates) {
    std::vector<int> arr = { 3, 1, 2, 3, 1 };
    exchangeSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 3}));
}
