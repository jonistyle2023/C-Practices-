//
// Created by jonathan panchana rodríguez on 23/5/2025.
//

#include "selection_sort.h"
#include <algorithm>

void selectionSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
    }
}