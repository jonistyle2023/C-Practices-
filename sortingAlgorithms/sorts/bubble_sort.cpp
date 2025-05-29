//
// Created by jonathan Panchana Rodríguez on 23/5/2025.
//

#include <algorithm> // Para el uso de std::swap
#include "../include/bubble_sort.h"

void bubbleSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}