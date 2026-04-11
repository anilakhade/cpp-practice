#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> MergeTwoSortedArrays(const std::vector<int>& v1, const std::vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();

    std::vector<int> result;
    result.reserve(n1 + n2);

    int i = 0;
    int j = 0;

    while (i < n1 && j < n2) {
        if (v1[i] <= v2[j]) {
            result.push_back(v1[i]);
            ++i;
        } else {
            result.push_back(v2[j]);
            ++j;
        }
    }

    while (i < n1) {
        result.push_back(v1[i]);
        ++i;
    }

    while (j < n2) {
        result.push_back(v2[j]);
        ++j;
    }

    return result;
}

// ==============================================================================

std::vector<int> MergeTwoSortedArraysUsingStl(const std::vector<int>& v1, std::vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();

    std::vector<int> result(n1 + n2);

    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());

    return result;
}

// ==============================================================================
int main() {
    std::vector<int> v1 = {1,2,4,5,6};
    std::vector<int> v2 = {2,4,6,7,9};

    std::vector<int> v3 = MergeTwoSortedArrays(v1, v2);
    std::vector<int> v4 = MergeTwoSortedArraysUsingStl(v1, v2);

    std::cout << "this is manual method : ";
    for (int x : v3) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "this is STL way usning algorithm : ";
    for (int x : v4) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
