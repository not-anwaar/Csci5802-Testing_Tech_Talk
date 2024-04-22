#include <iostream>
#include "sorting_algs.hpp"

using namespace std;

int main() {
    array<int, N> not_sorted = {5, 4, 3, 2, 1};
    array<int, N> sorted = {1, 2, 3, 4, 5};
    
    array<int, N> bubble = bubble_sort(not_sorted);
    array<int, N> selection = selection_sort(not_sorted);
    array<int, N> insertion = insertion_sort(not_sorted);

    cout << "Bubble Sort: ";
    for (int i = 0; i < N; i++) {
        cout << bubble[i] << " ";
    }
    cout << endl;
    cout << "Selection Sort: ";
    for (int i = 0; i < N; i++) {
        cout << selection[i] << " ";
    }
    cout << endl;
    cout << "Insertion Sort: ";
    for (int i = 0; i < N; i++) {
        cout << insertion[i] << " ";
    }
    cout << endl;

    if (is_sorted(sorted)) {
        cout << "is_sorted works" << endl;
    }
    return 0;
} 