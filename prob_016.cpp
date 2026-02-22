// Reverse subarray [l, r]

#include <iostream>
#include <vector>

void ReverseSubarray(std::vector<int>& v, int left, int right) {
    int n = v.size();
    if (left < 0 || right >= n || left > right) return;

    while (left < right) {
        std::swap(v[left] , v[right]);
        ++left;
        --right;
    }
}

int main() {

    std::vector<int> v = {5,1,0,6,7,4,3,9};
    int left = 5;
    int right = 6;

    ReverseSubarray(v, left, right);
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
