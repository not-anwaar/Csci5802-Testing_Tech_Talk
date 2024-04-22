/**
 * 
 * Some Demo Code for Unit Testing
 * 
*/
#include "sorting_algs.hpp"

std::array<int, N> bubble_sort(std::array<int, N> a) {
    std::array<int, N> sorted = a;
    for (int i = 0; i < N-1; i++) {
        bool swapped = false;
        for (int j = 0; j < N-i-1; j++) {
            if (sorted[j] > sorted[j+1]) {
                int temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    return sorted;
}

std::array<int, N> selection_sort(std::array<int, N> a) {
    std::array<int, N> sorted = a;
    for (int i = 0; i < N-1; i++) {
        int min = i;
        for (int j = i+1; j < N; j++) {
            if (sorted[j] < sorted[min]) min = j;
        }
        int temp = sorted[min];
        sorted[min] = sorted[i];
        sorted[i] = temp;
    }
    return sorted;
}

std::array<int, N> insertion_sort(std::array<int, N> a) {
    std::array<int, N> sorted = a;
    for (int i = 1; i < N; i++) {
        int val = sorted[i];
        int j;
        for (j = i-1; j >= 0 && val < sorted[j]; j--) sorted[j+1] = sorted[j];
        sorted[j+1] = val;
    }
    return sorted;
}

bool is_sorted(std::array<int, N> a) {
    for (int i = 1; i < N; i++) {
        if (a[i] < a[i-1]) return false;
    }
    return true;
}





