//
// Created by jonathan panchana on 23/5/2025.
//

#include "linear_search.h"

bool linearSearch(const std::vector<int> &arr, int target) {
    for (int num : arr) {
        if (num == target) {
            return true;
        }
    }
    return false;
}