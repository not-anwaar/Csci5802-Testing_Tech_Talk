#ifndef SORTING_ALGS_HPP
#define SORTING_ALGS_HPP
#include <algorithm>
#include <array>
#include <iterator>
#define N 5

std::array<int, N> bubble_sort(std::array<int, N> a);
std::array<int, N> selection_sort(std::array<int, N> a);
std::array<int, N> insertion_sort(std::array<int, N> a);
bool is_sorted(std::array<int, N> a);

#endif